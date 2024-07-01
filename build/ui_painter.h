/********************************************************************************
** Form generated from reading UI file 'painter.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAINTER_H
#define UI_PAINTER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_painter
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSlider *horizontalSlider;
    QPushButton *btn_pnew;
    QPushButton *btn_redo;
    QPushButton *btn_getpcolor;
    QPushButton *btn_up;
    QPushButton *btn_down;
    QSpacerItem *horizontalSpacer;
    QFrame *aera;

    void setupUi(QWidget *painter)
    {
        if (painter->objectName().isEmpty())
            painter->setObjectName(QString::fromUtf8("painter"));
        painter->resize(602, 489);
        painter->setStyleSheet(QString::fromUtf8("#centralwidget  { background-color: #f2f1f5; border-radius: 22px; }\n"
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
"QComboBo::down-arrow { width:10px; height:10px; right:2px; image:url(:/icons/down.png); }\n"
"QComboBo::drop-down { subcontrol-origin:padding; subcontrol-position:top right; width:15px; border-left-width:0px; border-left-style:solid; border-top-right-radius:3px; border-bottom-right-radius:3px; border-left-color:#242424; }\n"
"QComboBox QAbstractItemView::item{ min-height:20px; min-width:10px; }\n"
"QComboBo::drop-down:on{ top: 1px; }\n"
"QTimeEdit::up-button, QDateEdit::up-button, QDateTimeEdit::up-button, QSpinBo::up-button, QDoubleSpinBox::up-button { width:10px; height:10px; image:url(:/icons/up.png); padding: 3px 8px 0px 0px; }\n"
"QTimeEdit::down-button, QDateEdit::down-button, QDateTimeEdit::down-button, QSpinBo::down-button, QDoubleSpinBox::down-button { width:10px; height:10px; image:url(:/ico"
                        "ns/down.png); padding: 0px 8px 3px 0px; }\n"
"QTimeEdit::up-button:pressed, QDateEdit::up-button:pressed, QDateTimeEdit::up-button:pressed, QSpinBo::up-button:pressed, QDoubleSpinBox::up-button:pressed { top: -2px; }\n"
"QTimeEdit::down-button:pressed, QDateEdit::down-button:pressed, QDateTimeEdit::down-button:pressed, QSpinBo::down-button:pressed, QDoubleSpinBox::down-button:pressed { bottom: -2px; }\n"
"QTabWidget::pane{ border:1px solid #DCDFE6; border-radius: 6px; border-top-left-radius: 0px; background-color: #ffffff; selection-background-color:#ffffff; selection-color:#DCDFE6; alternate-background-color:#f2f1f5; gridline-color:#3d4150; }\n"
"QTabBar::tab { border:1px solid #DCDFE6; border-top-left-radius: 6px; border-top-right-radius: 6px; font-size: 13px; background-color: #f2f1f5; padding: 2px 6px; }\n"
"QTabWidget::pane:top { top:-1px; }\n"
"QTabWidget::pane:bottom { bottom:-1px; }\n"
"QTabWidget::pane:left { right:-1px; }\n"
"QTabWidget::pane:right { left:-1px; }\n"
"QTabBar::tab:selected { backgroun"
                        "d-color: #ffffff; border-bottom: none; }\n"
"QGroupBox { border: 1px solid #DCDFE6; border-radius: 6px; font-size: 13px; margin-top: 7px; }\n"
"QGroupBox::title { subcontrol-origin: margin; subcontrol-position: top center; padding: 0px 5px 3px; }\n"
"\n"
"#widget_menu { background-color: #f8f8f8; border-radius: 16px; }\n"
"#btn_playVideo, #btn_playMusic, #btn_ScreenRecording, #toolBtn_screenShot { background-color: #ffffff; border-radius: 5px; padding: 12px 0 0; }\n"
"#btn_playVideo:hover, #btn_playMusic:hover, #btn_ScreenRecording:hover, #toolBtn_screenShot:hover,hover { background-color: #f8f8f8; border: 1px solid #f0f0f0; }\n"
"#lable_title { padding: 0 10px; }\n"
"#btn_language, #btn_meeting, #btn_normal, #btn_notion { padding: 8px 12px; color: #d1d8e7; background-color: #b8c3ce;  border: none; }\n"
"#btn_language:hover, #btn_meeting:hover, #btn_normal:hover, #btn_notion:hover { background-color: #ffffff; border-radius: 15px; color: #b8c3ce; }\n"
"#btn_personal_homePage, #btn_quit, #btn_scaledToSmall, #btn"
                        "_littleshow {  border: none; }\n"
"#btn_personal_homePage:hover, #btn_quit:hover, #btn_scaledToSmall:hover { background-color: #eeeff4; border-radius: 10px; }\n"
"#stackedWidget { background-color: #f8f8f8; border-radius: 16px; }\n"
"#page_memberShip, #page_normal, #page_notion, #page_words { color: #C0C4CC; }"));
        gridLayout_2 = new QGridLayout(painter);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(painter);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMaximumSize(QSize(16777215, 70));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

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
        horizontalSlider->setMinimum(1);
        horizontalSlider->setMaximum(50);
        horizontalSlider->setValue(1);
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider);

        btn_pnew = new QPushButton(groupBox);
        btn_pnew->setObjectName(QString::fromUtf8("btn_pnew"));

        horizontalLayout->addWidget(btn_pnew);

        btn_redo = new QPushButton(groupBox);
        btn_redo->setObjectName(QString::fromUtf8("btn_redo"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_redo->setIcon(icon);

        horizontalLayout->addWidget(btn_redo);

        btn_getpcolor = new QPushButton(groupBox);
        btn_getpcolor->setObjectName(QString::fromUtf8("btn_getpcolor"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/color_choice.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_getpcolor->setIcon(icon1);

        horizontalLayout->addWidget(btn_getpcolor);

        btn_up = new QPushButton(groupBox);
        btn_up->setObjectName(QString::fromUtf8("btn_up"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/res/big.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_up->setIcon(icon2);

        horizontalLayout->addWidget(btn_up);

        btn_down = new QPushButton(groupBox);
        btn_down->setObjectName(QString::fromUtf8("btn_down"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/res/small.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_down->setIcon(icon3);

        horizontalLayout->addWidget(btn_down);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        aera = new QFrame(painter);
        aera->setObjectName(QString::fromUtf8("aera"));
        aera->setMinimumSize(QSize(0, 200));
        aera->setMaximumSize(QSize(16777215, 16777215));
        aera->setFrameShape(QFrame::Box);
        aera->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(aera, 1, 0, 1, 1);


        retranslateUi(painter);

        QMetaObject::connectSlotsByName(painter);
    } // setupUi

    void retranslateUi(QWidget *painter)
    {
        painter->setWindowTitle(QCoreApplication::translate("painter", "\347\273\230\345\233\276\350\276\205\345\212\251", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("painter", "\347\224\273\347\254\224\347\262\227\347\273\206", nullptr));
        btn_pnew->setText(QCoreApplication::translate("painter", "\346\270\205\351\231\244\345\205\250\351\203\250", nullptr));
        btn_redo->setText(QString());
        btn_getpcolor->setText(QString());
        btn_up->setText(QString());
        btn_down->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class painter: public Ui_painter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAINTER_H
