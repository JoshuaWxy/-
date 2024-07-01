#include "mymusic.h"
#include "ui_mymusic.h"
#include <QMediaPlayer>
#include <QFileDialog>
#include <QRandomGenerator>
#include<QMessageBox>
MyMusic::MyMusic(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MyMusic)
{
    ui->setupUi(this);
    this->setFixedSize(614,417);
    ui->btnPlay->setIcon(QIcon(":/images/images/bf.png"));
    ui->listWidget->installEventFilter(this);
    player=new QMediaPlayer(this);
    audioOutput=new QAudioOutput(this);
    player->setAudioOutput(audioOutput);
    m_pTimer=new QTimer();
    connect(m_pTimer,&QTimer::timeout,this,&MyMusic::upDateRote);
    connect(ui->btnPlay,&QPushButton::clicked,this,&::MyMusic::onStartOrStopRotate);
    connect(player,&QMediaPlayer::positionChanged,this,&MyMusic::do_positionChanged);
    connect(player,&QMediaPlayer::durationChanged,this,&MyMusic::do_durationChanged);
    connect(player,&QMediaPlayer::sourceChanged,this,&MyMusic::do_sourceChanged);
    connect(player,&QMediaPlayer::playbackStateChanged,this,&MyMusic::do_playbackStateChanged);


    QString projectDir = QCoreApplication::applicationDirPath();

    // 默认一首音乐
    QString relativeFilePath = "水手.mp3"; // 替换为目标文件名
    QString filePath = QDir(projectDir).filePath(relativeFilePath);
    QFileInfo fileInfo(filePath);
    QListWidgetItem *aItem=new QListWidgetItem(fileInfo.fileName());
    aItem->setIcon(QIcon(":/images/images/musicFile.png"));
    aItem->setData(Qt::UserRole,QUrl::fromLocalFile(filePath));
    ui->listWidget->addItem(aItem);

}
bool MyMusic::eventFilter(QObject *watched, QEvent *event)
{
    if(event->type()!=QEvent::KeyPress)
        return QWidget::eventFilter(watched,event);

    QKeyEvent *keyEvent=static_cast<QKeyEvent *>(event);
    if(keyEvent->key()!=Qt::Key_Delete)
        return QWidget::eventFilter(watched,event);

    //如果监视的不是delete键，其他键，就返回事件，不然的话就执行到下面这个
    if(watched==ui->listWidget)
    {
        //takeItem是移除指针，removeItem是直接释放内存
        delete ui->listWidget->takeItem(ui->listWidget->currentRow());
    }

    return true;
}
void MyMusic::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing, true);
    QPainterPath painterPath;
    painterPath.addEllipse(100,100,200,200);
    painter.setClipPath(painterPath);
    painter.drawPath(painterPath);

    QPixmap pixMap(":/images/images/yp.jpeg");
    QTransform transform;
    transform.translate(200,200);  //平移坐标原点  必须
    painter.setTransform(transform);

    painter.save();
    painter.rotate(2*m_Rote);
        //将需要旋转的内容绘制在中间
    painter.drawPixmap(-100,-100,200,200,pixMap);  //旋转操作始终是围绕坐标原点进行旋转
    painter.restore();

}

MyMusic::~MyMusic()
{
    delete ui;
}
/**
  * @brief 更新旋转的角度
*/
void MyMusic::upDateRote()
{
    m_Rote=m_Rote-1;
    if(m_Rote==-180)
    {
        m_Rote=0;
    }
    update();
}

void MyMusic::onStartOrStopRotate()
{
    m_bStart=!m_bStart;
    if(m_bStart)
    {
        m_pTimer->start(100);
    }
    else
    {
        m_pTimer->stop();
    }
}

/**
  * @brief 检测position——silider 计算当前播放时间显示在后面
*/
void MyMusic::do_positionChanged(qint64 position)
{
    if(ui->sliderPosition->isSliderDown())
        return;

    ui->sliderPosition->setSliderPosition(position);
    int secs=position/1000;
    int mins=secs/60;
    secs %= 60;
    positionTime=QString::asprintf("%d:%d",mins,secs);

    ui->labRatio->setText(positionTime+"/"+durationTime);
}
/**
  * @brief 设置position最大值时间 显示在其后
*/
void MyMusic::do_durationChanged(qint64 duration)
{
    ui->sliderPosition->setMaximum(duration);
    int secs=duration/1000;
    int mins=secs/60;
    secs %= 60;
    durationTime=QString::asprintf("%d:%d",mins,secs);

    ui->labRatio->setText(positionTime+"/"+durationTime);
}
/**
  * @brief 显示当前播放音乐名称
 @param *media
*/
void MyMusic::do_sourceChanged(const QUrl &media)
{
    ui->labCurMedia->setText(media.fileName());
}
/**
  * @brief //循环播放：1、自动下一首。2、从最后一首跳到第一首
*/
void MyMusic::do_playbackStateChanged(QMediaPlayer::PlaybackState newState)
{

    if((newState==QMediaPlayer::StoppedState)&&loopPay)
    {

        int count=ui->listWidget->count();
        int curRow=ui->listWidget->currentRow();
        ++curRow;
        curRow=curRow>=count?0:curRow;
        ui->listWidget->setCurrentRow(curRow);
        player->setSource(ui->listWidget->currentItem()->data(Qt::UserRole).value<QUrl>());
        player->play();
    }
}

void MyMusic::on_act_add_triggered()
{
    QString curPath=QDir::homePath();
    QString dlgTitle="选择音频文件";
    QString filter="音频文件(*.mp3 *.wav *.wma);;所有文件(*.*)";
    QStringList fileList= QFileDialog::getOpenFileNames(this,dlgTitle,curPath,filter);
    if(fileList.isEmpty())
        return;

    foreach (const auto& item, fileList) {
        QFileInfo fileInfo(item);
        QListWidgetItem *aItem=new QListWidgetItem(fileInfo.fileName());
        aItem->setIcon(QIcon(":/images/images/musicFile.png"));
        aItem->setData(Qt::UserRole,QUrl::fromLocalFile(item));
        ui->listWidget->addItem(aItem);
    }
}


void MyMusic::on_act_remove_triggered()
{
    //只是从Widget移除
    int index=ui->listWidget->currentRow();
    if(index<0) return;

    delete ui->listWidget->takeItem(index);
    if(ui->listWidget->count()<=0)
        loopPay=false;
}


void MyMusic::on_act_clear_triggered()
{
    loopPay=false;
    ui->listWidget->clear();
    player->stop();
}


void MyMusic::on_act_quit_triggered()
{
    this->close();
}


void MyMusic::on_btnPrevious_clicked()
{
    int curRow=ui->listWidget->currentRow();
    --curRow;
    curRow=curRow<0?0:curRow;

    ui->listWidget->setCurrentRow(curRow);

    loopPay=false;
    player->setSource(ui->listWidget->currentItem()->data(Qt::UserRole).value<QUrl>());
    player->play();
    loopPay=ui->btnLoop->isChecked();
}


void MyMusic::on_btnPlay_clicked()
{
    if(player->playbackState() == QMediaPlayer::PlayingState)
    {
        // 如果正在播放，则暂停并设置图标为播放图标
        player->pause();
        ui->btnPlay->setIcon(QIcon(":/images/images/bf.png")); // 假设这是播放图标的路径
    }
    else
    {
        // 如果不是播放状态，则播放并设置图标为暂停图标
        if(ui->listWidget->count() <= 0)
            return;

        if(ui->listWidget->currentRow() < 0)
            ui->listWidget->setCurrentRow(0);

        // 保存当前播放位置
        qint64 currentPosition = player->position();

        player->setSource(ui->listWidget->currentItem()->data(Qt::UserRole).value<QUrl>());
        player->play();

        // 设置播放位置
        player->setPosition(currentPosition);

        ui->btnPlay->setIcon(QIcon(":/images/images/zt.png"));
    }
}


void MyMusic::closeEvent(QCloseEvent *event)
{   Q_UNUSED(event);
    deleteLater();
}

void MyMusic::on_btnNext_clicked()
{
    int count=ui->listWidget->count();
    int curRow=ui->listWidget->currentRow();
    ++curRow;
    curRow=curRow>=count?count-1:curRow;

    ui->listWidget->setCurrentRow(curRow);

    loopPay=false;

    player->setSource(ui->listWidget->currentItem()->data(Qt::UserRole).value<QUrl>());
    player->play();
    loopPay=ui->btnLoop->isChecked();
}


void MyMusic::on_btnrand_clicked()
{
    // 获取 QListWidget 中的项数
    int itemCount = ui->listWidget->count();
    if (itemCount == 0) {
        return;
    }
    // 确保player已经初始化
    if (!player) {

        return;
    }

    // 生成一个随机索引
    int randomIndex = QRandomGenerator::global()->bounded(itemCount);

    // 获取随机索引处的项，并获取其文本（即音频文件名，假设没有扩展名）
    QListWidgetItem *randomItem = ui->listWidget->item(randomIndex);
    QString audioFileName = randomItem->text();
    //
    // 设置媒体源并播放
    player->setSource(ui->listWidget->currentItem()->data(Qt::UserRole).value<QUrl>());
    player->play();
}


void MyMusic::on_doubleSpinBox_valueChanged(double arg1)
{
    player->setPlaybackRate(arg1);
}


void MyMusic::on_btnLoop_clicked(bool checked)
{
    loopPay=checked;
}


void MyMusic::on_sliderVolumn_valueChanged(int value)
{
    player->audioOutput()->setVolume(value/100.0);
}


void MyMusic::on_sliderPosition_valueChanged(int value)
{
    player->setPosition(value);
}


void MyMusic::on_listWidget_doubleClicked(const QModelIndex &index)
{
    Q_UNUSED(index);
    loopPay=false;
    player->setSource(ui->listWidget->currentItem()->data(Qt::UserRole).value<QUrl>());
    player->play();
    loopPay=ui->btnLoop->isChecked();
}


void MyMusic::on_btnSound_clicked()
{
    bool mute=player->audioOutput()->isMuted();
    player->audioOutput()->setMuted(!mute);
    if(mute)
        ui->btnSound->setIcon(QIcon(":/images/images/yl.png"));
    else
    {
        ui->btnSound->setIcon(QIcon(":/images/images/mute.bmp"));
        ui->doubleSpinBox->setValue(0.0);
    }
}

