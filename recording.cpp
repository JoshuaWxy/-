#include "recording.h"
#include "ui_recording.h"
#include<QDateTime>
#include<QTimer>
#include<QFileDialog>
#include<QStandardPaths>
Recording::Recording(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Recording)
{
    ui->setupUi(this);

    //录制窗口ui初始化

    setAttribute(Qt::WA_TranslucentBackground, true);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    m_rThread = new ReadThread();
    connect(m_rThread,&ReadThread::playState,this,&Recording::StateChanged);
    connect(&m_timer,&QTimer::timeout,this,&Recording::do_timeout);
    connect(this,&Recording::recordingSetting,m_rThread,&ReadThread::do_recordingSetting);
}

Recording::~Recording()
{
    if(m_rThread)
    {
        m_rThread->close();
        m_rThread->wait();
        delete m_rThread;
    }
    delete ui;
}

/**
 * @brief 点击开始录制按钮
 */

void Recording::on_but_startRecording_clicked()
{       if(!m_isRecording)
    {   QString rate=ui->spinBox_frame_rate->text();
        QString size=ui->combo_size->currentText();
        QString qulity= ui->combo_qulity->currentText();

        if(!hadSavePath()) return;
        emit recordingSetting(rate,size,qulity);

        m_rThread->open("desktop");

    }
    else
        m_rThread->close();
}

/**
 * @brief 录制状态变化对应处理
 */

void Recording::StateChanged(ReadThread::PlayState state)
{
    if(state == ReadThread::play)
    {   m_isRecording=true;
        this->setWindowTitle(QString("正在录制：%1").arg(ui->line_path->text()));
        ui->but_startRecording ->setText("停止录制");
        m_timer.start(1000);
        ui->timeEdit->setTime(QTime(0, 0, 0, 0));
    }
    else
    {
        m_isRecording=false;
        ui->but_startRecording->setText("开始录屏");

        m_timer.stop();
    }

}

/**
 * @brief 得到保存路径后操作
 * @return
 */

bool Recording::hadSavePath()
{
    QString strDefault = QString("%1/%2.mp4").arg(QStandardPaths::writableLocation(QStandardPaths::MoviesLocation))
                             .arg(QDateTime::currentDateTime().toString("yyyy-MM-dd HH-mm-ss"));
    QString strPath = QFileDialog::getSaveFileName(this, "将视频保存到",  strDefault,
                                                   "视频文件 (*.mp4 *.avi *.mov *.wmv *.flv *.h264 *.h265);;"
                                                   "其它文件格式 (*)");

    if(strPath.isEmpty()) return false;

    ui->line_path->setText(strPath);
    m_rThread->setPath(strPath);
    return true;
}

/**
 * @brief 更新录制时间
 */

void Recording::do_timeout()
{
    ui->timeEdit->setTime(ui->timeEdit->time().addSecs(1));
}

/**
 * @brief 关闭按钮点击
 */

void Recording::on_btn_close_clicked()
{   m_rThread->close();
    m_isRecording=false;
    m_timer.stop();
    this->accept();
}


