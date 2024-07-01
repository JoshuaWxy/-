#include "mythread.h"

#include<QThread>
#include<QWidget>
#include<QBuffer>

#include<QDebug>
#include<QImage>
#include"mainwindow.h"
#include"ui_mainwindow.h"
#include<QGraphicsDropShadowEffect>
DataSendProcess::DataSendProcess(QObject *parent) : QObject{parent}
{

}

DataSendProcess::~DataSendProcess()
{

}

/**
 * @brief 处理客户端发送的原始数据，加载为传输的数据
 * @param index
 */

void DataSendProcess::working(QString  filename)
{

    QImage image;
    if (!image.load( filename)) {
        // 图片加载失败
        return;
    }
    QByteArray picData ;
    {   QMutexLocker locker(&mutex);
        QBuffer buffer(&picData); // picData是QByteArray对象
        buffer.open(QIODevice::WriteOnly);
        image.save(&buffer, "JPG"); // 压缩格式
        buffer.close();
    }

    QByteArray pressedData =qCompress(picData,2);

    emit picDataFinished(picData);

    QByteArray streamData ;
    {QMutexLocker locker(&mutex);
        QDataStream sendOut(&streamData,QIODevice::WriteOnly);
        sendOut.setVersion(QDataStream::Qt_6_2);
        sendOut<<pressedData;
        emit streamDataFinished(streamData);
    }

}



DataReceivedProcess::DataReceivedProcess(QObject *parent) : QObject{parent}
{

}

/**
 * @brief 处理readyread接受传输的数据，加载为发送的原始数据
 * @param imgData
 */

void DataReceivedProcess::working(QByteArray &imgData)
{

    QByteArray receivedData;
    QDataStream receiveIn(&imgData, QIODevice::ReadOnly);
    receiveIn.setVersion(QDataStream::Qt_6_2);

    receiveIn >> receivedData;

    QByteArray unZipPicData =qUncompress(receivedData);
    emit finished(unZipPicData);



}

DataImgLoadProcess::DataImgLoadProcess(QObject *parent) : QObject{parent}
{

}

/**
 * @brief 处理接受完成的原始数据，处理耗时的加载图片过程
 * @param imgData，type
 */


void DataImgLoadProcess::working(QByteArray &imgData,quint8 type)
{
    if(type==1)
    {
        QImage img1;
        {QMutexLocker locker(&mutex);
            img1.loadFromData(imgData,"JPG");
        }
        emit imageFinished(img1);
    }
    else if(type==2)
    {
        {QMutexLocker locker(&mutex);
            QImage img2;
            img2.loadFromData(imgData,"JPG");
            emit videoFinished(img2);
        }
    }
}

CaptureImgSaveProcess::CaptureImgSaveProcess(QObject *parent)
{
    Q_UNUSED(parent);
}

/**
 * @brief 处理摄像头抓取的图片，转为二进制数据
 * @param preview
 */

void CaptureImgSaveProcess::working(QImage &preview)
{
    m_image=preview.scaledToWidth(1280);
    QByteArray imageData;
    {QMutexLocker locker(&mutex);
        QBuffer buffer(&imageData);
        buffer.open(QIODevice::WriteOnly);
        m_image.save(&buffer,"JPG");
        buffer.close();
    }
    QByteArray pressedData =qCompress(imageData,1);
    QByteArray streamData;
    {QMutexLocker locker(&mutex);
        QDataStream out(&streamData,QIODevice::WriteOnly);
        out.setVersion(QDataStream::Qt_6_2);
        out<<pressedData;
    }
    //处理抓取的图片然后发送数据返回
    emit captureImgData(streamData);

}

