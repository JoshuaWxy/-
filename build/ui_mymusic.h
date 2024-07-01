/********************************************************************************
** Form generated from reading UI file 'mymusic.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYMUSIC_H
#define UI_MYMUSIC_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyMusic
{
public:
    QAction *act_add;
    QAction *act_remove;
    QAction *act_clear;
    QAction *act_quit;
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QListWidget *listWidget;
    QLabel *label;
    QFrame *line;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *doubleSpinBox;
    QPushButton *btnSound;
    QSlider *sliderVolumn;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout;
    QPushButton *btnrand;
    QPushButton *btnPrevious;
    QPushButton *btnPlay;
    QPushButton *btnNext;
    QPushButton *btnLoop;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labCurMedia;
    QSlider *sliderPosition;
    QLabel *labRatio;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MyMusic)
    {
        if (MyMusic->objectName().isEmpty())
            MyMusic->setObjectName(QString::fromUtf8("MyMusic"));
        MyMusic->resize(627, 430);
        MyMusic->setStyleSheet(QString::fromUtf8("#MyMusic  { background-color: #F4F9FC; border-radius: 22px; }\n"
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
"QTex"
                        "tEdit, QTextBrowser { padding-right: 3px; }\n"
"QLineEdit:hover, QComboBox:hover, QTimeEdit:hover, QDateEdit:hover, QDateTimeEdit:hover, QSpinBox:hover, QDoubleSpinBox:hover { border: 1px solid #409EFF; }\n"
"QComboBox::down-arrow { width:10px; height:10px; right:2px; image:url(:/icons/down.png); }\n"
"QComboBox::drop-down { subcontrol-origin:padding; subcontrol-position:top right; width:15px; border-left-width:0px; border-left-style:solid; border-top-right-radius:3px; border-bottom-right-radius:3px; border-left-color:#242424; }\n"
"QComboBox QAbstractItemView::item{ min-height:20px; min-width:10px; }\n"
"QComboBox::drop-down:on{ top: 1px; }\n"
"QTimeEdit::up-button, QDateEdit::up-button, QDateTimeEdit::up-button, QSpinBox::up-button, QDoubleSpinBox::up-button { width:10px; height:10px; image:url(:/icons/up.png); padding: 3px 8px 0px 0px; }\n"
"QTimeEdit::down-button, QDateEdit::down-button, QDateTimeEdit::down-button, QSpinBox::down-button, QDoubleSpinBox::down-button { width:10px; height:10px; image:url(:/ic"
                        "ons/down.png); padding: 0px 8px 3px 0px; }\n"
"QTimeEdit::up-button:pressed, QDateEdit::up-button:pressed, QDateTimeEdit::up-button:pressed, QSpinBox::up-button:pressed, QDoubleSpinBox::up-button:pressed { top: -2px; }\n"
"QTimeEdit::down-button:pressed, QDateEdit::down-button:pressed, QDateTimeEdit::down-button:pressed, QSpinBox::down-button:pressed, QDoubleSpinBox::down-button:pressed { bottom: -2px; }\n"
"QTabWidge::pane{ border:1px solid #DCDFE6; border-radius: 6px; border-top-left-radius: 0px; background-color: #ffffff; selection-background-color:#ffffff; selection-color:#DCDFE6; alternate-background-color:#f2f1f5; gridline-color:#3d4150; }\n"
"QTabBa::tab { border:1px solid #DCDFE6; border-top-left-radius: 6px; border-top-right-radius: 6px; font-size: 13px; background-color: #f2f1f5; padding: 2px 6px; }\n"
"QTabWidge::pane:top { top:-1px; }\n"
"QTabWidgt::pane:bottom { bottom:-1px; }\n"
"QTabWidgt::pane:left { right:-1px; }\n"
"QTabWidgt::pane:right { left:-1px; }\n"
"QTabBr::tab:selected { background-co"
                        "lor: #ffffff; border-bottom: none; }\n"
"QGroupBox { border: 1px solid #DCDFE6; border-radius: 6px; font-size: 13px; margin-top: 7px; }\n"
"QGroupBox::title { subcontrol-origin: margin; subcontrol-position: top center; padding: 0px 5px 3px; }\n"
"\n"
"#widget_menu { background-color: #F7FBFC; border-radius: 16px; }\n"
"#btn_videoPlayback, #btn_playMusic, #btn_ScreenRecording, #toolBtn_screenShot { background-color: #ffffff; border-radius: 5px; padding: 12px 0 0; }\n"
"#btn_videoPlayback:hover, #btn_playMusic:hover, #btn_ScreenRecording:hover, #toolBtn_screenShot:hover,hover { background-color: #f8f8f8; border: 1px solid #f0f0f0; }\n"
"#lable_title { padding: 0 10px; }\n"
"#btn_language, #btn_meeting, #btn_normal, #btn_notion { padding: 8px 12px; color: #d1d8e7;  border: none; }\n"
"#btn_language:hover, #btn_meeting:hover, #btn_normal:hover, #btn_notion:hover { background-color: #ffffff; border-radius: 15px; color: #b8c3ce;border: 1px solid #f0f0f0; }\n"
"#btn_personal_homePage, #btn_quit, #btn_scaledToSmall, #"
                        "btn_littleshow {  border: none; }\n"
"#btn_personal_homePage:hover, #btn_quit:hover, #btn_scaledToSmall:hover { background-color: #eeeff4; border-radius: 10px; }\n"
"#stackedWidget { background-color: #F7FBFC; border-radius: 16px; }\n"
"#page_memberShip, #page_normal, #page_notion, #page_words { color: #C0C4CC; }\n"
"\n"
"\n"
"\n"
""));
        act_add = new QAction(MyMusic);
        act_add->setObjectName(QString::fromUtf8("act_add"));
        act_add->setMenuRole(QAction::NoRole);
        act_remove = new QAction(MyMusic);
        act_remove->setObjectName(QString::fromUtf8("act_remove"));
        act_remove->setMenuRole(QAction::NoRole);
        act_clear = new QAction(MyMusic);
        act_clear->setObjectName(QString::fromUtf8("act_clear"));
        act_clear->setMenuRole(QAction::NoRole);
        act_quit = new QAction(MyMusic);
        act_quit->setObjectName(QString::fromUtf8("act_quit"));
        act_quit->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MyMusic);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 561, 381));
        listWidget = new QListWidget(groupBox);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(330, 60, 231, 311));
        listWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 251, 246);\n"
""));
        listWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listWidget->setDragEnabled(true);
        listWidget->setDragDropMode(QAbstractItemView::InternalMove);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 101, 41));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/summer.jpg);"));
        line = new QFrame(groupBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 50, 301, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 20, 201, 32));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        doubleSpinBox = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setMinimumSize(QSize(0, 24));
        doubleSpinBox->setStyleSheet(QString::fromUtf8(""));
        doubleSpinBox->setFrame(true);
        doubleSpinBox->setDecimals(1);
        doubleSpinBox->setMinimum(0.500000000000000);
        doubleSpinBox->setMaximum(1.500000000000000);
        doubleSpinBox->setSingleStep(0.100000000000000);
        doubleSpinBox->setValue(1.000000000000000);

        horizontalLayout->addWidget(doubleSpinBox);

        btnSound = new QPushButton(layoutWidget);
        btnSound->setObjectName(QString::fromUtf8("btnSound"));
        btnSound->setMaximumSize(QSize(30, 30));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/yl.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSound->setIcon(icon);
        btnSound->setIconSize(QSize(24, 24));
        btnSound->setFlat(true);

        horizontalLayout->addWidget(btnSound);

        sliderVolumn = new QSlider(layoutWidget);
        sliderVolumn->setObjectName(QString::fromUtf8("sliderVolumn"));
        sliderVolumn->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {  \n"
"    border: 1px solid #999999;  \n"
"    background: #ffffff;  \n"
"    height: 8px;  \n"
"    margin: 0px;  \n"
"    round-corners: both;  \n"
"}  \n"
"  \n"
"QSlider::handle:horizontal {  \n"
"    background: #66cc99;  \n"
"    border: 1px solid #555555;  \n"
"    width: 8px;  \n"
"    margin: -7px 0; /* margin top/bottom = -(handle height/2) */  \n"
"    border-radius: 4px;  \n"
"}  \n"
"  \n"
"QSlider::handle:horizontal:hover {  \n"
"    background: #77ddaa;  \n"
"}  \n"
"  \n"
"QSlider::sub-page:horizontal {  \n"
"    background: #99cc99;  \n"
"    border: 1px solid #777777;  \n"
"    height: 8px;  \n"
"}  \n"
"  \n"
"QSlider::add-page:horizontal {  \n"
"    background: none;  \n"
"}"));
        sliderVolumn->setMaximum(100);
        sliderVolumn->setValue(100);
        sliderVolumn->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(sliderVolumn);

        layoutWidget_2 = new QWidget(groupBox);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(340, 20, 211, 34));
        gridLayout = new QGridLayout(layoutWidget_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btnrand = new QPushButton(layoutWidget_2);
        btnrand->setObjectName(QString::fromUtf8("btnrand"));
        btnrand->setMinimumSize(QSize(0, 0));
        btnrand->setMaximumSize(QSize(32, 32));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/sj.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnrand->setIcon(icon1);
        btnrand->setIconSize(QSize(15, 15));

        gridLayout->addWidget(btnrand, 0, 0, 1, 1);

        btnPrevious = new QPushButton(layoutWidget_2);
        btnPrevious->setObjectName(QString::fromUtf8("btnPrevious"));
        btnPrevious->setMaximumSize(QSize(32, 32));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/images/s.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnPrevious->setIcon(icon2);

        gridLayout->addWidget(btnPrevious, 0, 1, 1, 1);

        btnPlay = new QPushButton(layoutWidget_2);
        btnPlay->setObjectName(QString::fromUtf8("btnPlay"));
        btnPlay->setMaximumSize(QSize(32, 32));

        gridLayout->addWidget(btnPlay, 0, 2, 1, 1);

        btnNext = new QPushButton(layoutWidget_2);
        btnNext->setObjectName(QString::fromUtf8("btnNext"));
        btnNext->setMaximumSize(QSize(32, 32));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/images/x.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnNext->setIcon(icon3);

        gridLayout->addWidget(btnNext, 0, 3, 1, 1);

        btnLoop = new QPushButton(layoutWidget_2);
        btnLoop->setObjectName(QString::fromUtf8("btnLoop"));
        btnLoop->setMaximumSize(QSize(32, 32));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/images/refresh16.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnLoop->setIcon(icon4);
        btnLoop->setCheckable(true);
        btnLoop->setChecked(true);

        gridLayout->addWidget(btnLoop, 0, 4, 1, 1);

        layoutWidget_3 = new QWidget(centralwidget);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(0, 384, 561, 20));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_2->setSpacing(9);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        labCurMedia = new QLabel(layoutWidget_3);
        labCurMedia->setObjectName(QString::fromUtf8("labCurMedia"));
        labCurMedia->setMinimumSize(QSize(100, 0));

        horizontalLayout_2->addWidget(labCurMedia);

        sliderPosition = new QSlider(layoutWidget_3);
        sliderPosition->setObjectName(QString::fromUtf8("sliderPosition"));
        sliderPosition->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {  \n"
"    border: 1px solid #999999;  \n"
"    background: #ffffff;  \n"
"    height: 8px;  \n"
"    margin: 0px;  \n"
"    round-corners: both;  \n"
"}  \n"
"  \n"
"QSlider::handle:horizontal {  \n"
"    background: #66cc99;  \n"
"    border: 1px solid #555555;  \n"
"    width: 8px;  \n"
"    margin: -7px 0; /* margin top/bottom = -(handle height/2) */  \n"
"    border-radius: 4px;  \n"
"}  \n"
"  \n"
"QSlider::handle:horizontal:hover {  \n"
"    background: #77ddaa;  \n"
"}  \n"
"  \n"
"QSlider::sub-page:horizontal {  \n"
"    background: #99cc99;  \n"
"    border: 1px solid #777777;  \n"
"    height: 8px;  \n"
"}  \n"
"  \n"
"QSlider::add-page:horizontal {  \n"
"    background: none;  \n"
"}"));
        sliderPosition->setTracking(false);
        sliderPosition->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(sliderPosition);

        labRatio = new QLabel(layoutWidget_3);
        labRatio->setObjectName(QString::fromUtf8("labRatio"));
        labRatio->setMinimumSize(QSize(80, 0));

        horizontalLayout_2->addWidget(labRatio);

        MyMusic->setCentralWidget(centralwidget);
        toolBar = new QToolBar(MyMusic);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MyMusic->addToolBar(Qt::LeftToolBarArea, toolBar);

        toolBar->addAction(act_add);
        toolBar->addSeparator();
        toolBar->addAction(act_remove);
        toolBar->addSeparator();
        toolBar->addAction(act_clear);
        toolBar->addSeparator();
        toolBar->addAction(act_quit);

        retranslateUi(MyMusic);

        QMetaObject::connectSlotsByName(MyMusic);
    } // setupUi

    void retranslateUi(QMainWindow *MyMusic)
    {
        MyMusic->setWindowTitle(QCoreApplication::translate("MyMusic", "\351\237\263\344\271\220\346\222\255\346\224\276\345\231\250", nullptr));
        act_add->setText(QCoreApplication::translate("MyMusic", "\346\267\273\345\212\240", nullptr));
#if QT_CONFIG(tooltip)
        act_add->setToolTip(QCoreApplication::translate("MyMusic", "\346\267\273\345\212\240\346\234\254\345\234\260\351\237\263\344\271\220", nullptr));
#endif // QT_CONFIG(tooltip)
        act_remove->setText(QCoreApplication::translate("MyMusic", "\347\247\273\351\231\244", nullptr));
#if QT_CONFIG(tooltip)
        act_remove->setToolTip(QCoreApplication::translate("MyMusic", "\347\247\273\351\231\244\346\255\214\346\233\262", nullptr));
#endif // QT_CONFIG(tooltip)
        act_clear->setText(QCoreApplication::translate("MyMusic", "\346\270\205\351\231\244", nullptr));
#if QT_CONFIG(tooltip)
        act_clear->setToolTip(QCoreApplication::translate("MyMusic", "\346\270\205\351\231\244", nullptr));
#endif // QT_CONFIG(tooltip)
        act_quit->setText(QCoreApplication::translate("MyMusic", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        act_quit->setToolTip(QCoreApplication::translate("MyMusic", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QString());
        label->setText(QString());
        doubleSpinBox->setPrefix(QString());
        doubleSpinBox->setSuffix(QCoreApplication::translate("MyMusic", " \345\200\215\351\200\237 ", nullptr));
        btnSound->setText(QString());
#if QT_CONFIG(tooltip)
        btnrand->setToolTip(QCoreApplication::translate("MyMusic", "\346\222\255\346\224\276", nullptr));
#endif // QT_CONFIG(tooltip)
        btnrand->setText(QString());
#if QT_CONFIG(tooltip)
        btnPrevious->setToolTip(QCoreApplication::translate("MyMusic", "\345\211\215\344\270\200\346\233\262", nullptr));
#endif // QT_CONFIG(tooltip)
        btnPrevious->setText(QString());
#if QT_CONFIG(tooltip)
        btnPlay->setToolTip(QCoreApplication::translate("MyMusic", "\346\222\255\346\224\276", nullptr));
#endif // QT_CONFIG(tooltip)
        btnPlay->setText(QString());
#if QT_CONFIG(tooltip)
        btnNext->setToolTip(QCoreApplication::translate("MyMusic", "\345\220\216\344\270\200\346\233\262", nullptr));
#endif // QT_CONFIG(tooltip)
        btnNext->setText(QString());
        btnLoop->setText(QString());
        labCurMedia->setText(QCoreApplication::translate("MyMusic", "\346\227\240\346\233\262\347\233\256", nullptr));
        labRatio->setText(QCoreApplication::translate("MyMusic", "\350\277\233\345\272\246", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MyMusic", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyMusic: public Ui_MyMusic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYMUSIC_H
