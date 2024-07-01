/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[150];
    char stringdata0[1439];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 14), // "socketClientIp"
QT_MOC_LITERAL(26, 0), // ""
QT_MOC_LITERAL(27, 12), // "FileNameText"
QT_MOC_LITERAL(40, 8), // "fileName"
QT_MOC_LITERAL(49, 9), // "imageData"
QT_MOC_LITERAL(59, 11), // "QByteArray&"
QT_MOC_LITERAL(71, 9), // "videoData"
QT_MOC_LITERAL(81, 8), // "loadData"
QT_MOC_LITERAL(90, 14), // "rawCapturedImg"
QT_MOC_LITERAL(105, 7), // "QImage&"
QT_MOC_LITERAL(113, 17), // "udpReceivedStream"
QT_MOC_LITERAL(131, 22), // "udpReceivedVideoStream"
QT_MOC_LITERAL(154, 11), // "screenImage"
QT_MOC_LITERAL(166, 20), // "udpReceivedScreenImg"
QT_MOC_LITERAL(187, 18), // "multicastGroupInfo"
QT_MOC_LITERAL(206, 12), // "QHostAddress"
QT_MOC_LITERAL(219, 12), // "groupAddress"
QT_MOC_LITERAL(232, 17), // "QNetworkInterface"
QT_MOC_LITERAL(250, 5), // "iface"
QT_MOC_LITERAL(256, 9), // "groupPort"
QT_MOC_LITERAL(266, 13), // "do_btnChicked"
QT_MOC_LITERAL(280, 12), // "getLoginInfo"
QT_MOC_LITERAL(293, 14), // "DpersonalInfo*"
QT_MOC_LITERAL(308, 14), // "d_dpersonalIfo"
QT_MOC_LITERAL(323, 30), // "on_btn_connectInternet_clicked"
QT_MOC_LITERAL(354, 12), // "do_connected"
QT_MOC_LITERAL(367, 15), // "do_disconnected"
QT_MOC_LITERAL(383, 12), // "do_readyRead"
QT_MOC_LITERAL(396, 15), // "do_stateChanged"
QT_MOC_LITERAL(412, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(441, 5), // "state"
QT_MOC_LITERAL(447, 26), // "on_btn_sendMessage_clicked"
QT_MOC_LITERAL(474, 33), // "on_btn_disconnectInternet_cli..."
QT_MOC_LITERAL(508, 24), // "on_btn_sendPhoto_clicked"
QT_MOC_LITERAL(533, 27), // "on_btn_clearMessage_clicked"
QT_MOC_LITERAL(561, 24), // "on_btn_stopVideo_clicked"
QT_MOC_LITERAL(586, 25), // "on_btn_startVideo_clicked"
QT_MOC_LITERAL(612, 25), // "on_btn_openCamera_clicked"
QT_MOC_LITERAL(638, 26), // "on_btn_closeCamera_clicked"
QT_MOC_LITERAL(665, 16), // "do_imageCaptured"
QT_MOC_LITERAL(682, 2), // "id"
QT_MOC_LITERAL(685, 7), // "preview"
QT_MOC_LITERAL(693, 22), // "do_singleImageCaptured"
QT_MOC_LITERAL(716, 19), // "getTcpLoadImageData"
QT_MOC_LITERAL(736, 19), // "getTcpLoadVideoData"
QT_MOC_LITERAL(756, 27), // "on_btn_captureImage_clicked"
QT_MOC_LITERAL(784, 18), // "getCapturedImgData"
QT_MOC_LITERAL(803, 17), // "continueToCapture"
QT_MOC_LITERAL(821, 14), // "showRecivedImg"
QT_MOC_LITERAL(836, 1), // "d"
QT_MOC_LITERAL(838, 16), // "showRecivedVideo"
QT_MOC_LITERAL(855, 31), // "on_btn_tabM_sendMessage_clicked"
QT_MOC_LITERAL(887, 16), // "do_udp_readyRead"
QT_MOC_LITERAL(904, 29), // "on_btn_tabM_selectPic_clicked"
QT_MOC_LITERAL(934, 28), // "on_btn_udp_textClear_clicked"
QT_MOC_LITERAL(963, 30), // "on_btn_udp_joinMeeting_clicked"
QT_MOC_LITERAL(994, 31), // "on_btn_udp_leaveMeeting_clicked"
QT_MOC_LITERAL(1026, 11), // "getLoadData"
QT_MOC_LITERAL(1038, 17), // "showUdpRecivedImg"
QT_MOC_LITERAL(1056, 29), // "on_toolBtn_screenShot_clicked"
QT_MOC_LITERAL(1086, 32), // "on_btn_personal_homePage_clicked"
QT_MOC_LITERAL(1119, 30), // "on_btn_ScreenRecording_clicked"
QT_MOC_LITERAL(1150, 28), // "on_btn_videoPlayback_clicked"
QT_MOC_LITERAL(1179, 19), // "on_btn_quit_clicked"
QT_MOC_LITERAL(1199, 28), // "on_btn_scaledToSmall_clicked"
QT_MOC_LITERAL(1228, 22), // "on_btn_meeting_clicked"
QT_MOC_LITERAL(1251, 21), // "on_btn_normal_clicked"
QT_MOC_LITERAL(1273, 21), // "on_btn_notion_clicked"
QT_MOC_LITERAL(1295, 23), // "on_btn_language_clicked"
QT_MOC_LITERAL(1319, 20), // "on_btn_about_clicked"
QT_MOC_LITERAL(1340, 24), // "on_btn_playMusic_clicked"
QT_MOC_LITERAL(1365, 20), // "on_closeCall_clicked"
QT_MOC_LITERAL(1386, 24), // "on_btn_startCall_clicked"
QT_MOC_LITERAL(1411, 27) // "on_btn_introduction_clicked"

    },
    "MainWindow\0socketClientIp\0\0FileNameText\0"
    "fileName\0imageData\0QByteArray&\0videoData\0"
    "loadData\0rawCapturedImg\0QImage&\0"
    "udpReceivedStream\0udpReceivedVideoStream\0"
    "screenImage\0udpReceivedScreenImg\0"
    "multicastGroupInfo\0QHostAddress\0"
    "groupAddress\0QNetworkInterface\0iface\0"
    "groupPort\0do_btnChicked\0getLoginInfo\0"
    "DpersonalInfo*\0d_dpersonalIfo\0"
    "on_btn_connectInternet_clicked\0"
    "do_connected\0do_disconnected\0do_readyRead\0"
    "do_stateChanged\0QAbstractSocket::SocketState\0"
    "state\0on_btn_sendMessage_clicked\0"
    "on_btn_disconnectInternet_clicked\0"
    "on_btn_sendPhoto_clicked\0"
    "on_btn_clearMessage_clicked\0"
    "on_btn_stopVideo_clicked\0"
    "on_btn_startVideo_clicked\0"
    "on_btn_openCamera_clicked\0"
    "on_btn_closeCamera_clicked\0do_imageCaptured\0"
    "id\0preview\0do_singleImageCaptured\0"
    "getTcpLoadImageData\0getTcpLoadVideoData\0"
    "on_btn_captureImage_clicked\0"
    "getCapturedImgData\0continueToCapture\0"
    "showRecivedImg\0d\0showRecivedVideo\0"
    "on_btn_tabM_sendMessage_clicked\0"
    "do_udp_readyRead\0on_btn_tabM_selectPic_clicked\0"
    "on_btn_udp_textClear_clicked\0"
    "on_btn_udp_joinMeeting_clicked\0"
    "on_btn_udp_leaveMeeting_clicked\0"
    "getLoadData\0showUdpRecivedImg\0"
    "on_toolBtn_screenShot_clicked\0"
    "on_btn_personal_homePage_clicked\0"
    "on_btn_ScreenRecording_clicked\0"
    "on_btn_videoPlayback_clicked\0"
    "on_btn_quit_clicked\0on_btn_scaledToSmall_clicked\0"
    "on_btn_meeting_clicked\0on_btn_normal_clicked\0"
    "on_btn_notion_clicked\0on_btn_language_clicked\0"
    "on_btn_about_clicked\0on_btn_playMusic_clicked\0"
    "on_closeCall_clicked\0on_btn_startCall_clicked\0"
    "on_btn_introduction_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      58,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  362,    2, 0x06,    1 /* Public */,
       3,    1,  365,    2, 0x06,    3 /* Public */,
       5,    1,  368,    2, 0x06,    5 /* Public */,
       7,    1,  371,    2, 0x06,    7 /* Public */,
       8,    2,  374,    2, 0x06,    9 /* Public */,
       9,    1,  379,    2, 0x06,   12 /* Public */,
      11,    1,  382,    2, 0x06,   14 /* Public */,
      12,    1,  385,    2, 0x06,   16 /* Public */,
      13,    1,  388,    2, 0x06,   18 /* Public */,
      14,    1,  391,    2, 0x06,   20 /* Public */,
      15,    3,  394,    2, 0x06,   22 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      21,    1,  401,    2, 0x0a,   26 /* Public */,
      22,    1,  404,    2, 0x0a,   28 /* Public */,
      25,    0,  407,    2, 0x08,   30 /* Private */,
      26,    0,  408,    2, 0x08,   31 /* Private */,
      27,    0,  409,    2, 0x08,   32 /* Private */,
      28,    0,  410,    2, 0x08,   33 /* Private */,
      29,    1,  411,    2, 0x08,   34 /* Private */,
      32,    0,  414,    2, 0x08,   36 /* Private */,
      33,    0,  415,    2, 0x08,   37 /* Private */,
      34,    0,  416,    2, 0x08,   38 /* Private */,
      35,    0,  417,    2, 0x08,   39 /* Private */,
      36,    0,  418,    2, 0x08,   40 /* Private */,
      37,    0,  419,    2, 0x08,   41 /* Private */,
      38,    0,  420,    2, 0x08,   42 /* Private */,
      39,    0,  421,    2, 0x08,   43 /* Private */,
      40,    2,  422,    2, 0x08,   44 /* Private */,
      43,    2,  427,    2, 0x08,   47 /* Private */,
      44,    1,  432,    2, 0x08,   50 /* Private */,
      45,    1,  435,    2, 0x08,   52 /* Private */,
      46,    0,  438,    2, 0x08,   54 /* Private */,
      47,    1,  439,    2, 0x08,   55 /* Private */,
      48,    0,  442,    2, 0x08,   57 /* Private */,
      49,    1,  443,    2, 0x08,   58 /* Private */,
      51,    1,  446,    2, 0x08,   60 /* Private */,
      52,    0,  449,    2, 0x08,   62 /* Private */,
      53,    0,  450,    2, 0x08,   63 /* Private */,
      54,    0,  451,    2, 0x08,   64 /* Private */,
      55,    0,  452,    2, 0x08,   65 /* Private */,
      56,    0,  453,    2, 0x08,   66 /* Private */,
      57,    0,  454,    2, 0x08,   67 /* Private */,
      58,    1,  455,    2, 0x08,   68 /* Private */,
      59,    1,  458,    2, 0x08,   70 /* Private */,
      60,    0,  461,    2, 0x08,   72 /* Private */,
      61,    0,  462,    2, 0x08,   73 /* Private */,
      62,    0,  463,    2, 0x08,   74 /* Private */,
      63,    0,  464,    2, 0x08,   75 /* Private */,
      64,    0,  465,    2, 0x08,   76 /* Private */,
      65,    0,  466,    2, 0x08,   77 /* Private */,
      66,    0,  467,    2, 0x08,   78 /* Private */,
      67,    0,  468,    2, 0x08,   79 /* Private */,
      68,    0,  469,    2, 0x08,   80 /* Private */,
      69,    0,  470,    2, 0x08,   81 /* Private */,
      70,    0,  471,    2, 0x08,   82 /* Private */,
      71,    0,  472,    2, 0x08,   83 /* Private */,
      72,    0,  473,    2, 0x08,   84 /* Private */,
      73,    0,  474,    2, 0x08,   85 /* Private */,
      74,    0,  475,    2, 0x08,   86 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6, QMetaType::UChar,    2,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 18, QMetaType::UShort,   17,   19,   20,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 30,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QImage,   41,   42,
    QMetaType::Void, QMetaType::Int, QMetaType::QImage,   41,   42,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   50,
    QMetaType::Void, 0x80000000 | 10,   50,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 10,   50,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->socketClientIp((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->FileNameText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->imageData((*reinterpret_cast< std::add_pointer_t<QByteArray&>>(_a[1]))); break;
        case 3: _t->videoData((*reinterpret_cast< std::add_pointer_t<QByteArray&>>(_a[1]))); break;
        case 4: _t->loadData((*reinterpret_cast< std::add_pointer_t<QByteArray&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint8>>(_a[2]))); break;
        case 5: _t->rawCapturedImg((*reinterpret_cast< std::add_pointer_t<QImage&>>(_a[1]))); break;
        case 6: _t->udpReceivedStream((*reinterpret_cast< std::add_pointer_t<QByteArray&>>(_a[1]))); break;
        case 7: _t->udpReceivedVideoStream((*reinterpret_cast< std::add_pointer_t<QByteArray&>>(_a[1]))); break;
        case 8: _t->screenImage((*reinterpret_cast< std::add_pointer_t<QImage&>>(_a[1]))); break;
        case 9: _t->udpReceivedScreenImg((*reinterpret_cast< std::add_pointer_t<QImage&>>(_a[1]))); break;
        case 10: _t->multicastGroupInfo((*reinterpret_cast< std::add_pointer_t<QHostAddress>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QNetworkInterface>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<quint16>>(_a[3]))); break;
        case 11: _t->do_btnChicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->getLoginInfo((*reinterpret_cast< std::add_pointer_t<DpersonalInfo*>>(_a[1]))); break;
        case 13: _t->on_btn_connectInternet_clicked(); break;
        case 14: _t->do_connected(); break;
        case 15: _t->do_disconnected(); break;
        case 16: _t->do_readyRead(); break;
        case 17: _t->do_stateChanged((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketState>>(_a[1]))); break;
        case 18: _t->on_btn_sendMessage_clicked(); break;
        case 19: _t->on_btn_disconnectInternet_clicked(); break;
        case 20: _t->on_btn_sendPhoto_clicked(); break;
        case 21: _t->on_btn_clearMessage_clicked(); break;
        case 22: _t->on_btn_stopVideo_clicked(); break;
        case 23: _t->on_btn_startVideo_clicked(); break;
        case 24: _t->on_btn_openCamera_clicked(); break;
        case 25: _t->on_btn_closeCamera_clicked(); break;
        case 26: _t->do_imageCaptured((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QImage>>(_a[2]))); break;
        case 27: _t->do_singleImageCaptured((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QImage>>(_a[2]))); break;
        case 28: _t->getTcpLoadImageData((*reinterpret_cast< std::add_pointer_t<QByteArray&>>(_a[1]))); break;
        case 29: _t->getTcpLoadVideoData((*reinterpret_cast< std::add_pointer_t<QByteArray&>>(_a[1]))); break;
        case 30: _t->on_btn_captureImage_clicked(); break;
        case 31: _t->getCapturedImgData((*reinterpret_cast< std::add_pointer_t<QByteArray&>>(_a[1]))); break;
        case 32: _t->continueToCapture(); break;
        case 33: _t->showRecivedImg((*reinterpret_cast< std::add_pointer_t<QImage&>>(_a[1]))); break;
        case 34: _t->showRecivedVideo((*reinterpret_cast< std::add_pointer_t<QImage&>>(_a[1]))); break;
        case 35: _t->on_btn_tabM_sendMessage_clicked(); break;
        case 36: _t->do_udp_readyRead(); break;
        case 37: _t->on_btn_tabM_selectPic_clicked(); break;
        case 38: _t->on_btn_udp_textClear_clicked(); break;
        case 39: _t->on_btn_udp_joinMeeting_clicked(); break;
        case 40: _t->on_btn_udp_leaveMeeting_clicked(); break;
        case 41: _t->getLoadData((*reinterpret_cast< std::add_pointer_t<QByteArray&>>(_a[1]))); break;
        case 42: _t->showUdpRecivedImg((*reinterpret_cast< std::add_pointer_t<QImage&>>(_a[1]))); break;
        case 43: _t->on_toolBtn_screenShot_clicked(); break;
        case 44: _t->on_btn_personal_homePage_clicked(); break;
        case 45: _t->on_btn_ScreenRecording_clicked(); break;
        case 46: _t->on_btn_videoPlayback_clicked(); break;
        case 47: _t->on_btn_quit_clicked(); break;
        case 48: _t->on_btn_scaledToSmall_clicked(); break;
        case 49: _t->on_btn_meeting_clicked(); break;
        case 50: _t->on_btn_normal_clicked(); break;
        case 51: _t->on_btn_notion_clicked(); break;
        case 52: _t->on_btn_language_clicked(); break;
        case 53: _t->on_btn_about_clicked(); break;
        case 54: _t->on_btn_playMusic_clicked(); break;
        case 55: _t->on_closeCall_clicked(); break;
        case 56: _t->on_btn_startCall_clicked(); break;
        case 57: _t->on_btn_introduction_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkInterface >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< DpersonalInfo* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket::SocketState >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::socketClientIp)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::FileNameText)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::imageData)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::videoData)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QByteArray & , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::loadData)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QImage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::rawCapturedImg)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::udpReceivedStream)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::udpReceivedVideoStream)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QImage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::screenImage)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QImage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::udpReceivedScreenImg)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(const QHostAddress & , const QNetworkInterface & , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::multicastGroupInfo)) {
                *result = 10;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QByteArray &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QByteArray &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QByteArray &, std::false_type>, QtPrivate::TypeAndForceComplete<quint8, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QByteArray &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QByteArray &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QHostAddress &, std::false_type>, QtPrivate::TypeAndForceComplete<const QNetworkInterface &, std::false_type>, QtPrivate::TypeAndForceComplete<quint16, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<DpersonalInfo *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketState, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<const QImage &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<const QImage &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QByteArray &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QByteArray &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QByteArray &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QByteArray &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 58)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 58;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 58)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 58;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::socketClientIp(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::FileNameText(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::imageData(QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::videoData(QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MainWindow::loadData(QByteArray & _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MainWindow::rawCapturedImg(QImage & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MainWindow::udpReceivedStream(QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MainWindow::udpReceivedVideoStream(QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MainWindow::screenImage(QImage & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MainWindow::udpReceivedScreenImg(QImage & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void MainWindow::multicastGroupInfo(const QHostAddress & _t1, const QNetworkInterface & _t2, quint16 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
