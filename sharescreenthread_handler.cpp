#include "sharescreenthread.h"
#include <QGuiApplication>
#include <QScreen>
#include <QImageReader>
#include <QCursor>
/**
 * @brief 设置发送质量
 * @param value
 */
void ShareScreenThread::setQuality(const int value)
{
    m_sendQuality = value;
}

/**
 * @brief 得到接受和发送的图片
 * @param getOk
 * @param buffSize
 * @return
 */

const QPixmap& ShareScreenThread::getPixmap(bool& getOk, int& buffSize)
{
    if (m_state == ShareScreen_SendRunning) {
        buffSize = m_sendByte;
        getOk = m_sendOk;
        m_sendOk = false;
        return pixmap;
    } else {
        if (!m_recvQueue.size())
            return pixmap;

        QMutexLocker locker(&m_pixmapMutex);
        QByteArray* pByte  = m_recvQueue.dequeue();
        pixmap.loadFromData((uchar *)pByte->data(), pByte->length());

        buffSize = pByte->length();
        delete pByte;
        getOk =true;
        return pixmap;
    }

}

/**
 * @brief 获得发送的屏幕数据
 */

void ShareScreenThread::grabWindow()
{
    static char buf[ShareScreen_DatagramSize+ShareScreen_PrefixSize + 10];
    QMutexLocker locker(&m_mutex);
    QScreen *screen = QGuiApplication::primaryScreen();
    pixmap = screen->grabWindow(0);


    QByteArray ba_pic;
    ba_pic.resize(0); //清除空间
    QBuffer bf(&ba_pic);
    if (pixmap.save(&bf, "JPG",m_sendQuality))
    {    QByteArray compressedData = qCompress(ba_pic, 1);
        int cnt = compressedData.size() / ShareScreen_DatagramSize;
        cnt += compressedData.size() % ShareScreen_DatagramSize !=0 ? 1 : 0;
        int size = compressedData.size();
        m_sendByte = size;
        buf[0] = 'J';
        buf[1] = 'P';
        buf[2] = 'G';
        buf[3] = cnt;
        buf[4] = 0;

        int offset = 0;
        while(size>0) {
            int sendLen = ShareScreen_DatagramSize;
            if (size < ShareScreen_DatagramSize) {
                sendLen = size;
                size = 0;
            } else {
                size -= ShareScreen_DatagramSize;
            }
            memcpy(buf+ShareScreen_PrefixSize, compressedData.data()+offset, sendLen);
            m_udp->writeDatagram(buf, sendLen+ShareScreen_PrefixSize, m_groupAddress,44544);
            m_udp->waitForBytesWritten();
            usleep(100);
            buf[4]+=1;
            offset+=sendLen;
        }
    }
    m_sendOk = true;
}

/**
 * @brief 得到接受的屏幕数据
 */

void ShareScreenThread::getWindow()
{
    static char allBuf[ShareScreen_MaxLen];
    static char buf[ShareScreen_DatagramSize + ShareScreen_PrefixSize + 10];
    static int preCnt = -1;

    while (m_state == ShareScreen_RecvRunning) {
        if (m_udp->hasPendingDatagrams()) {
            buf[0] = '0';
            buf[1] = '0';
            buf[2] = '0';
            int ret = m_udp->readDatagram(buf, ShareScreen_DatagramSize+ShareScreen_PrefixSize);      // 读取
            buf[ret] = 0;
            m_preGetWindowMSec = QDateTime::currentDateTime().toMSecsSinceEpoch();
            int currentCnt = 0,cnt = 0;
            if (buf[0]== 'J' && buf[1]== 'P' && buf[2]== 'G') {
                cnt = (int)buf[3];
                currentCnt = (int)buf[4];
                if (currentCnt == 0) {
                    preCnt = -1;

                }

                if (currentCnt - preCnt == 1) {
                    memcpy(allBuf+currentCnt*ShareScreen_DatagramSize, buf+ShareScreen_PrefixSize, ret-ShareScreen_PrefixSize);
                    preCnt = currentCnt;

                    if (currentCnt == cnt - 1) {
                        allBuf[currentCnt * ShareScreen_DatagramSize + ret-ShareScreen_PrefixSize] = 0;
                        QByteArray compressedData(allBuf, currentCnt * ShareScreen_DatagramSize + ret - ShareScreen_PrefixSize);
                        QByteArray uncompressedData = qUncompress(compressedData);
                        if (m_recvQueue.size() >= ShareScreen_QueueLen)
                            continue;
                        m_pixmapMutex.lock();
                        QByteArray *pByte = new QByteArray(uncompressedData);
                        m_recvQueue.enqueue(pByte);
                        m_pixmapMutex.unlock();
                    }

                } else {
                    preCnt = -1;
                }
            }

        } else {
            if (QDateTime::currentDateTime().toMSecsSinceEpoch() - m_preGetWindowMSec > 1000) {
                m_state = ShareScreen_Stop;
                emit stateChange();
            }
        }
    }


}



