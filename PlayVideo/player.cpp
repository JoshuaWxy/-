#include "player.h"
#include "ui_player.h"
#include<QAudioOutput>
#include<QFileDialog>
#include<QUrl>
#include<QVBoxLayout>
#include<QStyle>
#include<QMouseEvent>
#include<QMediaPlayer>
#include"volumeslider.h"
void Player::closeEvent(QCloseEvent *event)
{
    this->hide();
    m_player->pause();


}
Player::Player(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
  this->setWindowFlag(Qt::Window, true);
    ui->widgetvideo->installEventFilter(this);
    m_player = new QMediaPlayer(this);
    m_audioOutut = new QAudioOutput(this);
    //设置音频输出设备
    m_player->setAudioOutput(m_audioOutut);
    //设置视频输出设备
    m_player->setVideoOutput(ui->widgetvideo);

    slider = new volumeSlider(this);
    connect(ui->btn_start,QPushButton::clicked,this,Player::open);
    connect(ui->btn_stop,QPushButton::clicked,this,Player::stop);

   // 创建工具按钮
    ui->m_startButton->setIcon(style()->standardIcon(QStyle::SP_MediaStop));
    ui->m_stopButton->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));

    connect(ui->m_startButton,QToolButton::clicked,m_player,QMediaPlayer::play);
    connect(ui->m_stopButton,QToolButton::clicked,m_player,QMediaPlayer::pause);


    //进度条状态
    connect(m_player,QMediaPlayer::durationChanged,this,Player::durationChanged);
    connect(m_player,QMediaPlayer::positionChanged,this,Player::positionChanged);

    connect(ui->horizontalSlider,QSlider::sliderMoved,this,Player::seek);

    connect(m_player,QMediaPlayer::mediaStatusChanged,this,Player::do_mediaStatusChanged);

}
/**
 * @brief 处理单击双击视频区事件
 * @param watched
 * @param event
 * @return eventFilter(QObject *watched, QEvent *event)
 */

bool Player::eventFilter(QObject *watched, QEvent *event)
{
    if(watched==ui->widgetvideo)
    {
        if(event->type()==QMouseEvent::MouseButtonPress)
        {
            if(m_player->playbackState()==QMediaPlayer::PlayingState)
                m_player->pause();
            else
                m_player->play();

        }
        else if (event->type()==QMouseEvent::MouseButtonDblClick)
        {
            if (!isFullScreen()) {
                showFullScreen();
                QPoint btnPos = ui->btn_volumn->mapToGlobal(QPoint(0, 0));
                int btnWidth = ui->btn_volumn->width();

                int sliderX = btnPos.x() + (btnWidth / 2) - (slider->width() / 2);
                int sliderY = btnPos.y() - slider->height();
                slider->move(sliderX, sliderY);
            } else {
                showNormal();
                QPoint btnPos = ui->btn_volumn->mapToGlobal(QPoint(0, 0));
                int btnWidth = ui->btn_volumn->width();

                int sliderX = btnPos.x() + (btnWidth / 2) - (slider->width() / 2);
                int sliderY = btnPos.y() - slider->height();
                slider->move(sliderX, sliderY);
            }
        }
    }
    return QDialog::eventFilter(watched,event);
}

/**
 * @brief player的本身状态发生变化处理
 * @param status
 */

void Player::do_mediaStatusChanged(QMediaPlayer::MediaStatus status)

{
    if(status==QMediaPlayer::EndOfMedia)
        playNextVideo();

}

/**
 * @brief 视频播放结束后 播放下一个视频
 */
void Player::playNextVideo()
{
    m_player->play();
}

/**
 * @brief 打开视频文件
 */
void Player::open()
{
// 获取当前应用程序的目录路径
QString projectDir = QCoreApplication::applicationDirPath();

// 指定相对于项目文件夹的文件路径
QString relativeFilePath = "china.mp4"; // 替换为目标文件名
QString filePath = QDir(projectDir).filePath(relativeFilePath);

// 检查路径是否为空
if(filePath.isNull()) {
    // 如果路径为空，则直接返回
    return;
}

// 设置媒体文件源，并播放
m_player->setSource(QUrl::fromLocalFile(filePath));
m_player->play();

}

/**
 * @brief 停止
 */

void Player::stop()
{
    m_player->stop();
}

/**
 * @brief slider变化，视频内容变化
 * @param msecond
 */

void Player::seek(int msecond)
{
    m_player->setPosition(msecond);

}

/**
 * @brief 总时长获取
 * @param duration
 */

void Player::durationChanged(qint64 duration)
{
    m_duration = duration/1000;
    ui->horizontalSlider->setMaximum(duration);
}
/**
 * @brief 视频内容变化
 * @param progress
 */

void Player::positionChanged(qint64 progress)
{
    if(!ui->horizontalSlider->isSliderDown())
        ui->horizontalSlider->setValue(progress);

    undataDurationInfo(progress/1000);
}
/**
 * @brief 暂时没用
 * @param duration
 */


void Player::skip_to_current()
{
    QPoint mousePos = ui->horizontalSlider->mapFromGlobal(QCursor::pos());
    double posRatio = static_cast<double>(mousePos.x()) / ui->horizontalSlider->width();
    qint64 newPosition = m_duration * posRatio;

    m_player->setPosition(newPosition * 1000); // 将秒转换回毫秒
    m_player->play();
}
/**
 * @brief 暂停
 * @param duration
 */


void Player::video_pause()
{
    m_player->pause();
}

/**
 * @brief 滑块滑动，视频内容变化
 */

void Player::seekPosion()
{
    int position = ui->horizontalSlider->value();

    // 设置播放位置
    m_player->setPosition(position);
    m_player->play();
}
/**
 * @brief 更新label时长
 */

//把时间进度写到label
void Player::undataDurationInfo(qint64 currentInfo)
{
    QString tStr;
    if(currentInfo||m_duration){
        //算小时，分钟，秒和毫秒
        QTime currentTime((currentInfo/3600)%60,(currentInfo/60)%60,currentInfo%60,(currentInfo*1000)%1000);
        QTime totalTime((m_duration/3600)%60,(m_duration/60)%60,(m_duration%60),(m_duration*1000)%1000);
        QString format = "mm:ss";
        if(m_duration>3600)
            format = "hh:mm:ss";
        tStr = currentTime.toString(format)+" / " +totalTime.toString(format);
    }
    ui->label_duration->setText(tStr);
}

Player::~Player()
{
    delete ui;
}
/**
 * @brief 打开视频文件点击
 */
void Player::on_btn_openFile_clicked()
{


    QString filePath = QFileDialog::getOpenFileName(this, "选择视频文件", "", "MP4文件,WAV文件(*.mp4 *wav)");

    if (!filePath.isEmpty()) {
        m_player->setSource(QUrl::fromLocalFile(filePath));
        m_player->play();
    }

}

/**
 * @brief 音量滑块滑动
 * @param value
 */


/**
 * @brief 快进
 */
void Player::on_btn_speedFoward_clicked()
{
    qint64 curPosition = m_player->position();
    m_player->setPosition(curPosition+5000);

}
/**
 * @brief 快退
 */

void Player::on_btn_speedBack_clicked()
{
    qint64 curPosition = m_player->position();
    m_player->setPosition(curPosition-5000);
}

/**
 * @brief 视频倍速实现
 * @param arg1
 */

void Player::on_combo_speed_currentTextChanged(const QString &arg1)
{
    if(arg1=="1.0")
        m_player->setPlaybackRate(1.0);
    else if(arg1=="0.75")
        m_player->setPlaybackRate(0.75);
    else if(arg1=="1.25")
        m_player->setPlaybackRate(1.25);
    else if(arg1=="1.5")
        m_player->setPlaybackRate(1.5);
    else if(arg1=="2.0")
        m_player->setPlaybackRate(2.0);
}
/**
 * @brief 全屏逻辑
 */
#include<QScreen>
void Player::on_btn_fullScreen_clicked()
{
    if (!ok) {
        showFullScreen();
       //setWindowState(Qt::WindowFullScreen);
        QPoint btnPos = ui->btn_volumn->mapToGlobal(QPoint(0, 0));
        int btnWidth = ui->btn_volumn->width();

        int sliderX = btnPos.x() + (btnWidth / 2) - (slider->width() / 2);
        int sliderY = btnPos.y() - slider->height();
        slider->move(sliderX, sliderY);
        ok=true;
    } else {
        showNormal();
        QPoint btnPos = ui->btn_volumn->mapToGlobal(QPoint(0, 0));
        int btnWidth = ui->btn_volumn->width();

        int sliderX = btnPos.x() + (btnWidth / 2) - (slider->width() / 2);
        int sliderY = btnPos.y() - slider->height();
        slider->move(sliderX, sliderY);
        ok=false;
    }
}


void Player::on_btn_volumn_clicked()
{   if(!isShowSlider)
    {   qDebug("show");

        connect(slider,&volumeSlider::volumeValue,this,&Player::updatePlayerVolume);
        QPoint btnPos = ui->btn_volumn->mapToGlobal(QPoint(0, 0));
        int btnWidth = ui->btn_volumn->width();

        int sliderX = btnPos.x() + (btnWidth / 2) - (slider->width() / 2);
        int sliderY = btnPos.y() - slider->height();
        slider->move(sliderX, sliderY);

        slider->show();
        isShowSlider=true;
    }
    else
    {
        slider->close();
        isShowSlider=false;

    }

}

void Player::updatePlayerVolume(int value)
{   qDebug("volume");
    m_audioOutut->setVolume(value);
}

