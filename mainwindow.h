#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QTcpSocket>
#include"showsharedscreen.h"
#include<QtMultimedia>
#include<QSystemTrayIcon>
#include<QMenu>
#include"mymessagebox.h"
#include"dpersonalinfo.h"
#include"recording.h"
#include"player.h"
#include"MyMusic/mymusic.h"
#include<QMediaPlayer>
#include<QAudioOutput>
#include<QMessageBox>
class QLabel;
class DataReceivedProcess;
class DataSendProcess;
class DataImgLoadProcess;
class CaptureImgSaveProcess;
class QAbstractSocket;
class QLabel;
class initMainWindow;
class QUdpSocket;

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    bool isVideo = false;
    bool isShowRecordingPage=true;
    bool stopShowingImage = false;//标志连续发送进入显示，这样不会在连续显示的时候一直显示上一张图片

    Recording * screenRecoring=nullptr;
    Player *player=nullptr;
    MyMusic *music=nullptr;
    DpersonalInfo *m_loginInfo=nullptr;
    ShowSharedScreen * screenImgDlg = nullptr;



    QTcpSocket *client = nullptr;
    //托盘菜单
    QSystemTrayIcon *trayLog=nullptr;
    QMenu *trayMenu = nullptr;
    QAction *act_quit = nullptr;
    QAction *act_return = nullptr;


    //关闭事件
    MyMessageBox *myBox= nullptr;

    int closeReturn;//关闭窗口返回值
public:
    void initQss();
    void initMainVideo();
    void initialCamInfo();

public slots:
    void do_btnChicked(int );
    void getLoginInfo(DpersonalInfo *d_dpersonalIfo);


private:
    int choiceCall=QMessageBox::No;
    int cntImage=1;
    QString targetIp ;
    QString msg;
    QTimer *timer;




    //camera
    QMediaCaptureSession *session;
    QMediaCaptureSession *sessionSingle;
    QCamera *camera;

    QImageCapture *imageCapture;
    QImageCapture *singleImageCapTured;
    QSoundEffect *soundEffect;
    QMediaRecorder *recorder;
    //media
    QMediaPlayer *m_player;
    QAudioOutput *m_audioOutput;
private:
    //发送时
    QByteArray picData ;
    qint64 imgSize;
    QString MESSAGE_TYPE;
    QByteArray streamData ;
    //接收时
    QByteArray receivedData;
    //接收线程
    QThread* workerThreadImg = nullptr;
    DataReceivedProcess *imgProcess = nullptr;
    DataReceivedProcess *videoProcess=nullptr;
    QThread *wokerThreadVideo=nullptr;
    //发送线程
    QThread* workerThreadSend = nullptr;
    DataSendProcess *fileProcess =nullptr;
    //加载图片线程,视频线程
    QThread * workerLoadImg = nullptr;
    DataImgLoadProcess *loadProcess = nullptr;
    QThread *wokerLoadVideo=nullptr;
    DataImgLoadProcess *loadVideoProcess=nullptr;
    //抓取图片处理线程
    CaptureImgSaveProcess *captureProcess = nullptr;
    QThread *workerCaptureImage = nullptr;

signals:
    void  socketClientIp(QString );
    void FileNameText(QString fileName);
    void imageData(QByteArray&);
    void videoData(QByteArray&);
    void loadData(QByteArray&,quint8);
    void rawCapturedImg(QImage&);
private slots:
    void on_btn_connectInternet_clicked();
    void do_connected();
    void do_disconnected();
    void do_readyRead();
    void do_stateChanged(QAbstractSocket::SocketState state);


    void on_btn_sendMessage_clicked();

    void on_btn_disconnectInternet_clicked();

    void on_btn_sendPhoto_clicked();

    void on_btn_clearMessage_clicked();

    void on_btn_stopVideo_clicked();

    void on_btn_startVideo_clicked();

    void on_btn_openCamera_clicked();

    void on_btn_closeCamera_clicked();


    //video
    void do_imageCaptured(int id, const QImage &preview);
    void do_singleImageCaptured(int id, const QImage &preview);
    void getTcpLoadImageData(QByteArray &);
    void getTcpLoadVideoData(QByteArray&);
    void on_btn_captureImage_clicked();
    void getCapturedImgData(QByteArray&);
    void continueToCapture();
    void showRecivedImg(QImage &d);
    void showRecivedVideo(QImage &d);


private:
    //会员模式
    QUdpSocket *udpSocket;
    QHostAddress *groupAddress;
    QNetworkInterface wirelessInterface;
    QByteArray udpRawPicData;
    QByteArray udpRawStreamData;
    QString UDP_MESSAGE_TYPE;
    qint64 UDP_IMAGE_SIZE;
    QByteArray udp_receivedData;
    QByteArray udp_receicedMsg;
    QString UDP_DATA_TYPE;
    //点击图片发送文件名到子线程去加载
    DataSendProcess *updFileProcess =nullptr;
    QThread* udpWorkerThreadSend = nullptr;
    QString IP;
    QString m_fileName;
    QImage m_img;
    QImage m_udpImg;
    //分包
    qint64 blockSize = 1280;

    //接收到了数据去子线程解析
    DataReceivedProcess *udpImgProcess;
    QThread *udpReceivedImageThread;

    //加载线程
    QThread *workerUdpLoadImgThread;
    DataImgLoadProcess *loadUdpProcess;

    //屏幕线程
    QPixmap pixmap ;
private slots:
    void on_btn_tabM_sendMessage_clicked();
    void do_udp_readyRead();

    void on_btn_tabM_selectPic_clicked();

    void on_btn_udp_textClear_clicked();

    void on_btn_udp_joinMeeting_clicked();

    void on_btn_udp_leaveMeeting_clicked();

    void getLoadData(QByteArray&);//emit imgdata

    void showUdpRecivedImg(QImage &d);

    //其他功能函数
    void on_toolBtn_screenShot_clicked();

    void on_btn_personal_homePage_clicked();

    void on_btn_ScreenRecording_clicked();

    void on_btn_videoPlayback_clicked();

    void on_btn_quit_clicked();

    void on_btn_scaledToSmall_clicked();

    void on_btn_meeting_clicked();

    void on_btn_normal_clicked();

    void on_btn_notion_clicked();

    void on_btn_language_clicked();

    void on_btn_about_clicked();

    void on_btn_playMusic_clicked();

    void on_closeCall_clicked();

    void on_btn_startCall_clicked();

    void on_btn_introduction_clicked();

signals:
    void udpReceivedStream(QByteArray&);
    void udpReceivedVideoStream(QByteArray&);
    void screenImage(QImage&);
    void udpReceivedScreenImg(QImage&);
       void multicastGroupInfo(const QHostAddress &groupAddress, const QNetworkInterface &iface, quint16 groupPort);

public:
    Ui::MainWindow *ui;

public:

    bool m_picIsfullScreen=false;
    bool isImage=false;
    void scaledPic(QLabel *);
    void  recoverImageSize(QLabel *);
    void restoreWindowOpacity();//截屏后窗口恢复不透明
    void getScreenShootPixmap(const QPixmap &pixmap);



protected:
    virtual void closeEvent(QCloseEvent *event) override;
protected:
    virtual bool eventFilter(QObject *watched, QEvent *event) override;
protected:
    virtual void mousePressEvent(QMouseEvent *event) override;
};





#endif // MAINWINDOW_H
