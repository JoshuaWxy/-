/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtMultimediaWidgets/QVideoWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <wordslearning.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *act_quit;
    QAction *act_aboutCreator;
    QAction *act_about_software;
    QAction *act_recording_video_setting;
    QAction *act_recording_audio_setting;
    QAction *action;
    QWidget *centralwidget;
    QWidget *widget_menu;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_logo;
    QLabel *label_name;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_personal_homePage;
    QFrame *line;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_about;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btn_introduction;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_introduction;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btn_about;
    QSpacerItem *horizontalSpacer_12;
    QLabel *label_func;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QToolButton *toolBtn_screenShot;
    QToolButton *btn_playMusic;
    QToolButton *btn_videoPlayback;
    QToolButton *btn_ScreenRecording;
    QLabel *label_title;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_3;
    QPushButton *btn_scaledToSmall;
    QPushButton *btn_quit;
    QSpacerItem *horizontalSpacer_13;
    QStackedWidget *stackedWidget;
    QWidget *page_words;
    QVBoxLayout *verticalLayout_4;
    WordsLearning *widget_5;
    QWidget *page_normal;
    QTextEdit *textEdit;
    QLabel *label_receivedVideo;
    QLineEdit *lineEdit_message;
    QPushButton *btn_sendMessage;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_openCamera;
    QPushButton *btn_closeCamera;
    QPushButton *btn_startVideo;
    QPushButton *btn_stopVideo;
    QPushButton *btn_sendPhoto;
    QPushButton *btn_clearMessage;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_connectionState;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_11;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_ip;
    QLineEdit *lineEdit_ip;
    QPushButton *btn_connectInternet;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_port;
    QLineEdit *lineEdit_port;
    QPushButton *btn_disconnectInternet;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_12;
    QComboBox *combo_cameraOutput;
    QLabel *label_waitImage;
    QLabel *label_waitMessage;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_14;
    QRadioButton *btn_saveCapturedImage;
    QPushButton *btn_captureImage;
    QLabel *label_readyPic;
    QLabel *label_2;
    QToolButton *closeCall;
    QToolButton *btn_startCall;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label;
    QLineEdit *lineEdit_sendToIp;
    QVideoWidget *sendWidget;
    QWidget *page_notion;
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QWidget *page_log;
    QWidget *page_memberShip;
    QLineEdit *lineEdit_UdpMessage;
    QPushButton *btn_udp_textClear;
    QPushButton *btn_tabM_sendMessage;
    QPushButton *btn_tabM_selectPic;
    QLabel *label_udp_readyPic;
    QLabel *label_udp_receivedPic;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_udpIp;
    QComboBox *combo_udpIP;
    QPushButton *btn_udp_joinMeeting;
    QWidget *layoutWidget8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_udpPort;
    QSpinBox *spin_udpPort;
    QPushButton *btn_udp_leaveMeeting;
    QTextEdit *textEdit_udp;
    QLabel *label_movie;
    QWidget *layoutWidget9;
    QGridLayout *gridLayout_4;
    QPushButton *btn_meeting;
    QPushButton *btn_normal;
    QPushButton *btn_notion;
    QPushButton *btn_language;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1203, 725);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/UI/myLogo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("#MainWindow { background-color: #F4F9FC; border-radius: 22px; }"));
        act_quit = new QAction(MainWindow);
        act_quit->setObjectName(QString::fromUtf8("act_quit"));
        act_aboutCreator = new QAction(MainWindow);
        act_aboutCreator->setObjectName(QString::fromUtf8("act_aboutCreator"));
        act_aboutCreator->setMenuRole(QAction::NoRole);
        act_about_software = new QAction(MainWindow);
        act_about_software->setObjectName(QString::fromUtf8("act_about_software"));
        act_about_software->setMenuRole(QAction::NoRole);
        act_recording_video_setting = new QAction(MainWindow);
        act_recording_video_setting->setObjectName(QString::fromUtf8("act_recording_video_setting"));
        act_recording_audio_setting = new QAction(MainWindow);
        act_recording_audio_setting->setObjectName(QString::fromUtf8("act_recording_audio_setting"));
        act_recording_audio_setting->setMenuRole(QAction::NoRole);
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("#centralwidget  { background-color: #F4F9FC; border-radius: 22px; }\n"
"* { color: #3d4150; }\n"
"QPushButton { border-style: none;border: 1px solid #DCDFE6;border-radius: 6px;padding: 5px 10px;font-size: 13px; }\n"
"QPushButton:hover { color: #b2b7cb; font-weight: bold; background-color: #1296db; }\n"
"QScrollBar:vertical { background:#f5f6f8; padding:0px; border-radius: 3px; width:6px; }\n"
"QScrollBar::handle:vertical { background:#C0C4CC; border-radius: 3px; }\n"
"QScrollBar::handle:vertical:hover { background:#909399; }\n"
"QScrollBar::handle:vertical:pressed { background:#909399; }\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical, QScrollBar::add-line:vertical, QScrollBar::sub-line:vertical { background:none; }\n"
"QCheckBox, QRadioButton { font-size: 13px; }\n"
"QComboBox, QLineEdit, QTextEdit, QTextBrowser, QTimeEdit, QDateEdit, QDateTimeEdit, QSpinBox,\n"
"QDoubleSpinBox { background-color: #ffffff; border: 1px solid #DCDFE6; border-radius: 6px; padding: 5px 10px; font-size: 13px; }\n"
""
                        "QTextEdit, QTextBrowser { padding-right: 3px; }\n"
"QLineEdit:hover, QComboBox:hover, QTimeEdit:hover, QDateEdit:hover, QDateTimeEdit:hover, QSpinBox:hover, QDoubleSpinBox:hover { border: 1px solid #409EFF; }\n"
"QComboBox::down-arrow { width:10px; height:10px; right:2px; image:url(:/icons/down.png); }\n"
"QComboBox::drop-down { subcontrol-origin:padding; subcontrol-position:top right; width:15px; border-left-width:0px; border-left-style:solid; border-top-right-radius:3px; border-bottom-right-radius:3px; border-left-color:#242424; }\n"
"QComboBox QAbstractItemView::item{ min-height:20px; min-width:10px; }\n"
"QComboBox::drop-down:on{ top: 1px; }\n"
"QTimeEdit::up-button, QDateEdit::up-button, QDateTimeEdit::up-button, QSpinBox::up-button, QDoubleSpinBox::up-button { width:10px; height:10px; image:url(:/icons/up.png); padding: 3px 8px 0px 0px; }\n"
"QTimeEdit::down-button, QDateEdit::down-button, QDateTimeEdit::down-button, QSpinBox::down-button, QDoubleSpinBox::down-button { width:10px; height:10px; image:url("
                        ":/icons/down.png); padding: 0px 8px 3px 0px; }\n"
"QTimeEdit::up-button:pressed, QDateEdit::up-button:pressed, QDateTimeEdit::up-button:pressed, QSpinBox::up-button:pressed, QDoubleSpinBox::up-button:pressed { top: -2px; }\n"
"QTimeEdit::down-button:pressed, QDateEdit::down-button:pressed, QDateTimeEdit::down-button:pressed, QSpinBox::down-button:pressed, QDoubleSpinBox::down-button:pressed { bottom: -2px; }\n"
"QTabWidge::pane{ border:1px solid #DCDFE6; border-radius: 6px; border-top-left-radius: 0px; background-color: #ffffff; selection-background-color:#ffffff; selection-color:#DCDFE6; alternate-background-color:#f2f1f5; gridline-color:#3d4150; }\n"
"QTabBa::tab { border:1px solid #DCDFE6; border-top-left-radius: 6px; border-top-right-radius: 6px; font-size: 13px; background-color: #f2f1f5; padding: 2px 6px; }\n"
"QTabWidge::pane:top { top:-1px; }\n"
"QTabWidgt::pane:bottom { bottom:-1px; }\n"
"QTabWidgt::pane:left { right:-1px; }\n"
"QTabWidgt::pane:right { left:-1px; }\n"
"QTabBr::tab:selected { backgroun"
                        "d-color: #ffffff; border-bottom: none; }\n"
"QGroupBox { border: 1px solid #DCDFE6; border-radius: 6px; font-size: 13px; margin-top: 7px; }\n"
"QGroupBox::title { subcontrol-origin: margin; subcontrol-position: top center; padding: 0px 5px 3px; }\n"
"\n"
"#widget_menu { background-color: #F7FBFC; border-radius: 16px; }\n"
"#btn_videoPlayback, #btn_playMusic, #btn_ScreenRecording, #toolBtn_screenShot ,#closeCall, #btn_startCall{ background-color: #ffffff; border-radius: 5px; padding: 12px 0 0; }\n"
"#btn_videoPlayback:hover, #btn_playMusic:hover, #btn_ScreenRecording:hover, #toolBtn_screenShot:hover,#closeCall:hover, #btn_startCall:hover,hover { background-color: #f8f8f8; border: 1px solid #f0f0f0; }\n"
"#lable_title { padding: 0 10px; }\n"
"#btn_language, #btn_meeting, #btn_normal, #btn_notion { padding: 8px 12px; color: #d1d8e7;  border: none; }\n"
"#btn_language:hover, #btn_meeting:hover, #btn_normal:hover, #btn_notion:hover { background-color: #ffffff; border-radius: 15px; color: #b8c3ce;border: 1px solid #"
                        "f0f0f0; }\n"
"#btn_personal_homePage, #btn_quit, #btn_scaledToSmall, #btn_littleshow {  border: none; }\n"
"#btn_personal_homePage:hover, #btn_quit:hover, #btn_scaledToSmall:hover { background-color: #eeeff4; border-radius: 10px; }\n"
"#stackedWidget { background-color: #F7FBFC; border-radius: 16px; }\n"
"#page_memberShip, #page_normal, #page_notion, #page_words { color: #C0C4CC; }\n"
"\n"
"\n"
"\n"
""));
        widget_menu = new QWidget(centralwidget);
        widget_menu->setObjectName(QString::fromUtf8("widget_menu"));
        widget_menu->setGeometry(QRect(0, 0, 281, 721));
        layoutWidget = new QWidget(widget_menu);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 10, 241, 61));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_logo = new QLabel(layoutWidget);
        label_logo->setObjectName(QString::fromUtf8("label_logo"));
        label_logo->setMinimumSize(QSize(30, 30));
        label_logo->setMaximumSize(QSize(30, 30));

        horizontalLayout_3->addWidget(label_logo);

        label_name = new QLabel(layoutWidget);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Rounded MT Bold")});
        font.setPointSize(17);
        font.setBold(false);
        label_name->setFont(font);
        label_name->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_name);

        horizontalSpacer_2 = new QSpacerItem(48, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        btn_personal_homePage = new QPushButton(layoutWidget);
        btn_personal_homePage->setObjectName(QString::fromUtf8("btn_personal_homePage"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_personal_homePage->sizePolicy().hasHeightForWidth());
        btn_personal_homePage->setSizePolicy(sizePolicy);
        btn_personal_homePage->setMinimumSize(QSize(25, 25));
        btn_personal_homePage->setMaximumSize(QSize(25, 25));
        btn_personal_homePage->setSizeIncrement(QSize(20, 20));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/UI/personalCenter.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_personal_homePage->setIcon(icon1);
        btn_personal_homePage->setIconSize(QSize(20, 20));

        horizontalLayout_3->addWidget(btn_personal_homePage);

        line = new QFrame(widget_menu);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(30, 70, 241, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        groupBox = new QGroupBox(widget_menu);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 90, 241, 191));
        groupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        groupBox->setFlat(true);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        label_about = new QLabel(groupBox);
        label_about->setObjectName(QString::fromUtf8("label_about"));
        label_about->setMinimumSize(QSize(40, 40));
        label_about->setPixmap(QPixmap(QString::fromUtf8(":/images/UI/zhinan1.png")));

        horizontalLayout_4->addWidget(label_about);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        btn_introduction = new QPushButton(groupBox);
        btn_introduction->setObjectName(QString::fromUtf8("btn_introduction"));
        btn_introduction->setMinimumSize(QSize(0, 0));
        btn_introduction->setMaximumSize(QSize(60, 111));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/UI/chooseZhinan.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_introduction->setIcon(icon2);
        btn_introduction->setIconSize(QSize(25, 25));

        horizontalLayout_4->addWidget(btn_introduction);

        horizontalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);


        gridLayout_2->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 2, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        label_introduction = new QLabel(groupBox);
        label_introduction->setObjectName(QString::fromUtf8("label_introduction"));
        label_introduction->setMinimumSize(QSize(40, 40));
        label_introduction->setPixmap(QPixmap(QString::fromUtf8(":/images/UI/aboutUs.png")));

        horizontalLayout_5->addWidget(label_introduction);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        btn_about = new QPushButton(groupBox);
        btn_about->setObjectName(QString::fromUtf8("btn_about"));
        btn_about->setMinimumSize(QSize(0, 0));
        btn_about->setMaximumSize(QSize(111, 111));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/UI/qt.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_about->setIcon(icon3);
        btn_about->setIconSize(QSize(25, 25));

        horizontalLayout_5->addWidget(btn_about);

        horizontalSpacer_12 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_12);


        gridLayout_2->addLayout(horizontalLayout_5, 3, 0, 1, 1);

        label_func = new QLabel(groupBox);
        label_func->setObjectName(QString::fromUtf8("label_func"));

        gridLayout_2->addWidget(label_func, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(widget_menu);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 300, 241, 261));
        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 50, 181, 161));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        toolBtn_screenShot = new QToolButton(layoutWidget1);
        toolBtn_screenShot->setObjectName(QString::fromUtf8("toolBtn_screenShot"));
        toolBtn_screenShot->setMinimumSize(QSize(65, 65));
        toolBtn_screenShot->setMaximumSize(QSize(65, 65));
        toolBtn_screenShot->setContextMenuPolicy(Qt::DefaultContextMenu);
        toolBtn_screenShot->setAcceptDrops(false);
        toolBtn_screenShot->setInputMethodHints(Qt::ImhNone);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/UI/screenShot.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolBtn_screenShot->setIcon(icon4);
        toolBtn_screenShot->setIconSize(QSize(40, 40));
        toolBtn_screenShot->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(toolBtn_screenShot, 0, 0, 1, 1);

        btn_playMusic = new QToolButton(layoutWidget1);
        btn_playMusic->setObjectName(QString::fromUtf8("btn_playMusic"));
        btn_playMusic->setMinimumSize(QSize(65, 65));
        btn_playMusic->setMaximumSize(QSize(65, 65));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/UI/music.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_playMusic->setIcon(icon5);
        btn_playMusic->setIconSize(QSize(40, 40));
        btn_playMusic->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(btn_playMusic, 1, 1, 1, 1);

        btn_videoPlayback = new QToolButton(layoutWidget1);
        btn_videoPlayback->setObjectName(QString::fromUtf8("btn_videoPlayback"));
        btn_videoPlayback->setMinimumSize(QSize(65, 65));
        btn_videoPlayback->setMaximumSize(QSize(65, 65));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/UI/Video.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_videoPlayback->setIcon(icon6);
        btn_videoPlayback->setIconSize(QSize(40, 40));

        gridLayout->addWidget(btn_videoPlayback, 0, 1, 1, 1);

        btn_ScreenRecording = new QToolButton(layoutWidget1);
        btn_ScreenRecording->setObjectName(QString::fromUtf8("btn_ScreenRecording"));
        btn_ScreenRecording->setMinimumSize(QSize(65, 65));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/UI/record.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_ScreenRecording->setIcon(icon7);
        btn_ScreenRecording->setIconSize(QSize(40, 40));

        gridLayout->addWidget(btn_ScreenRecording, 1, 0, 1, 1);

        label_title = new QLabel(groupBox_2);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setGeometry(QRect(12, 19, 211, 19));
        layoutWidget2 = new QWidget(widget_menu);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(50, 600, 171, 61));
        gridLayout_3 = new QGridLayout(layoutWidget2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        btn_scaledToSmall = new QPushButton(layoutWidget2);
        btn_scaledToSmall->setObjectName(QString::fromUtf8("btn_scaledToSmall"));
        btn_scaledToSmall->setMinimumSize(QSize(35, 35));
        btn_scaledToSmall->setMaximumSize(QSize(80, 80));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/UI/small.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_scaledToSmall->setIcon(icon8);
        btn_scaledToSmall->setIconSize(QSize(16, 16));

        gridLayout_3->addWidget(btn_scaledToSmall, 0, 0, 1, 1);

        btn_quit = new QPushButton(layoutWidget2);
        btn_quit->setObjectName(QString::fromUtf8("btn_quit"));
        btn_quit->setMinimumSize(QSize(40, 40));
        btn_quit->setMaximumSize(QSize(80, 80));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/UI/quit.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_quit->setIcon(icon9);
        btn_quit->setIconSize(QSize(16, 16));

        gridLayout_3->addWidget(btn_quit, 0, 2, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_13, 0, 1, 1, 1);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(270, 100, 921, 621));
        stackedWidget->setStyleSheet(QString::fromUtf8("QPushButton:disabled{\n"
"	border: 1px solid #FFF;\n"
"	background-color: #EEE;\n"
"	color: #B4B4B4;\n"
"}\n"
"	\n"
"\n"
"\n"
""));
        page_words = new QWidget();
        page_words->setObjectName(QString::fromUtf8("page_words"));
        verticalLayout_4 = new QVBoxLayout(page_words);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        widget_5 = new WordsLearning(page_words);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));

        verticalLayout_4->addWidget(widget_5);

        stackedWidget->addWidget(page_words);
        page_normal = new QWidget();
        page_normal->setObjectName(QString::fromUtf8("page_normal"));
        textEdit = new QTextEdit(page_normal);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, 390, 311, 191));
        label_receivedVideo = new QLabel(page_normal);
        label_receivedVideo->setObjectName(QString::fromUtf8("label_receivedVideo"));
        label_receivedVideo->setGeometry(QRect(470, 60, 431, 311));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_receivedVideo->sizePolicy().hasHeightForWidth());
        label_receivedVideo->setSizePolicy(sizePolicy1);
        label_receivedVideo->setMaximumSize(QSize(600, 338));
        label_receivedVideo->setFrameShape(QFrame::StyledPanel);
        lineEdit_message = new QLineEdit(page_normal);
        lineEdit_message->setObjectName(QString::fromUtf8("lineEdit_message"));
        lineEdit_message->setGeometry(QRect(0, 580, 281, 31));
        btn_sendMessage = new QPushButton(page_normal);
        btn_sendMessage->setObjectName(QString::fromUtf8("btn_sendMessage"));
        btn_sendMessage->setGeometry(QRect(280, 580, 35, 35));
        btn_sendMessage->setMinimumSize(QSize(35, 35));
        btn_sendMessage->setMaximumSize(QSize(35, 35));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/UI/sendMessage.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_sendMessage->setIcon(icon10);
        btn_sendMessage->setIconSize(QSize(30, 30));
        layoutWidget3 = new QWidget(page_normal);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(0, 350, 351, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btn_openCamera = new QPushButton(layoutWidget3);
        btn_openCamera->setObjectName(QString::fromUtf8("btn_openCamera"));
        btn_openCamera->setMinimumSize(QSize(35, 35));
        btn_openCamera->setMaximumSize(QSize(35, 35));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/UI/openCam.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_openCamera->setIcon(icon11);
        btn_openCamera->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(btn_openCamera);

        btn_closeCamera = new QPushButton(layoutWidget3);
        btn_closeCamera->setObjectName(QString::fromUtf8("btn_closeCamera"));
        btn_closeCamera->setMinimumSize(QSize(35, 35));
        btn_closeCamera->setMaximumSize(QSize(35, 35));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/UI/closeCam.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_closeCamera->setIcon(icon12);
        btn_closeCamera->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(btn_closeCamera);

        btn_startVideo = new QPushButton(layoutWidget3);
        btn_startVideo->setObjectName(QString::fromUtf8("btn_startVideo"));
        btn_startVideo->setMinimumSize(QSize(35, 35));
        btn_startVideo->setMaximumSize(QSize(35, 35));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/UI/openVideoCall.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_startVideo->setIcon(icon13);
        btn_startVideo->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(btn_startVideo);

        btn_stopVideo = new QPushButton(layoutWidget3);
        btn_stopVideo->setObjectName(QString::fromUtf8("btn_stopVideo"));
        btn_stopVideo->setMinimumSize(QSize(35, 35));
        btn_stopVideo->setMaximumSize(QSize(35, 35));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/UI/breakvideoCall.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_stopVideo->setIcon(icon14);
        btn_stopVideo->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(btn_stopVideo);

        btn_sendPhoto = new QPushButton(layoutWidget3);
        btn_sendPhoto->setObjectName(QString::fromUtf8("btn_sendPhoto"));
        btn_sendPhoto->setMinimumSize(QSize(35, 35));
        btn_sendPhoto->setMaximumSize(QSize(35, 35));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/images/UI/selPic.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_sendPhoto->setIcon(icon15);
        btn_sendPhoto->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(btn_sendPhoto);

        btn_clearMessage = new QPushButton(layoutWidget3);
        btn_clearMessage->setObjectName(QString::fromUtf8("btn_clearMessage"));
        btn_clearMessage->setMinimumSize(QSize(35, 35));
        btn_clearMessage->setMaximumSize(QSize(35, 35));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/images/UI/clearMessage.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_clearMessage->setIcon(icon16);
        btn_clearMessage->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(btn_clearMessage);

        layoutWidget4 = new QWidget(page_normal);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(20, 0, 887, 44));
        horizontalLayout_13 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        label_connectionState = new QLabel(layoutWidget4);
        label_connectionState->setObjectName(QString::fromUtf8("label_connectionState"));
        label_connectionState->setMinimumSize(QSize(0, 40));
        label_connectionState->setMaximumSize(QSize(40, 40));
        label_connectionState->setPixmap(QPixmap(QString::fromUtf8(":/images/UI/disconnectionState.png")));

        horizontalLayout_13->addWidget(label_connectionState);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_9);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));

        horizontalLayout_13->addLayout(horizontalLayout_2);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_11);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_ip = new QLabel(layoutWidget4);
        label_ip->setObjectName(QString::fromUtf8("label_ip"));
        label_ip->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(label_ip);

        lineEdit_ip = new QLineEdit(layoutWidget4);
        lineEdit_ip->setObjectName(QString::fromUtf8("lineEdit_ip"));
        lineEdit_ip->setMinimumSize(QSize(100, 0));
        lineEdit_ip->setMaximumSize(QSize(110, 16777215));

        horizontalLayout_10->addWidget(lineEdit_ip);

        btn_connectInternet = new QPushButton(layoutWidget4);
        btn_connectInternet->setObjectName(QString::fromUtf8("btn_connectInternet"));
        btn_connectInternet->setMinimumSize(QSize(40, 40));
        btn_connectInternet->setMaximumSize(QSize(40, 40));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/images/UI/connection.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_connectInternet->setIcon(icon17);
        btn_connectInternet->setIconSize(QSize(25, 25));

        horizontalLayout_10->addWidget(btn_connectInternet);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer);


        horizontalLayout_13->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_port = new QLabel(layoutWidget4);
        label_port->setObjectName(QString::fromUtf8("label_port"));
        label_port->setMaximumSize(QSize(50, 16777215));
        label_port->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(label_port);

        lineEdit_port = new QLineEdit(layoutWidget4);
        lineEdit_port->setObjectName(QString::fromUtf8("lineEdit_port"));
        lineEdit_port->setMinimumSize(QSize(0, 0));
        lineEdit_port->setMaximumSize(QSize(70, 16777215));

        horizontalLayout_11->addWidget(lineEdit_port);

        btn_disconnectInternet = new QPushButton(layoutWidget4);
        btn_disconnectInternet->setObjectName(QString::fromUtf8("btn_disconnectInternet"));
        btn_disconnectInternet->setMinimumSize(QSize(40, 40));
        btn_disconnectInternet->setMaximumSize(QSize(40, 40));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/images/UI/disconnection .png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_disconnectInternet->setIcon(icon18);
        btn_disconnectInternet->setIconSize(QSize(21, 28));

        horizontalLayout_11->addWidget(btn_disconnectInternet);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_10);


        horizontalLayout_13->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(10);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        combo_cameraOutput = new QComboBox(layoutWidget4);
        combo_cameraOutput->setObjectName(QString::fromUtf8("combo_cameraOutput"));
        combo_cameraOutput->setMinimumSize(QSize(120, 0));
        QFont font1;
        combo_cameraOutput->setFont(font1);

        horizontalLayout_12->addWidget(combo_cameraOutput);


        horizontalLayout_13->addLayout(horizontalLayout_12);

        label_waitImage = new QLabel(page_normal);
        label_waitImage->setObjectName(QString::fromUtf8("label_waitImage"));
        label_waitImage->setGeometry(QRect(550, 70, 256, 235));
        label_waitImage->setPixmap(QPixmap(QString::fromUtf8(":/images/UI/waitForJoin.png")));
        label_waitMessage = new QLabel(page_normal);
        label_waitMessage->setObjectName(QString::fromUtf8("label_waitMessage"));
        label_waitMessage->setGeometry(QRect(570, 310, 221, 40));
        label_waitMessage->setMinimumSize(QSize(0, 40));
        label_waitMessage->setAlignment(Qt::AlignCenter);
        layoutWidget5 = new QWidget(page_normal);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(750, 380, 151, 51));
        horizontalLayout_14 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        btn_saveCapturedImage = new QRadioButton(layoutWidget5);
        btn_saveCapturedImage->setObjectName(QString::fromUtf8("btn_saveCapturedImage"));
        btn_saveCapturedImage->setMinimumSize(QSize(50, 40));
        btn_saveCapturedImage->setMaximumSize(QSize(16777, 16777));

        horizontalLayout_14->addWidget(btn_saveCapturedImage);

        btn_captureImage = new QPushButton(layoutWidget5);
        btn_captureImage->setObjectName(QString::fromUtf8("btn_captureImage"));
        btn_captureImage->setMinimumSize(QSize(50, 40));
        btn_captureImage->setMaximumSize(QSize(1666, 1666));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/images/UI/camera.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_captureImage->setIcon(icon19);
        btn_captureImage->setIconSize(QSize(30, 30));

        horizontalLayout_14->addWidget(btn_captureImage);

        label_readyPic = new QLabel(page_normal);
        label_readyPic->setObjectName(QString::fromUtf8("label_readyPic"));
        label_readyPic->setGeometry(QRect(330, 460, 181, 101));
        label_2 = new QLabel(page_normal);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 60, 451, 291));
        label_2->setFrameShape(QFrame::StyledPanel);
        label_2->setFrameShadow(QFrame::Sunken);
        closeCall = new QToolButton(page_normal);
        closeCall->setObjectName(QString::fromUtf8("closeCall"));
        closeCall->setGeometry(QRect(630, 410, 81, 71));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/images/UI/closeCall.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeCall->setIcon(icon20);
        closeCall->setIconSize(QSize(40, 40));
        closeCall->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        btn_startCall = new QToolButton(page_normal);
        btn_startCall->setObjectName(QString::fromUtf8("btn_startCall"));
        btn_startCall->setGeometry(QRect(550, 410, 71, 71));
        btn_startCall->setMaximumSize(QSize(1000, 1000));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/images/UI/accpetCall.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_startCall->setIcon(icon21);
        btn_startCall->setIconSize(QSize(40, 40));
        btn_startCall->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        layoutWidget6 = new QWidget(page_normal);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(549, 371, 171, 32));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget6);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(50, 0));
        label->setMaximumSize(QSize(44, 16777215));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(12);
        font2.setBold(true);
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(label);

        lineEdit_sendToIp = new QLineEdit(layoutWidget6);
        lineEdit_sendToIp->setObjectName(QString::fromUtf8("lineEdit_sendToIp"));
        lineEdit_sendToIp->setMaximumSize(QSize(110, 16777215));

        horizontalLayout_8->addWidget(lineEdit_sendToIp);

        sendWidget = new QVideoWidget(page_normal);
        sendWidget->setObjectName(QString::fromUtf8("sendWidget"));
        sendWidget->setGeometry(QRect(0, 60, 451, 291));
        sendWidget->setMinimumSize(QSize(0, 0));
        stackedWidget->addWidget(page_normal);
        page_notion = new QWidget();
        page_notion->setObjectName(QString::fromUtf8("page_notion"));
        verticalLayout = new QVBoxLayout(page_notion);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget_2 = new QWidget(page_notion);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));

        verticalLayout->addWidget(widget_2);

        stackedWidget->addWidget(page_notion);
        page_log = new QWidget();
        page_log->setObjectName(QString::fromUtf8("page_log"));
        stackedWidget->addWidget(page_log);
        page_memberShip = new QWidget();
        page_memberShip->setObjectName(QString::fromUtf8("page_memberShip"));
        lineEdit_UdpMessage = new QLineEdit(page_memberShip);
        lineEdit_UdpMessage->setObjectName(QString::fromUtf8("lineEdit_UdpMessage"));
        lineEdit_UdpMessage->setGeometry(QRect(20, 470, 241, 31));
        btn_udp_textClear = new QPushButton(page_memberShip);
        btn_udp_textClear->setObjectName(QString::fromUtf8("btn_udp_textClear"));
        btn_udp_textClear->setEnabled(true);
        btn_udp_textClear->setGeometry(QRect(20, 430, 30, 30));
        btn_udp_textClear->setMinimumSize(QSize(30, 30));
        btn_udp_textClear->setMaximumSize(QSize(30, 30));
        btn_udp_textClear->setIcon(icon16);
        btn_udp_textClear->setIconSize(QSize(25, 25));
        btn_tabM_sendMessage = new QPushButton(page_memberShip);
        btn_tabM_sendMessage->setObjectName(QString::fromUtf8("btn_tabM_sendMessage"));
        btn_tabM_sendMessage->setEnabled(true);
        btn_tabM_sendMessage->setGeometry(QRect(270, 470, 30, 30));
        btn_tabM_sendMessage->setMinimumSize(QSize(30, 30));
        btn_tabM_sendMessage->setMaximumSize(QSize(30, 30));
        btn_tabM_sendMessage->setIcon(icon10);
        btn_tabM_sendMessage->setIconSize(QSize(25, 25));
        btn_tabM_sendMessage->setCheckable(false);
        btn_tabM_selectPic = new QPushButton(page_memberShip);
        btn_tabM_selectPic->setObjectName(QString::fromUtf8("btn_tabM_selectPic"));
        btn_tabM_selectPic->setEnabled(true);
        btn_tabM_selectPic->setGeometry(QRect(60, 430, 30, 30));
        btn_tabM_selectPic->setMinimumSize(QSize(30, 30));
        btn_tabM_selectPic->setMaximumSize(QSize(30, 30));
        btn_tabM_selectPic->setIcon(icon15);
        btn_tabM_selectPic->setIconSize(QSize(25, 25));
        label_udp_readyPic = new QLabel(page_memberShip);
        label_udp_readyPic->setObjectName(QString::fromUtf8("label_udp_readyPic"));
        label_udp_readyPic->setGeometry(QRect(340, 480, 231, 121));
        label_udp_readyPic->setFrameShape(QFrame::StyledPanel);
        label_udp_receivedPic = new QLabel(page_memberShip);
        label_udp_receivedPic->setObjectName(QString::fromUtf8("label_udp_receivedPic"));
        label_udp_receivedPic->setGeometry(QRect(620, 480, 210, 121));
        label_udp_receivedPic->setMinimumSize(QSize(210, 0));
        label_udp_receivedPic->setMaximumSize(QSize(210, 16777215));
        label_udp_receivedPic->setFrameShape(QFrame::StyledPanel);
        layoutWidget7 = new QWidget(page_memberShip);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(20, 560, 281, 42));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_udpIp = new QLabel(layoutWidget7);
        label_udpIp->setObjectName(QString::fromUtf8("label_udpIp"));
        label_udpIp->setMinimumSize(QSize(60, 0));
        label_udpIp->setMaximumSize(QSize(60, 16777215));
        label_udpIp->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_udpIp);

        combo_udpIP = new QComboBox(layoutWidget7);
        combo_udpIP->addItem(QString());
        combo_udpIP->addItem(QString());
        combo_udpIP->addItem(QString());
        combo_udpIP->setObjectName(QString::fromUtf8("combo_udpIP"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(combo_udpIP->sizePolicy().hasHeightForWidth());
        combo_udpIP->setSizePolicy(sizePolicy2);
        combo_udpIP->setMinimumSize(QSize(155, 0));
        combo_udpIP->setMaximumSize(QSize(155, 16777215));
        combo_udpIP->setEditable(true);
        combo_udpIP->setMaxVisibleItems(11);
        combo_udpIP->setIconSize(QSize(20, 20));
        combo_udpIP->setDuplicatesEnabled(false);
        combo_udpIP->setFrame(true);

        horizontalLayout_6->addWidget(combo_udpIP);

        btn_udp_joinMeeting = new QPushButton(layoutWidget7);
        btn_udp_joinMeeting->setObjectName(QString::fromUtf8("btn_udp_joinMeeting"));
        btn_udp_joinMeeting->setMinimumSize(QSize(50, 40));
        btn_udp_joinMeeting->setMaximumSize(QSize(50, 40));
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/images/UI/joinMetting.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_udp_joinMeeting->setIcon(icon22);
        btn_udp_joinMeeting->setIconSize(QSize(40, 40));

        horizontalLayout_6->addWidget(btn_udp_joinMeeting);

        layoutWidget8 = new QWidget(page_memberShip);
        layoutWidget8->setObjectName(QString::fromUtf8("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(20, 510, 281, 42));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget8);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_udpPort = new QLabel(layoutWidget8);
        label_udpPort->setObjectName(QString::fromUtf8("label_udpPort"));
        label_udpPort->setMaximumSize(QSize(60, 16777215));
        label_udpPort->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(label_udpPort);

        spin_udpPort = new QSpinBox(layoutWidget8);
        spin_udpPort->setObjectName(QString::fromUtf8("spin_udpPort"));
        spin_udpPort->setMinimum(1);
        spin_udpPort->setMaximum(65535);
        spin_udpPort->setValue(35310);

        horizontalLayout_7->addWidget(spin_udpPort);

        btn_udp_leaveMeeting = new QPushButton(layoutWidget8);
        btn_udp_leaveMeeting->setObjectName(QString::fromUtf8("btn_udp_leaveMeeting"));
        btn_udp_leaveMeeting->setEnabled(true);
        btn_udp_leaveMeeting->setMinimumSize(QSize(50, 40));
        btn_udp_leaveMeeting->setMaximumSize(QSize(50, 40));
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/images/UI/quitMetting.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_udp_leaveMeeting->setIcon(icon23);
        btn_udp_leaveMeeting->setIconSize(QSize(40, 40));

        horizontalLayout_7->addWidget(btn_udp_leaveMeeting);

        textEdit_udp = new QTextEdit(page_memberShip);
        textEdit_udp->setObjectName(QString::fromUtf8("textEdit_udp"));
        textEdit_udp->setGeometry(QRect(10, 0, 301, 421));
        label_movie = new QLabel(page_memberShip);
        label_movie->setObjectName(QString::fromUtf8("label_movie"));
        label_movie->setGeometry(QRect(320, 10, 591, 441));
        stackedWidget->addWidget(page_memberShip);
        layoutWidget9 = new QWidget(centralwidget);
        layoutWidget9->setObjectName(QString::fromUtf8("layoutWidget9"));
        layoutWidget9->setGeometry(QRect(280, 10, 961, 81));
        gridLayout_4 = new QGridLayout(layoutWidget9);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        btn_meeting = new QPushButton(layoutWidget9);
        btn_meeting->setObjectName(QString::fromUtf8("btn_meeting"));
        btn_meeting->setMinimumSize(QSize(150, 40));
        btn_meeting->setMaximumSize(QSize(100, 30));
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/images/UI/meettingModel.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_meeting->setIcon(icon24);
        btn_meeting->setIconSize(QSize(40, 40));
        btn_meeting->setFlat(true);

        gridLayout_4->addWidget(btn_meeting, 0, 0, 1, 1);

        btn_normal = new QPushButton(layoutWidget9);
        btn_normal->setObjectName(QString::fromUtf8("btn_normal"));
        btn_normal->setMinimumSize(QSize(150, 40));
        btn_normal->setMaximumSize(QSize(100, 30));
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/images/UI/videoCall.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_normal->setIcon(icon25);
        btn_normal->setIconSize(QSize(40, 40));
        btn_normal->setFlat(true);

        gridLayout_4->addWidget(btn_normal, 0, 1, 1, 1);

        btn_notion = new QPushButton(layoutWidget9);
        btn_notion->setObjectName(QString::fromUtf8("btn_notion"));
        btn_notion->setMinimumSize(QSize(150, 40));
        btn_notion->setMaximumSize(QSize(100, 30));
        QIcon icon26;
        icon26.addFile(QString::fromUtf8(":/images/UI/biji.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_notion->setIcon(icon26);
        btn_notion->setIconSize(QSize(40, 40));
        btn_notion->setFlat(true);

        gridLayout_4->addWidget(btn_notion, 0, 2, 1, 1);

        btn_language = new QPushButton(layoutWidget9);
        btn_language->setObjectName(QString::fromUtf8("btn_language"));
        btn_language->setMinimumSize(QSize(150, 40));
        btn_language->setMaximumSize(QSize(100, 30));
        QIcon icon27;
        icon27.addFile(QString::fromUtf8(":/images/UI/yici.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_language->setIcon(icon27);
        btn_language->setIconSize(QSize(40, 40));
        btn_language->setFlat(true);

        gridLayout_4->addWidget(btn_language, 0, 3, 1, 1);

        label_3 = new QLabel(layoutWidget9);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(4444, 4444));
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_3, 1, 0, 1, 1);

        label_4 = new QLabel(layoutWidget9);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(4444, 4444));
        label_4->setFont(font2);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_4, 1, 1, 1, 1);

        label_5 = new QLabel(layoutWidget9);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(4444, 4444));
        label_5->setFont(font2);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_5, 1, 2, 1, 1);

        label_6 = new QLabel(layoutWidget9);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(4444, 4444));
        label_6->setFont(font2);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_6, 1, 3, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(act_quit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Client", nullptr));
        act_quit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\351\241\265\351\235\242", nullptr));
#if QT_CONFIG(tooltip)
        act_quit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\347\250\213\345\272\217", nullptr));
#endif // QT_CONFIG(tooltip)
        act_aboutCreator->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216\344\275\234\350\200\205", nullptr));
        act_about_software->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216\350\275\257\344\273\266", nullptr));
        act_recording_video_setting->setText(QCoreApplication::translate("MainWindow", "\345\275\225\345\210\266\350\247\206\351\242\221\350\256\276\347\275\256", nullptr));
#if QT_CONFIG(tooltip)
        act_recording_video_setting->setToolTip(QCoreApplication::translate("MainWindow", "\345\275\225\345\210\266\350\256\276\347\275\256", nullptr));
#endif // QT_CONFIG(tooltip)
        act_recording_audio_setting->setText(QCoreApplication::translate("MainWindow", "\345\275\225\345\210\266\351\237\263\351\242\221\350\256\276\347\275\256", nullptr));
#if QT_CONFIG(tooltip)
        act_recording_audio_setting->setToolTip(QCoreApplication::translate("MainWindow", "\345\275\225\345\210\266\351\237\263\351\242\221", nullptr));
#endif // QT_CONFIG(tooltip)
        action->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\345\233\276\347\211\207\350\256\276\347\275\256", nullptr));
        label_logo->setText(QString());
        label_name->setText(QCoreApplication::translate("MainWindow", "\350\257\276\345\240\202\351\200\232", nullptr));
        btn_personal_homePage->setText(QString());
        groupBox->setTitle(QString());
        label_about->setText(QString());
#if QT_CONFIG(tooltip)
        btn_introduction->setToolTip(QCoreApplication::translate("MainWindow", "\344\275\277\347\224\250\346\214\207\345\215\227", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_introduction->setText(QString());
        label_introduction->setText(QString());
#if QT_CONFIG(tooltip)
        btn_about->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216\350\275\257\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_about->setText(QString());
        label_func->setText(QCoreApplication::translate("MainWindow", "\346\214\207\345\215\227", nullptr));
        groupBox_2->setTitle(QString());
#if QT_CONFIG(tooltip)
        toolBtn_screenShot->setToolTip(QCoreApplication::translate("MainWindow", "\346\210\252\345\261\217", nullptr));
#endif // QT_CONFIG(tooltip)
        toolBtn_screenShot->setText(QString());
#if QT_CONFIG(tooltip)
        btn_playMusic->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\351\237\263\344\271\220", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_playMusic->setText(QString());
#if QT_CONFIG(tooltip)
        btn_videoPlayback->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\350\247\206\351\242\221", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_videoPlayback->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
#if QT_CONFIG(tooltip)
        btn_ScreenRecording->setToolTip(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213\345\275\225\345\203\217", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_ScreenRecording->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label_title->setText(QCoreApplication::translate("MainWindow", "\345\212\237\350\203\275", nullptr));
#if QT_CONFIG(tooltip)
        btn_scaledToSmall->setToolTip(QCoreApplication::translate("MainWindow", "\346\234\200\345\260\217\345\214\226", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_scaledToSmall->setText(QString());
#if QT_CONFIG(tooltip)
        btn_quit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_quit->setText(QString());
        label_receivedVideo->setText(QString());
#if QT_CONFIG(tooltip)
        btn_sendMessage->setToolTip(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_sendMessage->setText(QString());
#if QT_CONFIG(tooltip)
        btn_openCamera->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\221\204\345\203\217\345\244\264", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_openCamera->setText(QString());
#if QT_CONFIG(tooltip)
        btn_closeCamera->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\346\221\204\345\203\217\345\244\264", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_closeCamera->setText(QString());
#if QT_CONFIG(tooltip)
        btn_startVideo->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\350\247\206\351\242\221\351\200\232\350\257\235", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_startVideo->setText(QString());
#if QT_CONFIG(tooltip)
        btn_stopVideo->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\350\247\206\351\242\221\351\200\232\350\257\235", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_stopVideo->setText(QString());
#if QT_CONFIG(tooltip)
        btn_sendPhoto->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\345\233\276\347\211\207", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_sendPhoto->setText(QString());
#if QT_CONFIG(tooltip)
        btn_clearMessage->setToolTip(QCoreApplication::translate("MainWindow", "\346\270\205\347\220\206\344\277\241\346\201\257", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_clearMessage->setText(QString());
#if QT_CONFIG(tooltip)
        label_connectionState->setToolTip(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245\347\212\266\346\200\201", nullptr));
#endif // QT_CONFIG(tooltip)
        label_connectionState->setText(QString());
        label_ip->setText(QCoreApplication::translate("MainWindow", "IP:", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_ip->setToolTip(QCoreApplication::translate("MainWindow", "\346\234\215\345\212\241\345\231\250IP\345\234\260\345\235\200", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_ip->setText(QCoreApplication::translate("MainWindow", "172.20.10.2", nullptr));
#if QT_CONFIG(tooltip)
        btn_connectInternet->setToolTip(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245\346\234\215\345\212\241\345\231\250", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_connectInternet->setText(QString());
        label_port->setText(QCoreApplication::translate("MainWindow", "Port", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_port->setToolTip(QCoreApplication::translate("MainWindow", "\346\234\215\345\212\241\345\231\250\347\253\257\345\217\243", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_port->setText(QCoreApplication::translate("MainWindow", "6666", nullptr));
#if QT_CONFIG(tooltip)
        btn_disconnectInternet->setToolTip(QCoreApplication::translate("MainWindow", "\346\226\255\345\274\200\346\234\215\345\212\241\345\231\250", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_disconnectInternet->setText(QString());
#if QT_CONFIG(tooltip)
        combo_cameraOutput->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\351\273\230\350\256\244\346\221\204\345\203\217\345\244\264", nullptr));
#endif // QT_CONFIG(tooltip)
        label_waitImage->setText(QString());
        label_waitMessage->setText(QCoreApplication::translate("MainWindow", "\347\255\211\345\276\205\345\257\271\346\226\271\345\212\240\345\205\245......", nullptr));
#if QT_CONFIG(tooltip)
        btn_saveCapturedImage->setToolTip(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\346\213\215\346\221\204\347\205\247\347\211\207", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_saveCapturedImage->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
        btn_captureImage->setText(QCoreApplication::translate("MainWindow", "\346\213\215\347\205\247", nullptr));
#if QT_CONFIG(tooltip)
        label_readyPic->setToolTip(QCoreApplication::translate("MainWindow", "\345\207\206\345\244\207\345\217\221\351\200\201\347\232\204\345\233\276\347\211\207", nullptr));
#endif // QT_CONFIG(tooltip)
        label_readyPic->setText(QString());
#if QT_CONFIG(tooltip)
        label_2->setToolTip(QCoreApplication::translate("MainWindow", "\346\213\215\347\205\247", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QString());
        closeCall->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\351\200\232\350\257\235", nullptr));
        btn_startCall->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\351\200\232\350\257\235", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\257\271\346\226\271IP:", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_sendToIp->setToolTip(QCoreApplication::translate("MainWindow", "\345\257\271\346\226\271\347\232\204IP\345\234\260\345\235\200", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_sendToIp->setText(QCoreApplication::translate("MainWindow", "172.20.10.2", nullptr));
#if QT_CONFIG(tooltip)
        btn_udp_textClear->setToolTip(QCoreApplication::translate("MainWindow", "\346\270\205\346\245\232\346\266\210\346\201\257", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_udp_textClear->setText(QString());
#if QT_CONFIG(tooltip)
        btn_tabM_sendMessage->setToolTip(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_tabM_sendMessage->setText(QString());
#if QT_CONFIG(tooltip)
        btn_tabM_selectPic->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\345\233\276\347\211\207\345\217\221\351\200\201", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_tabM_selectPic->setText(QString());
#if QT_CONFIG(tooltip)
        label_udp_readyPic->setToolTip(QCoreApplication::translate("MainWindow", "\345\207\206\345\244\207\345\217\221\351\200\201\347\232\204\345\233\276\347\211\207", nullptr));
#endif // QT_CONFIG(tooltip)
        label_udp_readyPic->setText(QString());
#if QT_CONFIG(tooltip)
        label_udp_receivedPic->setToolTip(QCoreApplication::translate("MainWindow", "\346\216\245\346\224\266\345\210\260\347\232\204\345\233\276\347\211\207", nullptr));
#endif // QT_CONFIG(tooltip)
        label_udp_receivedPic->setText(QString());
        label_udpIp->setText(QCoreApplication::translate("MainWindow", "\344\274\232\350\256\256ip", nullptr));
        combo_udpIP->setItemText(0, QCoreApplication::translate("MainWindow", "239.255.100.1", nullptr));
        combo_udpIP->setItemText(1, QCoreApplication::translate("MainWindow", "239.255.43.21", nullptr));
        combo_udpIP->setItemText(2, QCoreApplication::translate("MainWindow", "239.255.255.100", nullptr));

#if QT_CONFIG(tooltip)
        combo_udpIP->setToolTip(QCoreApplication::translate("MainWindow", "\344\274\232\350\256\256\345\217\267", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        btn_udp_joinMeeting->setToolTip(QCoreApplication::translate("MainWindow", "\345\212\240\345\205\245\344\274\232\350\256\256", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_udp_joinMeeting->setText(QString());
        label_udpPort->setText(QCoreApplication::translate("MainWindow", "\344\274\232\350\256\256\347\253\257\345\217\243", nullptr));
#if QT_CONFIG(tooltip)
        btn_udp_leaveMeeting->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\344\274\232\350\256\256", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_udp_leaveMeeting->setText(QString());
        textEdit_udp->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:13px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:13px;\">239.0.0.0\357\275\236239.255.255.255</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:13px;\">\344\274\232\350\256\256\345\234\260\345\235\200\345\214\272\351\227\264</span></p></body></html>", nullptr));
        label_movie->setText(QString());
#if QT_CONFIG(tooltip)
        btn_meeting->setToolTip(QCoreApplication::translate("MainWindow", "\344\274\232\350\256\256\346\250\241\345\274\217", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_meeting->setText(QString());
#if QT_CONFIG(tooltip)
        btn_normal->setToolTip(QCoreApplication::translate("MainWindow", "\344\270\252\344\272\272\346\250\241\345\274\217", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_normal->setText(QString());
#if QT_CONFIG(tooltip)
        btn_notion->setToolTip(QCoreApplication::translate("MainWindow", "\347\254\224\350\256\260\346\234\254", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_notion->setText(QString());
#if QT_CONFIG(tooltip)
        btn_language->setToolTip(QCoreApplication::translate("MainWindow", "\345\255\246\350\257\215", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_language->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "\344\274\232\350\256\256\346\250\241\345\274\217", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\344\270\252\344\272\272\346\250\241\345\274\217", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\351\232\217\345\277\203\350\256\260", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\345\277\206\350\257\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
