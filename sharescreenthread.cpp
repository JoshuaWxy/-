#include "sharescreenthread.h"
#include<QNetworkInterface>
ShareScreenThread::ShareScreenThread(QThread *parent) : QThread(parent),
    m_state(ShareScreen_None),
    m_groupAddress("239.255.43.21"),
    m_runCnt(0),
    m_canRead(false),
    m_sendQuality(14)
{
    m_recvQueue.clear();
       m_udp = new QUdpSocket();
           QList<QNetworkInterface> interfaces = QNetworkInterface::allInterfaces();

    for (const QNetworkInterface& iface : interfaces) {
        if (iface.flags().testFlag(QNetworkInterface::IsUp) &&
            iface.flags().testFlag(QNetworkInterface::CanMulticast) &&
            iface.type() == QNetworkInterface::Wifi) {
            // 选择满足条件的无线网卡接口
            wirelessInterface = iface;
            break;
        }
    }

}
/**
 * @brief 获取主界面点击传入地址，端口，网络类型参数
 * @param groupAddress
 * @param iface
 * @param groupPort
 */
void ShareScreenThread::getInfo(const QHostAddress &groupAddress, const QNetworkInterface &iface, quint16 groupPort)
{
    m_groupAddress=groupAddress;
    wirelessInterface=iface;
    m_groupPort = groupPort;



    if(m_groupPort!=0&&!m_groupAddress.isNull())
    {
    m_udp->bind(QHostAddress::AnyIPv4, 44544, QUdpSocket::ShareAddress | QUdpSocket::ReuseAddressHint);
    m_udp->joinMulticastGroup(m_groupAddress,wirelessInterface);
        this->start();
    }
}

/**
 * @brief 开始获取屏幕，更改状态枚举值
 * @return
 */

bool ShareScreenThread::startGrabWindow()
{
    QMutexLocker locker(&m_mutex);
    isStartRun=true;
    if (m_state == ShareScreen_Stop || m_state == ShareScreen_SendRunning) {
        m_state = ShareScreen_SendRunning;
        emit stateChange();
        return true;
    }
    return false;
}

/**
 * @brief 停止获取屏幕，更改状态枚举值
 * @return
 */

bool ShareScreenThread::stopGrabWindow()
{
    QMutexLocker locker(&m_mutex);
    isStartRun=false;
    if (m_state == ShareScreen_SendRunning || m_state == ShareScreen_Stop) {
        m_state = ShareScreen_EnterStop;
        return true;
    }

    return false;
}

/**
 * @brief 主界面点击开始共享按钮传入参数
 * @param state
 */

void ShareScreenThread::startThread(bool state)
{
    isStartRun=state;
}

/**
 * @brief 主界面点击关闭共享按钮传入参数
 * @param state
 */

void ShareScreenThread::stopThread(bool state)
{
    isStartRun=state;
}

/**
 * @brief 屏幕共享udp发送和接收线程
 */

void ShareScreenThread::run()
{
    while(isStartRun) {

        switch (m_state) {
            case ShareScreen_None:
                m_runCnt++;
                if (m_runCnt > 100) {
                    m_state = ShareScreen_Stop;
                    m_preGetWindowMSec = QDateTime::currentDateTime().toMSecsSinceEpoch();     //记录时间
                    emit stateChange();
                }
                msleep(10);
                if(m_udp->hasPendingDatagrams() ) {
                    m_state = ShareScreen_RecvRunning;
                    emit stateChange();
                    m_preGetWindowMSec = QDateTime::currentDateTime().toMSecsSinceEpoch();     //记录时间
                    getWindow();
                }
                break;
            case ShareScreen_Stop:
                if(m_udp->hasPendingDatagrams()) {
                    m_state = ShareScreen_RecvRunning;
                    emit cleanLabel();
                    emit stateChange();
                    getWindow();

                break;
            case ShareScreen_RecvRunning:
                getWindow();
                break;
            case ShareScreen_SendRunning:
                grabWindow();
                break;
            case ShareScreen_EnterStop:     //清空自己收到消息
                if (m_udp->hasPendingDatagrams() ) {
                    m_udp->receiveDatagram();
                } else {
                    m_state = ShareScreen_Stop;
                    emit stateChange();
                }
                break;

            default: break;
        }

    }
}
}
