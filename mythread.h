#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QObject>
#include <QThread>
#include<QImage>
#include<QMutex>
#include"mainwindow.h"
class DataSendProcess : public QObject
{
    Q_OBJECT
public:
    explicit DataSendProcess(QObject *parent = nullptr);
    ~DataSendProcess();


public:
    void working(QString );
    QMutex mutex;


signals:
    void  picDataFinished(QByteArray);
    void streamDataFinished(QByteArray streamData);
};



class DataReceivedProcess : public QObject
{
    Q_OBJECT
public:
    explicit DataReceivedProcess(QObject *parent = nullptr);

public:
    void working(QByteArray&);
    QMutex mutex;

signals:
    void finished(QByteArray&);
};



class DataImgLoadProcess : public QObject
{
    Q_OBJECT
public:
    explicit DataImgLoadProcess(QObject *parent = nullptr);

public:
    void working(QByteArray&,quint8);
    QMutex mutex;
signals:
    void imageFinished(QImage &d);
    void videoFinished(QImage &d);
    void pixFinished(const QPixmap &pix);

};



class CaptureImgSaveProcess : public QObject
{
    Q_OBJECT
public:
    explicit CaptureImgSaveProcess(QObject *parent = nullptr);

public:
    void working(QImage&);
    QImage m_image;
    QMutex mutex;
signals:
    void  captureImgData(QByteArray&);

};

#endif // MYTHREAD_H
