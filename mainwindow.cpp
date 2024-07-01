#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"mythread.h"
#include"ui_notepad.h"
#include"screenshot.h"//截屏
#include"recording.h"//录制录像
#include"player.h"//播放视频，录像
#include"mymessagebox.h"//自定义关闭对话框
#include"notepad.h"
#include"homepage.h"
#include"MyMusic/mymusic.h"
#include"introduction.h"
#include<QBuffer>
#include<QThread>
#include <QImageReader>
#include<QTimer>
#include<QMessageBox>
#include<QMediaRecorder>
#include<QGraphicsDropShadowEffect>
#include<QMovie>
#include<QSoundEffect>

void MainWindow::mousePressEvent(QMouseEvent *event)
{   qDebug("2");
    if(event->button()==Qt::RightButton)
    {    if(m_img.isNull()) return;
        QPoint globalPos = QCursor::pos();
        QTextCursor cursorPos = ui->textEdit-> cursorForPosition(globalPos);

        if (!cursorPos.isNull() && cursorPos.charFormat().isImageFormat())
        {

            int choice = QMessageBox::question(this, "提示", "是否要保存图片吗?", QMessageBox::Yes | QMessageBox::No);

            if(choice==QMessageBox::Yes)
            {   qDebug("保存");
                QString savePath = QStandardPaths::writableLocation(QStandardPaths::PicturesLocation);
                QString fileName = savePath + QString("/savedImg%1.JPG").arg(cntImage);
                m_img.save(fileName);

                cntImage++;
            }
        }
    }

}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    initMainVideo();
    setProperty("canMove",true);
    ui->sendWidget->hide();
    ui->stackedWidget->setCurrentWidget(ui->page_memberShip);
    ui->label_udp_receivedPic->installEventFilter(this);

    this->setStyleSheet("QMainWindow{border-top-left-radius:15px;border-top-right-radius:5px;}");
    //笔记软件


    notePad *newPad = new notePad;
    newPad->setParent(ui->widget_2);
    newPad->move(0,0);
    initQss();

    //会议模式初始化按钮
    ui->btn_udp_textClear->setEnabled(false);
    ui->btn_udp_joinMeeting->setEnabled(true);
    ui->btn_udp_leaveMeeting->setEnabled(false);
    ui->combo_udpIP->setEnabled(true);
    ui->spin_udpPort->setEnabled(true);
    ui->btn_tabM_sendMessage->setEnabled(false);
    ui->btn_tabM_selectPic->setEnabled(false);

    //个人模式初始化按钮
    ui->btn_disconnectInternet->setDisabled(true);
    ui->btn_closeCamera->setEnabled(false);
    ui->btn_startVideo->setEnabled(false);
    ui->btn_stopVideo->setEnabled(false);
    ui->btn_sendPhoto->setEnabled(false);
    ui->btn_sendMessage->setEnabled(false);
    ui->btn_clearMessage->setEnabled(false);
    ui->btn_openCamera->setEnabled(false);
    ui->closeCall->setEnabled(false);
    ui->btn_startCall->setEnabled(false);
    //全局样式表
    // 工具按钮无边框，透明
    QString styleSheet = "QToolButton {"
                         "    border-style: flat;"
                         "    background: transparent;"
                         "}";

    // 将样式表应用到所有的 QToolButton 控件上
    ui->toolBtn_screenShot->setStyleSheet(styleSheet);


    //初始化摄像头模块
    initialCamInfo();

    QImageReader::setAllocationLimit(550);
    client = new QTcpSocket(this);
    timer = new QTimer(this);

    //获取图片数据线程
    fileProcess = new DataSendProcess;
    workerThreadSend = new QThread;


    //接收图片线程初始化，不能放到ready里面，不然就会卡死
    imgProcess = new DataReceivedProcess;
    workerThreadImg = new QThread;
    imgProcess->moveToThread(workerThreadImg);
    connect(this,&MainWindow::imageData,imgProcess,&DataReceivedProcess::working);
    videoProcess = new DataReceivedProcess;
    wokerThreadVideo = new QThread;
    videoProcess->moveToThread(wokerThreadVideo);
    connect(this,&MainWindow::videoData,videoProcess,&DataReceivedProcess::working);



    connect(imgProcess,&DataReceivedProcess::finished,this,&MainWindow::getTcpLoadImageData);
    connect(videoProcess,&DataReceivedProcess::finished,this,&MainWindow::getTcpLoadVideoData);


    //加载图片线程,与tcp共用
    loadProcess = new DataImgLoadProcess;
    workerLoadImg = new QThread;


    loadProcess->moveToThread(workerLoadImg);

    connect(this,&MainWindow::loadData,loadProcess,&DataImgLoadProcess::working);
    connect(loadProcess,&DataImgLoadProcess::imageFinished,this,&MainWindow::showRecivedImg,Qt::QueuedConnection);
    connect(loadProcess,&DataImgLoadProcess::videoFinished,this,&MainWindow::showRecivedVideo,Qt::QueuedConnection);

    //抓取图片线程 共用
    workerCaptureImage = new QThread;
    captureProcess  =new CaptureImgSaveProcess;
    captureProcess->moveToThread(workerCaptureImage);



    //tcp传入
    connect(this,&MainWindow::rawCapturedImg,captureProcess,&CaptureImgSaveProcess::working);
    //转换好的数据拿回来
    connect(captureProcess,&CaptureImgSaveProcess::captureImgData,this,&MainWindow::getCapturedImgData);




    connect(client,&QTcpSocket::connected,this,&MainWindow::do_connected);
    connect(client,&QTcpSocket::disconnected,this,&MainWindow::do_disconnected);
    connect(client,&QTcpSocket::readyRead,this,&MainWindow::do_readyRead);
    connect(client,&QTcpSocket::stateChanged,this,&MainWindow::do_stateChanged);
    connect(timer,&QTimer::timeout,this,&MainWindow::continueToCapture);






    //会员模式
    //筛选组播网卡
    ui->label_udp_receivedPic->installEventFilter(this);
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

    //线程初始化
    updFileProcess = new DataSendProcess;
    udpWorkerThreadSend = new QThread;

    udpSocket=new QUdpSocket(this);
    udpSocket->setSocketOption(QAbstractSocket::MulticastTtlOption,2);
    udpSocket->setSocketOption(QAbstractSocket::ReceiveBufferSizeSocketOption,1024*1024);
    connect(udpSocket,&QUdpSocket::readyRead,this,&MainWindow::do_udp_readyRead);

    //接收图片线程初始化，不能放到ready里面，不然就会卡死
    udpImgProcess = new DataReceivedProcess;
    udpReceivedImageThread = new QThread;
    udpImgProcess->moveToThread(udpReceivedImageThread);
    connect(this,&MainWindow::udpReceivedStream,udpImgProcess,&DataReceivedProcess::working);
    connect(udpImgProcess,&DataReceivedProcess::finished,this,&MainWindow::getLoadData);



    //加载线程
    loadUdpProcess = new DataImgLoadProcess;
    workerUdpLoadImgThread = new QThread;
    loadUdpProcess->moveToThread(workerUdpLoadImgThread);







    //加载图片线程
    connect(this,&MainWindow::loadData,loadUdpProcess,&DataImgLoadProcess::working);
    connect(loadUdpProcess,&DataImgLoadProcess::imageFinished,this,&MainWindow::showUdpRecivedImg);





}
void MainWindow::initMainVideo()
{
    QMovie *movie = new QMovie(":/images/UI/wifiMovie.gif");
    ui->label_movie->setMovie(movie);
    movie->start();
    ui->label_movie->show();
}
MainWindow::~MainWindow()
{
    workerThreadImg->quit();
    workerThreadImg->wait();
    delete workerThreadImg;

    workerThreadSend->quit();
    workerThreadSend->wait();
    delete workerThreadSend;

    workerLoadImg->quit();
    workerLoadImg->wait();
    delete workerLoadImg;

    workerCaptureImage->quit();
    workerCaptureImage->wait();
    delete workerCaptureImage;

    udpWorkerThreadSend->quit();
    udpWorkerThreadSend->wait();
    delete udpWorkerThreadSend;

    udpReceivedImageThread->wait();
    udpReceivedImageThread->quit();
    delete udpReceivedImageThread;

    workerUdpLoadImgThread->wait();
    workerUdpLoadImgThread->quit();
    delete workerUdpLoadImgThread;
}



/**
 * @brief 个人模式tcp的结束数据函数
 */

void MainWindow::do_readyRead()
{   if(choiceCall==QMessageBox::No)
    {
        choiceCall=QMessageBox::question(this,"提醒","是否接收通话" ,QMessageBox::Yes | QMessageBox::No);

        if(choiceCall==QMessageBox::Yes)
        {
            ui->closeCall->setEnabled(true);
            ui->btn_sendPhoto->setEnabled(true);
            ui->btn_sendMessage->setEnabled(true);
            ui->btn_startVideo->setEnabled(true);
            if(camera->isActive())
                ui->btn_openCamera->setEnabled(false);
            else
                ui->btn_openCamera->setEnabled(true);
            ui->btn_clearMessage->setEnabled(true);
        }
    }


    if(choiceCall==QMessageBox::Yes)
    {
        QByteArray rawData = client->readAll();

        QStringList messages = QString(rawData).split(":");

        receivedData.append(rawData);
        if(messages.size()>=5)
        {
            MESSAGE_TYPE = messages[1];
            imgSize = messages[3].toInt();
            if(MESSAGE_TYPE=="TEXT")
            {           client->readAll();
                client->readAll();
                ui->textEdit->append("收到来自IP: "+client->peerAddress().toString()+" 的消息 "+ messages[2]);
                if(messages[2]=="已断开")
                {
                    timer->stop();
                    stopShowingImage = true;
                    choiceCall=QMessageBox::No;

                    ui->label_waitImage->show();
                    ui->label_waitMessage->show();
                    ui->label_receivedVideo->clear();


                    ui->btn_stopVideo->setEnabled(false);
                    if(isVideo)
                    {
                        ui->btn_closeCamera->setEnabled(true);
                        ui->btn_captureImage->setEnabled(true);
                    }
                    ui->btn_sendPhoto->setEnabled(false);
                    ui->btn_sendMessage->setEnabled(false);
                    ui->btn_startVideo->setEnabled(false);
                    ui->btn_openCamera->setEnabled(false);
                    ui->btn_clearMessage->setEnabled(true);
                    ui->closeCall->setEnabled(false);
                    client->readAll();
                    client->readAll();

                }
            }

        }
        if(!ui->label_waitImage->isHidden())
        {
            ui->label_waitImage->hide();
        }
        if(!ui->label_waitMessage->isHidden())
        {
            ui->label_waitMessage->hide();
        }

        if(MESSAGE_TYPE=="IMAGE")
        {
            if(imgSize>0&&receivedData.size()>=imgSize)
            {
                QStringList messages = QString(receivedData).split(":");
                if(messages.size()>=5)
                {

                    ui->textEdit->append("收到来自IP: "+client->peerAddress().toString()+" 的消息 "+ messages[2]);
                    QByteArray imgData=QByteArray::fromBase64(messages[4].toUtf8());
                    //压缩必须同样的方式用数据流读取
                    workerThreadImg->start();
                    //收到程序数据流转为bytearray
                    emit imageData(imgData);

                }
                receivedData.clear();
                messages.clear();
            }

        }
        else  if(MESSAGE_TYPE=="VIDEO")
        {

            if(imgSize>0&&receivedData.size()>=imgSize)
            {
                QStringList messages = QString(receivedData).split(":");
                if(messages.size()>=5)
                {

                    QByteArray imgData=QByteArray::fromBase64(messages[4].toUtf8());

                    wokerThreadVideo->start();
                    emit videoData(imgData);


                }
                receivedData.clear();
                messages.clear();
            }

        }
    }


}


/**
 * @brief 个人模式的点击发送按钮
 */
#include<QTextCursor>
void MainWindow::on_btn_sendMessage_clicked()
{

    stopShowingImage = false;
    if(ui->lineEdit_sendToIp->text().isEmpty())
    {
        QMessageBox::information(this,"提示","请输入对方的ip地址");
        return;
    }

    targetIp = ui->lineEdit_sendToIp->text();
    msg=ui->lineEdit_message->text();
    ui->textEdit->append("发送给IP "+targetIp+": "+ msg);
    ui->lineEdit_message->setFocus();


    if (!picData.isEmpty()) {

        QString fullMessage = targetIp +":"+"IMAGE"+":"+msg+":"+QString::number(streamData.toBase64().size())+":"+
                              streamData.toBase64();
        client->write(fullMessage.toUtf8());

        fullMessage.clear();

        ui->textEdit->append("\n");

        QTextCursor cursor = ui->textEdit->textCursor();
        QTextImageFormat imageFormat;
        imageFormat.setName(m_fileName);

        imageFormat.setWidth(100);
        imageFormat.setHeight(60);
        cursor.insertImage(imageFormat);


    }
    else{
        QString fullMessage = targetIp + ":"+"TEXT"+":"+msg+":"+QString::number(msg.size())+":"+"unsued";
        client->write(fullMessage.toUtf8());
        fullMessage.clear();
    }


}

/**
 * @brief 个人模式的网络连接按钮
 */

void MainWindow::on_btn_connectInternet_clicked()
{
    QString ip = ui->lineEdit_ip->text();
    quint16 port = ui->lineEdit_port->text().toInt();
    client->connectToHost(ip,port);

}

/**
 * @brief 个人模式的断开连接按钮
 */

void MainWindow::on_btn_disconnectInternet_clicked()
{
    if(client->state()==QAbstractSocket::ConnectedState)
        client->disconnectFromHost();
    ui->btn_connectInternet->setEnabled(true);
    ui->btn_disconnectInternet->setDisabled(true);
    ui->btn_closeCamera->setEnabled(false);
    ui->btn_startVideo->setEnabled(false);
    ui->btn_stopVideo->setEnabled(false);
    ui->btn_sendPhoto->setEnabled(false);
    ui->btn_sendMessage->setEnabled(false);
    ui->btn_clearMessage->setEnabled(false);
    ui->btn_openCamera->setEnabled(false);
    ui->btn_startCall->setEnabled(false);
}

#include<QFileDialog>
void MainWindow::on_btn_sendPhoto_clicked()
{   picData=nullptr;
    QString dir = QDir::homePath();
    m_fileName = QFileDialog::getOpenFileName(this,"选择图片",dir,"图片文件(*.jpg *.JPG *.PNG *.png)");

    ui->label_readyPic->setPixmap(QPixmap(m_fileName).scaled(ui->label_readyPic->width(),ui->label_readyPic->height()));

    fileProcess->moveToThread(workerThreadSend);

    connect(this,&MainWindow::FileNameText,fileProcess,&DataSendProcess::working);
    connect(fileProcess,&DataSendProcess::picDataFinished,this,[this](const QByteArray &D){
        picData=D;

    });
    connect(fileProcess,&DataSendProcess::streamDataFinished,this,[this](const QByteArray &S){
        streamData=S;

    });
    //发送图片位置到子线程进行处理
    workerThreadSend->start();
    emit FileNameText(m_fileName);


}

/**
 * @brief 个人模式清空消息文本框
 */

void MainWindow::on_btn_clearMessage_clicked()
{
    ui->textEdit->clear();
    ui->label_receivedVideo->clear();
    ui->label_readyPic->clear();
    ui->label_waitMessage->show();
    ui->label_waitImage->show();
}





/**
 * @brief 个人模式最后接收到的被解压的图片的显示
 * @param img
 */
#include<QPoint>
void MainWindow::showRecivedImg(QImage &img)
{   if(stopShowingImage) return;
    qDebug("1");
    m_img=img;
    ui->textEdit->append("\n");
    QTextCursor cursor = ui->textEdit->textCursor();

    cursor.insertImage(img.scaled(100,60));

}

/**
 * @brief 个人模式最后接收到的被连续解压的图片的显示，反正与发送图片线程重叠
 * @param img
 */

void MainWindow::showRecivedVideo(QImage &img)
{
    if(stopShowingImage) return;

    QPixmap pixmap = QPixmap::fromImage(img);

    ui->label_receivedVideo->setPixmap(pixmap.scaled(ui->label_receivedVideo->width(),ui->label_receivedVideo->height()));

}

/**
 * @brief 个人模式初始化摄像头
 */

void MainWindow::initialCamInfo()
{
    QCameraDevice defaultCameraDevice = QMediaDevices::defaultVideoInput();
    if(defaultCameraDevice.isNull())
    {
        qDebug("没有找到摄像头");
        return;
    }

    int defIndex=0;
    int  i = 0;
    for(const auto &device :QMediaDevices::videoInputs())
    {

        if  (device.id()==defaultCameraDevice.id())
        {
            ui->combo_cameraOutput->addItem(device.description()+" (默认) ");
            QVariant::fromValue(device);
            defIndex=i;

        }
        ++i;
    }
    ui->combo_cameraOutput->setCurrentIndex(defIndex);



    if(QMediaDevices::defaultAudioInput().isNull())
    {

        QMessageBox::information(this,"提示","无音频设备");
        return;
    }

    //manager
    session = new QMediaCaptureSession(this);
    //设置视频输出
    session->setVideoOutput(ui->sendWidget);
    QAudioInput *audioInput = new QAudioInput(this);
    audioInput->setDevice(QMediaDevices::defaultAudioInput());
    //设置音频输出
    session->setAudioInput(audioInput);

    camera =new QCamera(this);
    camera->setCameraDevice(defaultCameraDevice);
    //设置摄像头输出
    session->setCamera(camera);

    //capture
    imageCapture = new QImageCapture(this);
    imageCapture->setQuality(QImageCapture::HighQuality);

    session->setImageCapture(imageCapture);


}



/**
 * @brief 个人模式接收到的摄像头不断抓取的图片，然后传入子线程处理数据
 * @param id ,preview
 */

void MainWindow::do_imageCaptured(int id, const QImage &preview)
{
    Q_UNUSED(id);
    QImage scaledImage=preview.scaledToWidth(ui->label_receivedVideo->width()-30);
    emit rawCapturedImg(scaledImage);

}

/**
 * @brief 个人模式处理单次摄像头抓取的图片
 * @param id ,preview
 */

void MainWindow::do_singleImageCaptured(int id, const QImage &preview)
{
    Q_UNUSED(id);
    QImage scaledImage=preview.scaledToWidth(ui->label_receivedVideo->width()-30);

    //保存到固定位置，windows的图片路径
    if(ui->btn_saveCapturedImage->isChecked())
    {

        QString savePath = QStandardPaths::writableLocation(QStandardPaths::PicturesLocation);
        QString fileName = savePath + QString("/captured_image%1.png").arg(cntImage);
        cntImage++;
        scaledImage.save(fileName);

    }

    ui->label_receivedVideo->setPixmap(QPixmap::fromImage(scaledImage));
    scaledImage=QImage();
}

/**
 * @brief 个人模式得到的加载好后的图片数据，下一步可以直接到主界面显示
 * @param imgData
 */

void MainWindow::getTcpLoadImageData(QByteArray &d)
{   if(!workerLoadImg->isRunning())
        workerLoadImg->start();
    emit loadData(d,1);

}

/**
 * @brief 个人模式得到的连续加载好后的图片数据，下一步可以直接到主界面显示
 * @param imgData
 */

void MainWindow::getTcpLoadVideoData(QByteArray &d)
{
    workerLoadImg->start();
    emit loadData(d,2);

}

/**
 * @brief 个人模式得到的被摄像头抓取的图片处理完毕，拿到处理好的数据
 * @param capturedImgData
 */

//第五步发送
void MainWindow::getCapturedImgData(QByteArray &capturedImgData)
{
    //读取子线程执行好的streamdata数据
    QByteArray capData = capturedImgData;
    targetIp = ui->lineEdit_sendToIp->text();

    if(!capData.isEmpty())
    {
        QString fullMessage = targetIp + ":"+"VIDEO"+":"+"k"+":"+QString::number(capData.toBase64().size())+":"+
                              capData.toBase64();
        client->write(fullMessage.toUtf8());
        fullMessage.clear();

    }

}

/**
 * @brief 个人模式通过定时器调用该槽函数
 */
#include<QSoundEffect>
void MainWindow::continueToCapture()
{
    imageCapture->setQuality(QImageCapture::VeryHighQuality);
    imageCapture->setResolution(1920,1080);
    imageCapture->capture();      
}

/**
 * @brief 个人模式停止视频通话
 */
void MainWindow::on_btn_stopVideo_clicked()
{
    client->readAll();
    client->readAll();
    client->readAll();
    timer->stop();
    stopShowingImage = true;
    choiceCall=QMessageBox::No;
    ui->label_waitImage->show();
    ui->label_waitMessage->show();
    ui->label_receivedVideo->clear();


    ui->btn_stopVideo->setEnabled(false);
    ui->btn_startVideo->setEnabled(true);
    if(isVideo)
    {
        ui->btn_closeCamera->setEnabled(true);
        ui->btn_captureImage->setEnabled(true);
    }


}

/**
 * @brief 个人模式开始视频通话
 */

void MainWindow::on_btn_startVideo_clicked()
{
    if(camera->isActive())
    {
        stopShowingImage = false;
        timer->start();
        timer->setInterval(10);
        //启动线程

        workerCaptureImage->start();

        disconnect(imageCapture,&QImageCapture::imageCaptured,this,&MainWindow::do_singleImageCaptured);

        connect(imageCapture,&QImageCapture::imageCaptured,this,&MainWindow::do_imageCaptured);

        ui->label_waitImage->hide();
        ui->label_waitMessage->hide();

        ui->btn_stopVideo->setEnabled(true);
        ui->btn_startVideo->setEnabled(false);

        ui->btn_closeCamera->setEnabled(false);
        ui->btn_captureImage->setEnabled(false);

        isVideo=true;
    }
    else
    {
        QMessageBox::information(this,"提示","摄像头未开启");
    }



}

/**
 * @brief 个人模式打开摄像头
 */

void MainWindow::on_btn_openCamera_clicked()
{
    camera->start();
    ui->sendWidget->show();
    ui->btn_closeCamera->setEnabled(true);
    ui->btn_openCamera->setEnabled(false);
}

/**
 * @brief 个人模式关闭摄像头
 */

void MainWindow::on_btn_closeCamera_clicked()
{
    //添加判定条件
    camera->stop();
    ui->sendWidget->hide();
    ui->btn_closeCamera->setEnabled(false);
    ui->btn_openCamera->setEnabled(true);
}

/**
 * @brief 个人模式点击拍照
 */

void MainWindow::on_btn_captureImage_clicked()
{
    //设置拍照清晰度
    if(!camera->isActive())
    {
        QMessageBox::information(this,"提示","摄像头未打开");
        return;
    }
    ui->label_waitImage->hide();
    ui->label_waitMessage->hide();
    m_player = new QMediaPlayer(this);
    m_audioOutput = new QAudioOutput(this);
    m_player->setAudioOutput(m_audioOutput);
    m_player->setSource(QUrl::fromLocalFile(":/images/shutter.wav"));
    m_audioOutput->setVolume(0.5);
    m_player->play();
    soundEffect = new QSoundEffect(this) ;

    soundEffect->setSource(QUrl::fromLocalFile(":/images/shutter.wav"));
    soundEffect->play();
    connect(imageCapture,&QImageCapture::imageCaptured,this,&MainWindow::do_singleImageCaptured);

    imageCapture->capture();

}




//-------------------------------------------会员模式-----------------------------------------------//
/**
 * @brief 会议模式发送消息
 */

void MainWindow::on_btn_tabM_sendMessage_clicked()
{
    quint16 groupPort=ui->spin_udpPort->value();

    QString msg=ui->lineEdit_UdpMessage->text();
    udpSocket->setSocketOption(QAbstractSocket::ReceiveBufferSizeSocketOption, 1024 * 1024);
    if (!udpRawPicData.isEmpty()) {
        QByteArray type="IMAGE";
        QByteArray begin = "BEGIN";
        udpSocket->writeDatagram(type,*groupAddress,groupPort);//每次先提前发一个标识符过去
        udpSocket->writeDatagram(begin,*groupAddress,groupPort);
        int totalSize = udpRawStreamData.size();
        int sentSize=0;

        while (sentSize < totalSize) {

            int remaining = totalSize - sentSize;

            int chunkSize = qMin(blockSize, remaining);


            QByteArray block = udpRawStreamData.mid(sentSize, chunkSize);


            udpSocket->writeDatagram(block, *groupAddress, groupPort);

            sentSize += chunkSize;
        }
        QByteArray end = "END";
        udpSocket->writeDatagram(end, *groupAddress, groupPort);

    }
    else{
        QByteArray type="IMAGE";//因为必须要先进去doreadyread里面，以后再优化逻辑
        QByteArray text = "TEXT";
        udpSocket->writeDatagram(type,*groupAddress,groupPort);
        udpSocket->writeDatagram(text,*groupAddress,groupPort);
        udpSocket->writeDatagram(msg.toUtf8(),*groupAddress,groupPort);
        ui->textEdit_udp->append("我:"+msg);
        ui->lineEdit_UdpMessage->setFocus();
    }

    ui->lineEdit_UdpMessage->setEnabled(true);
    udpRawPicData.clear();
    udpRawStreamData.clear();
    ui->label_udp_readyPic->clear();

}

/**
 * @brief 会议模式得到的被加载的图片数据
 * @param imgData
 */

void MainWindow::getLoadData(QByteArray &imgData)
{
    emit loadData(imgData,1);
    workerUdpLoadImgThread->start();
}

/**
 * @brief 会议模式处理接收端的逻辑
 */

void MainWindow::do_udp_readyRead()
{
    udpSocket->setSocketOption(QAbstractSocket::ReceiveBufferSizeSocketOption, 1024 * 1024);
    while(udpSocket->hasPendingDatagrams())
    {
        QByteArray datagram;
        datagram.resize(udpSocket->pendingDatagramSize());
        QHostAddress peerAddr;
        quint16 peerport;

        if( udpSocket->readDatagram(datagram.data(), datagram.size(), &peerAddr, &peerport)==-1)
            break;

        if(datagram=="IMAGE")
        {    isImage=true;
        }
        if(isImage)
        {
            if(datagram=="BEGIN")
            {
                udp_receivedData.clear();
            }
            else if(datagram=="END")
            {

            }
            else if(datagram=="TEXT")
            {   //上面先读一次，然后到这里text,再继续读下一次，就读完了
                udpSocket->readDatagram(datagram.data(),1024,&peerAddr,&peerport);

                ui->textEdit_udp->append("来自IP: "+peerAddr.toString()+"的消息:"+datagram.data());
                qDebug()<<datagram.size();
                udp_receivedData.clear();

            }

            else if(datagram.size()>100)
            {
                udp_receivedData.append(datagram);
            }


            emit udpReceivedStream(udp_receivedData);

            udpReceivedImageThread->start();
        }
    }

}

/**
 * @brief 会议模式选择图片被点击
 */

void MainWindow::on_btn_tabM_selectPic_clicked()
{   ui->lineEdit_UdpMessage->setEnabled(false);
    ui->lineEdit_UdpMessage->clear();
    QString filename= QFileDialog::getOpenFileName(this,"选择图片",QDir::homePath(),"图片文件(*.jpg *.JPG *.JPEG *.PNG *.png)");
    udpRawPicData.clear();
    udpRawStreamData.clear();
    ui->label_udp_readyPic->setPixmap(QPixmap(filename).scaled(ui->label_udp_readyPic->width(),ui->label_udp_readyPic->height()));
    //由文件地址获取图片数据到主线程
    updFileProcess->moveToThread(udpWorkerThreadSend);
    connect(this,&MainWindow::FileNameText,updFileProcess,&DataSendProcess::working);
    connect(updFileProcess,&DataSendProcess::picDataFinished,this,[this](const QByteArray &udpPicData)
            {
                udpRawPicData=udpPicData;
            });
    connect(updFileProcess,&DataSendProcess::streamDataFinished,this,[this](const QByteArray &udpStreamPicData){
        udpRawStreamData = udpStreamPicData;
        if(!udpRawStreamData.isNull())
            udpWorkerThreadSend->quit();
    });

    udpWorkerThreadSend->start();
    emit FileNameText(filename);
    ui->lineEdit_UdpMessage->setEnabled(true);

}

/**
 * @brief 会议模式清空文本
 */

void MainWindow::on_btn_udp_textClear_clicked()
{
    ui->textEdit_udp->clear();
    ui->label_udp_readyPic->clear();
    ui->label_udp_receivedPic->clear();
}

/**
 * @brief 会议模式加入会议
 */

void MainWindow::on_btn_udp_joinMeeting_clicked()
{

    QString IP=ui->combo_udpIP->currentText();
    groupAddress=new QHostAddress(IP);
    quint16 groupPort=ui->spin_udpPort->value();
    udpSocket->setSocketOption(QAbstractSocket::ReceiveBufferSizeSocketOption, 1024 * 1024);
    if(udpSocket->bind(QHostAddress::AnyIPv4,groupPort,QUdpSocket::ShareAddress|QAbstractSocket::ReuseAddressHint))//|QUdpSocket::ReuseAddressHint
    {
        udpSocket->joinMulticastGroup(*groupAddress,wirelessInterface);
        ui->textEdit_udp->append("**加入组播成功");
        ui->textEdit_udp->append("**组播地址IP："+IP);
        ui->textEdit_udp->append("**绑定端口："+QString::number(groupPort));
        ui->btn_udp_textClear->setEnabled(true);
        ui->btn_udp_joinMeeting->setEnabled(false);
        ui->btn_udp_leaveMeeting->setEnabled(true);
        ui->combo_udpIP->setEnabled(false);
        ui->spin_udpPort->setEnabled(false);
        ui->btn_tabM_sendMessage->setEnabled(true);
        ui->btn_tabM_selectPic->setEnabled(true);
    }else
        ui->textEdit_udp->append("**绑定端口失败");

    //初始化接受视频信息的窗口

    screenImgDlg = new ShowSharedScreen();

    //传递主窗口会议地址
    connect(this,&MainWindow::multicastGroupInfo,screenImgDlg,&ShowSharedScreen::do_multicastGroupInfo);
    emit multicastGroupInfo(*groupAddress,wirelessInterface,groupPort);

    screenImgDlg->show();
    screenImgDlg->raise();
    connect(screenImgDlg,&ShowSharedScreen::enableBtnJoinMeeting,this,[=]()
            {
                ui->btn_udp_joinMeeting->setEnabled(true);
                ui->btn_udp_leaveMeeting->setEnabled(false);
                qDebug("444");
            });
    ui->btn_udp_joinMeeting->setEnabled(false);
    ui->btn_udp_leaveMeeting->setEnabled(true);
}

/**
 * @brief 会议模式退出会议
 */

void MainWindow::on_btn_udp_leaveMeeting_clicked()
{

    ui->btn_udp_textClear->setEnabled(false);
    ui->btn_tabM_selectPic->setEnabled(false);

    udpSocket->leaveMulticastGroup(*groupAddress,wirelessInterface);
    udpSocket->abort();
    udp_receivedData=nullptr;
    ui->btn_udp_joinMeeting->setEnabled(true);
    ui->btn_udp_leaveMeeting->setEnabled(false);
    ui->combo_udpIP->setEnabled(true);
    ui->spin_udpPort->setEnabled(true);
    ui->btn_tabM_sendMessage->setEnabled(false);
    ui->textEdit_udp->append("**已退出会议");
    ui->label_udp_receivedPic->clear();
    ui->label_udp_readyPic->clear();
    ui->lineEdit_UdpMessage->clear();
    ui->textEdit_udp->clear();

}

/**
 * @brief 会议模式显示图片
 * @param img
 */

void MainWindow::showUdpRecivedImg(QImage &img)
{
    pixmap = QPixmap::fromImage(img);
    m_udpImg=img;
    ui->label_udp_receivedPic->setPixmap(pixmap.scaled( ui->label_udp_receivedPic->width(),ui->label_udp_receivedPic->height()));

}



/**
 * @brief 个人模式连接完毕服务器处理
 */
void MainWindow::do_connected()
{
    ui->textEdit->append("**已连接服务器**");
    ui->textEdit->append("**peer address:"+client->peerAddress().toString());
    ui->textEdit->append("**peer port："+QString::number(client->peerPort()));
    ui->label_connectionState->setPixmap(QPixmap(":/images/UI/connectionState.png"));
    ui->btn_connectInternet->setDisabled(true);
    ui->btn_disconnectInternet->setDisabled(false);
    ui->btn_startCall->setEnabled(true);

}
/**
 * @brief 个人模式断开服务器处理
 */
void MainWindow::do_disconnected()
{
    ui->textEdit->append("**服务器disconnected**");
    ui->label_connectionState->setPixmap(QPixmap(":/images/UI/disconnectionState.png"));

}
/**
 * @brief 个人模式连接状态变化处理
 * @param state
 */
void MainWindow::do_stateChanged(QAbstractSocket::SocketState state)
{
    Q_UNUSED(state);


}

/**
 * @brief tabWidget顶端tabbar被点击过滤
 * @param watched,event
 * @return bool
 */

bool MainWindow::eventFilter(QObject *watched, QEvent *event)
{

    if(watched==ui->label_udp_receivedPic)
    {   QMouseEvent *eve = static_cast<QMouseEvent*>(event);
        if(eve->button()==Qt::RightButton)
        {
            if(!ui->label_udp_receivedPic->pixmap().isNull())
            {

                int choice = QMessageBox::question(this, "提示", "是否要保存图片吗?", QMessageBox::Yes | QMessageBox::No);

                if(choice==QMessageBox::Yes)
                {   qDebug("保存");
                    QString savePath = QStandardPaths::writableLocation(QStandardPaths::PicturesLocation);
                    QString fileName = savePath + QString("/savedUdpImg%1.JPG").arg(cntImage);
                    m_udpImg.save(fileName);

                    cntImage++;


                }
            }
        }

    }
    return QMainWindow::eventFilter(watched, event);
}

/**
 * @brief 个人模式双击接受的图片显示为原尺寸
 * @param label
 */

void MainWindow::recoverImageSize(QLabel *label)
{
    label->resize(this->width(),this->height());
    label->move(0,0);
    label->setPixmap(pixmap);
}

/**
 * @brief 个人模式双击被放大的图片回缩放的尺寸
 * @param label
 */

void MainWindow::scaledPic(QLabel *label)
{   //qDebug("进入了scaled函数");
    qDebug()<<label->pos();
    label->clear();
    label->move(0,0);
    label->setPixmap(pixmap.scaledToWidth(210));
    label->show();
}

/**
 * @brief 点击截屏工具按钮
 */

void MainWindow::on_toolBtn_screenShot_clicked()
{
    ScreenShot *screenDlg  = new ScreenShot(this);
    connect(screenDlg, &ScreenShot::rejected, this, &MainWindow::restoreWindowOpacity); //恢复透明
    connect(screenDlg, &ScreenShot::accepted, this, &MainWindow::restoreWindowOpacity);
    connect(screenDlg,&ScreenShot::playPixmap,this,&MainWindow::getScreenShootPixmap);
    screenDlg->show();
    //加一个返回
    this->setWindowOpacity(0);
}

/**
 * @brief 槽函数恢复不透明
 */

void MainWindow::restoreWindowOpacity()
{
    this->setWindowOpacity(1);
}

/**
 * @brief 会议模式点击截屏按钮
 * @param pixmap
 */

void MainWindow::getScreenShootPixmap(const QPixmap &pixmap)
{
    QByteArray pixData;
    QBuffer in(&pixData);
    in.open(QIODevice::WriteOnly);
    pixmap.save(&in,"JPG");
    in.close();
    QByteArray pressedData =qCompress(pixData,2);
    QByteArray streamData ;

    QDataStream sendOut(&streamData,QIODevice::WriteOnly);
    sendOut.setVersion(QDataStream::Qt_6_2);
    sendOut<<pressedData;

    udpRawStreamData=streamData;
    udpRawPicData=pressedData;
    ui->label_udp_readyPic->setPixmap(pixmap.scaledToWidth(ui->label_udp_readyPic->width()));

}

/**
 * @brief 个人主页按钮点击
 */


void MainWindow::on_btn_personal_homePage_clicked()
{
    HomePage *newPage = new HomePage(this);
    m_loginInfo->setParent(newPage);
    newPage->exec();
}

/**
 * @brief 屏幕录制按钮点击
 */


void MainWindow::on_btn_ScreenRecording_clicked()
{
    if(isShowRecordingPage)
    {
        screenRecoring = new Recording(this);
        isShowRecordingPage=false;
    }
    if(screenRecoring->isHidden())
        screenRecoring->show();
    else
        screenRecoring->hide();

}

/**
 * @brief 初始化样式表
 */

void MainWindow::initQss()
{



    setAttribute(Qt::WA_TranslucentBackground, true);
    QPixmap winLogo(":/images/UI/myLogo.png");
    ui->label_logo->setPixmap(winLogo);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    QIcon logo = QIcon(":/images/UI/myLogo.png");
    trayLog = new QSystemTrayIcon;
    trayLog->setIcon(logo);
    trayLog->setToolTip("课堂通");

    //创建托盘菜单项
    act_return = new QAction("返回页面",this);

    act_return->setFont(QFont("Arial", 9));
    act_return->setObjectName("actReturn");
    act_return->setIcon(QIcon(":/images/UI/act_return.png"));

    act_quit = new QAction("退出",this);

    act_quit->setFont(QFont("Arial", 9));
    act_quit->setObjectName("actQuit");
    act_quit->setIcon(QIcon(":/images/UI/act_quit.png"));

    trayMenu = new QMenu(this);
    trayMenu->addAction(act_return);
    trayMenu->addAction(act_quit);

    trayLog->setContextMenu(trayMenu);


    connect(act_quit,&QAction::triggered,this,&MainWindow::close);
    connect(act_return,&QAction::triggered,this,&MainWindow::showNormal);

    //closeEvent init
    myBox = new MyMessageBox;
    connect(myBox,&MyMessageBox::btnchicked,this,&MainWindow::do_btnChicked);
}

/**
 * @brief 把自定义消息框的返回值传递主界面
 * @param creturn
 */
void MainWindow::do_btnChicked(int creturn)
{
    closeReturn=creturn;
}

/**
 * @brief 得到登录信息对象
 * @param d_dpersonalIfo
 */
void MainWindow::getLoginInfo(DpersonalInfo *d_dpersonalIfo)
{
    m_loginInfo = d_dpersonalIfo;
}

/**
* @brief 点击播放视频按钮
*/

void MainWindow::on_btn_videoPlayback_clicked()
{

    player = new Player(this);
    player->show();

}

/**
 * @brief 主界面自定义关闭窗口按钮
 */
void MainWindow::on_btn_quit_clicked()
{
    this->close();
}

/**
 * @brief 主界面自定义最小化按钮
 */
void MainWindow::on_btn_scaledToSmall_clicked()
{

    showMinimized();

}
/**
 * @brief 主界面关闭事件
 */

void MainWindow::closeEvent(QCloseEvent *event)
{
    myBox->setBodyText("确定退出吗?");
    myBox->setButtonText("最小化到托盘","退出");
    myBox->exec();
    if(closeReturn==0)
        event->ignore();
    else if(closeReturn==1)
    {
        event->ignore();
        this->hide();
        trayLog->show();
        QString title="课堂通";
        QString text="正自动在后台运行";
        trayLog->showMessage(title,text,QSystemTrayIcon::Information,3000);
    }
}
/**
 * @brief 切换到会议模式
 */
void MainWindow::on_btn_meeting_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_memberShip);
}

/**
 * @brief 切换到个人模式
 */
void MainWindow::on_btn_normal_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_normal);
}

/**
 * @brief 切换到笔记模式
 */
void MainWindow::on_btn_notion_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_notion);
}

/**
 * @brief 切换到学词模式
 */
void MainWindow::on_btn_language_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_words);
}



/**
 * @brief 关于
 */

void MainWindow::on_btn_about_clicked()
{
    QDialog *dialog = new QDialog(this);
    dialog->setWindowTitle("关于创建者");
    dialog->resize(300, 300);


    QLabel *labelName = new QLabel("课堂通团队", dialog);
    QLabel *labelAge = new QLabel("年龄：21岁", dialog);
    QLabel *labelProfession = new QLabel("专业：计算机科学与技术", dialog);
    QLabel *labelMessage = new QLabel("课堂通为免费开源项目，正在不断更新中，尽情期待", dialog);
    labelMessage->setWordWrap(true); // 允许文本自动换行


    QVBoxLayout *layout = new QVBoxLayout(dialog);
    layout->addWidget(labelName);
    layout->addWidget(labelAge);
    layout->addWidget(labelProfession);
    layout->addWidget(labelMessage);


    QPushButton *buttonClose = new QPushButton("关闭", dialog);
    connect(buttonClose, &QPushButton::clicked, dialog, &QDialog::accept);
    layout->addWidget(buttonClose);


    dialog->setLayout(layout);

    QMessageBox::aboutQt(this,"开发版本");
    dialog->exec();


}
/**
 * @brief 播放音乐窗口显示
 */

void MainWindow::on_btn_playMusic_clicked()
{



    music = new MyMusic(this);
    music->show();

}

/**
 * @brief 关闭通话
 */
void MainWindow::on_closeCall_clicked()
{


    int choice=QMessageBox::question(this,"提示","确定停止通话吗?",QMessageBox::Yes|QMessageBox::No);
    if(choice==QMessageBox::Yes)
    {
        timer->stop();
        stopShowingImage = true;
        choiceCall=QMessageBox::No;
        disconnect(client,&QTcpSocket::readyRead,this,&MainWindow::do_readyRead);
        ui->label_waitImage->show();
        ui->label_waitMessage->show();
        ui->label_receivedVideo->clear();


        ui->btn_stopVideo->setEnabled(false);
        if(isVideo)
        {
            ui->btn_closeCamera->setEnabled(true);
            ui->btn_captureImage->setEnabled(true);
        }
        ui->btn_sendPhoto->setEnabled(false);
        ui->btn_sendMessage->setEnabled(false);
        ui->btn_startVideo->setEnabled(false);
        ui->btn_openCamera->setEnabled(false);
        ui->btn_clearMessage->setEnabled(true);

        client->readAll();
        client->readAll();
        client->readAll();
        client->readAll();
        client->readAll();
        targetIp = ui->lineEdit_sendToIp->text();
        QString fullMessage = targetIp + ":"+"TEXT"+":"+"已断开"+":"+QString::number(msg.size())+":"+"unsued";
        client->write(fullMessage.toUtf8());
        fullMessage.clear();
        ui->btn_startCall->setEnabled(true);
        ui->closeCall->setEnabled(false);
    }
}

/**
 * @brief 连接通话
 */
void MainWindow::on_btn_startCall_clicked()
{   ui->closeCall->setEnabled(true);
    ui->btn_sendPhoto->setEnabled(true);
    ui->btn_sendMessage->setEnabled(true);
    ui->btn_startVideo->setEnabled(true);
    if(camera->isActive())
    {
        ui->btn_openCamera->setEnabled(false);
        ui->btn_closeCamera->setEnabled(true);
    }
    else
    {
        ui->btn_openCamera->setEnabled(true);
        ui->btn_closeCamera->setEnabled(false);
    }
    ui->btn_clearMessage->setEnabled(true);
    targetIp = ui->lineEdit_sendToIp->text();
    QString fullMessage = targetIp + ":"+"TEXT"+":"+"已接通"+":"+QString::number(msg.size())+":"+"unsued";
    client->write(fullMessage.toUtf8());
    fullMessage.clear();
    connect(client,&QTcpSocket::readyRead,this,&MainWindow::do_readyRead);
    ui->btn_startCall->setEnabled(false);

}
/**
 * @brief 功能简介
 */

void MainWindow::on_btn_introduction_clicked()
{
    Introduction *w = new Introduction(this);
    w->show();
    QScreen *screen = QGuiApplication::primaryScreen();
    QPixmap pix = screen->grabWindow(0);
    QString savePath = QStandardPaths::writableLocation(QStandardPaths::PicturesLocation);
    QString fileName = savePath + QString("/savedUdpImg%1.JPG").arg(8);
    pix.save(fileName,"JPG",75);
}

