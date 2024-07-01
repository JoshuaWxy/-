/********************************************************************************
** Form generated from reading UI file 'player.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYER_H
#define UI_PLAYER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtMultimediaWidgets/QVideoWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QVideoWidget *widgetvideo;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *btn_start;
    QPushButton *btn_stop;
    QPushButton *btn_openFile;
    QPushButton *btn_speedBack;
    QToolButton *m_startButton;
    QToolButton *m_stopButton;
    QPushButton *btn_speedFoward;
    QSlider *horizontalSlider;
    QComboBox *combo_speed;
    QPushButton *btn_volumn;
    QPushButton *btn_fullScreen;
    QLabel *label_duration;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(907, 506);
        Dialog->setMinimumSize(QSize(0, 0));
        Dialog->setStyleSheet(QString::fromUtf8("#Dialog  { background-color: #f2f1f5; border-radius: 22px; }\n"
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
"QText"
                        "Edit, QTextBrowser { padding-right: 3px; }\n"
"QLineEdit:hover, QComboBox:hover, QTimeEdit:hover, QDateEdit:hover, QDateTimeEdit:hover, QSpinBox:hover, QDoubleSpinBox:hover { border: 1px solid #409EFF; }\n"
"QComboBo::down-arrow { width:10px; height:10px; right:2px; image:url(:/icons/down.png); }\n"
"QComboBo::drop-down { subcontrol-origin:padding; subcontrol-position:top right; width:15px; border-left-width:0px; border-left-style:solid; border-top-right-radius:3px; border-bottom-right-radius:3px; border-left-color:#242424; }\n"
"QComboBox QAbstractItemView::item{ min-height:20px; min-width:10px; }\n"
"QComboBo::drop-down:on{ top: 1px; }\n"
"QTimeEdit::up-button, QDateEdit::up-button, QDateTimeEdit::up-button, QSpinBo::up-button, QDoubleSpinBo::up-button { width:10px; height:10px; image:url(:/icons/up.png); padding: 3px 8px 0px 0px; }\n"
"QTimeEdit::down-button, QDateEdit::down-button, QDateTimeEdit::down-button, QSpinBo::down-button, QDoubleSpinBo::down-button { width:10px; height:10px; image:url(:/icons/down"
                        ".png); padding: 0px 8px 3px 0px; }\n"
"QTimeEdit::up-button:pressed, QDateEdit::up-button:pressed, QDateTimeEdit::up-button:pressed, QSpinBo::up-button:pressed, QDoubleSpinBo::up-button:pressed { top: -2px; }\n"
"QTimeEdit::down-button:pressed, QDateEdit::down-button:pressed, QDateTimeEdit::down-button:pressed, QSpinBo::down-button:pressed, QDoubleSpinBo::down-button:pressed { bottom: -2px; }\n"
"QTabWidget::pane{ border:1px solid #DCDFE6; border-radius: 6px; border-top-left-radius: 0px; background-color: #ffffff; selection-background-color:#ffffff; selection-color:#DCDFE6; alternate-background-color:#f2f1f5; gridline-color:#3d4150; }\n"
"QTabBar::tab { border:1px solid #DCDFE6; border-top-left-radius: 6px; border-top-right-radius: 6px; font-size: 13px; background-color: #f2f1f5; padding: 2px 6px; }\n"
"QTabWidget::pane:top { top:-1px; }\n"
"QTabWidget::pane:bottom { bottom:-1px; }\n"
"QTabWidget::pane:left { right:-1px; }\n"
"QTabWidget::pane:right { left:-1px; }\n"
"QTabBar::tab:selected { background-color: "
                        "#ffffff; border-bottom: none; }\n"
"QGroupBox { border: 1px solid #DCDFE6; border-radius: 6px; font-size: 13px; margin-top: 7px; }\n"
"QGroupBox::title { subcontrol-origin: margin; subcontrol-position: top center; padding: 0px 5px 3px; }\n"
"\n"
"#widget_menu { background-color: #f8f8f8; border-radius: 16px; }\n"
"#btn_playVideo, #btn_playMusic, #btn_ScreenRecording, #toolBtn_screenShot { background-color: #ffffff; border-radius: 5px; padding: 12px 0 0; }\n"
"#btn_playVideo:hover, #btn_playMusic:hover, #btn_ScreenRecording:hover, #toolBtn_screenShot:hover,hover { background-color: #f8f8f8; border: 1px solid #f0f0f0; }\n"
"#lable_title { padding: 0 10px; }\n"
"#btn_language, #btn_meeting, #btn_normal, #btn_notion { padding: 8px 12px; color: #d1d8e7; background-color: #b8c3ce;  border: none; }\n"
"#btn_language:hover, #btn_meeting:hover, #btn_normal:hover, #btn_notion:hover { background-color: #ffffff; border-radius: 15px; color: #b8c3ce; }\n"
"#btn_personal_homePage, #btn_quit, #btn_scaledToSmall, #btn_littlesh"
                        "ow {  border: none; }\n"
"#btn_personal_homePage:hover, #btn_quit:hover, #btn_scaledToSmall:hover { background-color: #eeeff4; border-radius: 10px; }\n"
"#stackedWidget { background-color: #f8f8f8; border-radius: 16px; }\n"
"#page_memberShip, #page_normal, #page_notion, #page_words { color: #C0C4CC; }"));
        verticalLayout_2 = new QVBoxLayout(Dialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widgetvideo = new QVideoWidget(Dialog);
        widgetvideo->setObjectName(QString::fromUtf8("widgetvideo"));
        widgetvideo->setMinimumSize(QSize(0, 0));

        verticalLayout->addWidget(widgetvideo);


        verticalLayout_2->addLayout(verticalLayout);

        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btn_start = new QPushButton(groupBox);
        btn_start->setObjectName(QString::fromUtf8("btn_start"));

        gridLayout->addWidget(btn_start, 0, 0, 1, 1);

        btn_stop = new QPushButton(groupBox);
        btn_stop->setObjectName(QString::fromUtf8("btn_stop"));

        gridLayout->addWidget(btn_stop, 0, 1, 1, 1);

        btn_openFile = new QPushButton(groupBox);
        btn_openFile->setObjectName(QString::fromUtf8("btn_openFile"));

        gridLayout->addWidget(btn_openFile, 0, 2, 1, 1);

        btn_speedBack = new QPushButton(groupBox);
        btn_speedBack->setObjectName(QString::fromUtf8("btn_speedBack"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/s.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_speedBack->setIcon(icon);

        gridLayout->addWidget(btn_speedBack, 0, 3, 1, 1);

        m_startButton = new QToolButton(groupBox);
        m_startButton->setObjectName(QString::fromUtf8("m_startButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/bf.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_startButton->setIcon(icon1);

        gridLayout->addWidget(m_startButton, 0, 4, 1, 1);

        m_stopButton = new QToolButton(groupBox);
        m_stopButton->setObjectName(QString::fromUtf8("m_stopButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/images/zt.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_stopButton->setIcon(icon2);

        gridLayout->addWidget(m_stopButton, 0, 5, 1, 1);

        btn_speedFoward = new QPushButton(groupBox);
        btn_speedFoward->setObjectName(QString::fromUtf8("btn_speedFoward"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/images/x.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_speedFoward->setIcon(icon3);

        gridLayout->addWidget(btn_speedFoward, 0, 6, 1, 1);

        horizontalSlider = new QSlider(groupBox);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {  \n"
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
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider, 0, 7, 1, 1);

        combo_speed = new QComboBox(groupBox);
        combo_speed->addItem(QString());
        combo_speed->addItem(QString());
        combo_speed->addItem(QString());
        combo_speed->addItem(QString());
        combo_speed->addItem(QString());
        combo_speed->setObjectName(QString::fromUtf8("combo_speed"));

        gridLayout->addWidget(combo_speed, 0, 8, 1, 1);

        btn_volumn = new QPushButton(groupBox);
        btn_volumn->setObjectName(QString::fromUtf8("btn_volumn"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/images/yl.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_volumn->setIcon(icon4);

        gridLayout->addWidget(btn_volumn, 0, 9, 1, 1);

        btn_fullScreen = new QPushButton(groupBox);
        btn_fullScreen->setObjectName(QString::fromUtf8("btn_fullScreen"));

        gridLayout->addWidget(btn_fullScreen, 0, 10, 1, 1);

        label_duration = new QLabel(groupBox);
        label_duration->setObjectName(QString::fromUtf8("label_duration"));

        gridLayout->addWidget(label_duration, 0, 11, 1, 1);


        verticalLayout_2->addWidget(groupBox);

        verticalLayout_2->setStretch(0, 9);
        verticalLayout_2->setStretch(1, 1);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "\350\247\206\351\242\221\346\222\255\346\224\276\345\231\250", nullptr));
        groupBox->setTitle(QString());
        btn_start->setText(QCoreApplication::translate("Dialog", "\345\274\200\345\247\213", nullptr));
        btn_stop->setText(QCoreApplication::translate("Dialog", "\345\233\236\345\210\260\345\274\200\345\247\213", nullptr));
        btn_openFile->setText(QCoreApplication::translate("Dialog", "\351\200\211\345\217\226\346\226\207\344\273\266", nullptr));
        btn_speedBack->setText(QString());
        m_startButton->setText(QCoreApplication::translate("Dialog", "...", nullptr));
        m_stopButton->setText(QCoreApplication::translate("Dialog", "...", nullptr));
        btn_speedFoward->setText(QString());
        combo_speed->setItemText(0, QCoreApplication::translate("Dialog", "1.0", nullptr));
        combo_speed->setItemText(1, QCoreApplication::translate("Dialog", "0.75", nullptr));
        combo_speed->setItemText(2, QCoreApplication::translate("Dialog", "1.25", nullptr));
        combo_speed->setItemText(3, QCoreApplication::translate("Dialog", "1.5", nullptr));
        combo_speed->setItemText(4, QCoreApplication::translate("Dialog", "2.0", nullptr));

        btn_volumn->setText(QString());
        btn_fullScreen->setText(QCoreApplication::translate("Dialog", "\345\205\250\345\261\217", nullptr));
        label_duration->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYER_H
