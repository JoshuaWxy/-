#include "widget.h"
#include "ui_video.h"
#include<QMessageBox>
Widget::Widget(QWidget *parent)
    : QWidget(parent),
    ui(new Ui::Widget)

{
    ui->setupUi(this);
    setWindowTitle("会议室");
    setWindowIcon(QIcon());
    connect(&m_thread, &ShareScreenThread::stateChange, this, &Widget::onStateChange);
    m_thread.start();

    connect(&m_updateShow, &QTimer::timeout, this, &Widget::onUpdateShow);
    connect(&m_thread,&ShareScreenThread::cleanLabel,this,&Widget::to_cleanLabel);

    setWindowTitle("屏幕共享");
}

Widget::~Widget()
{
    m_thread.terminate();
    delete ui;
}

/**
 * @brief 处理对应状态变化
 */
void Widget::onStateChange()
{
    switch (m_thread.state()) {
    case ShareScreenThread::ShareScreen_None:  break;
    case ShareScreenThread::ShareScreen_Stop: ui->labelHint->setText("等待共享..."); cleanShow(); ui->comboQuality->setEnabled(true); break;
    case ShareScreenThread::ShareScreen_RecvRunning: ui->labelHint->setText("有人正在共享中☺");

        m_pressMSec = QDateTime::currentDateTime().toMSecsSinceEpoch();     //记录的时间
        m_updateShowCnt = 0;
        m_updateShow.start(20);
        ui->comboQuality->setEnabled(false);
        break;
    case ShareScreenThread::ShareScreen_SendRunning: ui->labelHint->setText("您正在共享中☺"); ui->comboQuality->setEnabled(true); break;
    default: break;
    }
}
/**
 * @brief 显示共享信息
 */
void Widget::cleanShow()
{
    ui->labelShow->clear();
    ui->labelByte->setText(QString("每帧: %1KB").arg(0));
    ui->labelFPS->setText("当前FPS: "+ QString("%1").arg(0));

}
/**
 * @brief 显示共享屏幕和共享信息
 */

void Widget::onUpdateShow()
{
    bool getOk = false;
    int size = 0;
    QPixmap pix(m_thread.getPixmap(getOk, size));
    if (size!=0)
        ui->labelByte->setText(QString("每帧: %1KB").arg(size/1024));

    if (getOk == false)
        return;

    pix = pix.scaled(ui->labelShow->size(), Qt::KeepAspectRatio);


    ui->labelShow->setPixmap(pix);

    if (m_updateShowCnt++ >= 10) {
        qint64 tmp = QDateTime::currentDateTime().toMSecsSinceEpoch();
        qint64 durationMs = tmp - m_pressMSec;

        int fps = m_updateShowCnt * 1000/durationMs;
        ui->labelFPS->setText("当前FPS: "+ QString("%1").arg(fps));

        m_updateShowCnt = 0;
        m_pressMSec = tmp;
    }

}

void Widget::on_btnStartShare_clicked()
{
    switch (m_thread.state()) {
    case ShareScreenThread::ShareScreen_None: QMessageBox::information(this,"提示", "正在初始化中!"); return;
    case ShareScreenThread::ShareScreen_Stop: cleanShow(); break;
    case ShareScreenThread::ShareScreen_RecvRunning: QMessageBox::information(this,"提示", "有人正在共享中!"); return;
    case ShareScreenThread::ShareScreen_SendRunning:  QMessageBox::question(this,"询问", "是否取消共享?");

    }

    bool myStartd = ui->btnStartShare->text().contains("停止");

    if (myStartd) {

        m_thread.startThread(false);
        m_thread.quit();
        m_thread.wait();
        m_thread.stopGrabWindow();

        ui->btnStartShare->setText("开始共享");
        ui->labelFPS->setText("当前FPS: 0");
        m_updateShow.stop();
        m_thread.setState(ShareScreenThread::ShareScreen_Stop);

        ui->labelShow->setPixmap(QPixmap());
    } else {
        m_thread.startThread(true);
        m_thread.start();
        m_thread.startGrabWindow();
        ui->btnStartShare->setText("停止共享");
        m_pressMSec = QDateTime::currentDateTime().toMSecsSinceEpoch();     //记录的时间
        m_updateShowCnt = 0;
        m_updateShow.start(10);
        m_thread.setState(ShareScreenThread::ShareScreen_SendRunning);

    }


}
/**
 * @brief 按esc隐藏侧边栏
 * @param event
 */
void Widget::keyPressEvent(QKeyEvent *event)
{


    if (ui->control->isHidden() && event->key() == Qt::Key_Escape) {
        ui->control->show();
        showMaximized();

    }

}


/**
 * @brief 全屏
 */
void Widget::on_btnFull_clicked()
{
    ui->control->hide();

}
/**
 * @brief 传递选择传输质量到子线程
 * @param index
 */
void Widget::on_comboQuality_currentIndexChanged(int index)
{

    switch (index) {
    case 0 : m_thread.setQuality(13); break;
    case 1 : m_thread.setQuality(45); break;
    case 2 : m_thread.setQuality(79); break;
    }
}

void Widget::to_cleanLabel()
{
    emit readyClean();
}

void Widget::do_stopShared()
{

    bool myStartd = ui->btnStartShare->text().contains("停止");

    if (myStartd)
    {

        m_thread.startThread(false);
        m_thread.quit();
        m_thread.wait();
        m_thread.stopGrabWindow();

        m_updateShow.stop();
        m_thread.setState(ShareScreenThread::ShareScreen_None);
        }
}
/**
 * @brief 传递mainwindow网络信息
 * @param groupAddress
 * @param iface
 * @param groupPort
 */

void Widget::do_multicastGroupInfo(const QHostAddress &groupAddress, const QNetworkInterface &iface, quint16 groupPort)
{
    connect(this, &Widget::info, &m_thread, &ShareScreenThread::getInfo);


    emit info(groupAddress,iface, groupPort);
}

