/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *labelShow;
    QFrame *control;
    QVBoxLayout *verticalLayout;
    QPushButton *btnStartShare;
    QPushButton *btnFull;
    QComboBox *comboQuality;
    QLabel *labelFPS;
    QLabel *labelByte;
    QSpacerItem *verticalSpacer;
    QLabel *labelHint;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1009, 586);
        Widget->setStyleSheet(QString::fromUtf8("#centralwidget  { background-color: #f2f1f5; border-radius: 22px; }\n"
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
"QDoubleSpinBox { background-color: #ffffff; border: 2px solid #DCDFE6; border-radius: 6px; padding: 3\n"
"px 8px; font-size: 12px; "
                        "}\n"
"QTextEdit, QTextBrowser { padding-right: 3px; }\n"
"QLineEdit:hover, QComboBox:hover, QTimeEdit:hover, QDateEdit:hover, QDateTimeEdit:hover, QSpinBox:hover, QDoubleSpinBox:hover { border: 1px solid #409EFF; }\n"
"QComboBox::down-arrow { width:10px; height:10px; right:1px; image:url(:/icons/down.png); }\n"
"QComboBox::drop-down { subcontrol-origin:padding; subcontrol-position:top right; width:15px; border-left-width:0px; border-left-style:solid; border-top-right-radius:1\n"
"px; border-bottom-right-radius:3px; border-left-color:#242424; }\n"
"QComboBox QAbstractItemView::item{ min-height:20px; min-width:10px; }\n"
"QComboBox::drop-down:on{ top: 2px; }\n"
"QTimeEdit::up-button, QDateEdit::up-button, QDateTimeEdit::up-button, QSpinBox::up-button, QDoubleSpinBox::up-button { width:10px; height:10px; image:url(:/icons/up.png); padding: 3px 8px 0px 0px; }\n"
"QTimeEdit::down-button, QDateEdit::down-button, QDateTimeEdit::down-button, QSpinBox::down-button, QDoubleSpinBox::down-button { width:10px; height:10px;"
                        " image:url(:/icons/down.png); padding: 0px 8px 3px 0px; }\n"
"QTimeEdit::up-button:pressed, QDateEdit::up-button:pressed, QDateTimeEdit::up-button:pressed, QSpinBox::up-button:pressed, QDoubleSpinBox::up-button:pressed { top: -2px; }\n"
"QTimeEdit::down-button:pressed, QDateEdit::down-button:pressed, QDateTimeEdit::down-button:pressed, QSpinBox::down-button:pressed, QDoubleSpinBox::down-button:pressed { bottom: -2px; }\n"
"QTabWidge::pane{ border:1px solid #DCDFE6; border-radius: 6px; border-top-left-radius: 0px; background-color: #ffffff; selection-background-color:#ffffff; selection-color:#DCDFE6; alternate-background-color:#f2f1f5; gridline-color:#3d4150; }\n"
"QTabBa::tab { border:1px solid #DCDFE6; border-top-left-radius: 6px; border-top-right-radius: 6px; font-size: 13px; background-color: #f2f1f5; padding: 2px 6px; }\n"
"QTabWidge::pane:top { top:-1px; }\n"
"QTabWidgt::pane:bottom { bottom:-1px; }\n"
"QTabWidgt::pane:left { right:-1px; }\n"
"QTabWidgt::pane:right { left:-1px; }\n"
"QTabBr::tab:selected "
                        "{ background-color: #ffffff; border-bottom: none; }\n"
"QGroupBox { border: 1px solid #DCDFE6; border-radius: 6px; font-size: 13px; margin-top: 7px; }\n"
"QGroupBox::title { subcontrol-origin: margin; subcontrol-position: top center; padding: 0px 5px 3px; }\n"
"\n"
"#widget_menu { background-color: #f8f8f8; border-radius: 16px; }\n"
"#btn_playVideo, #btn_playMusic, #btn_ScreenRecording, #toolBtn_screenShot { background-color: #ffffff; border-radius: 5px; padding: 12px 0 0; }\n"
"#btn_playVideo:hover, #btn_playMusic:hover, #btn_ScreenRecording:hover, #toolBtn_screenShot:hover,hover { background-color: #f8f8f8; border: 1px solid #f0f0f0; }\n"
"#lable_title { padding: 0 10px; }\n"
"#btn_language, #btn_meeting, #btn_normal, #btn_notion { padding: 8px 12px; color: #d1d8e7;  border: none; }\n"
"#btn_language:hover, #btn_meeting:hover, #btn_normal:hover, #btn_notion:hover { background-color: #ffffff; border-radius: 15px; color: #b8c3ce; }\n"
"#btn_personal_homePage, #btn_quit, #btn_scaledToSmall, #btn_littleshow {  b"
                        "order: none; }\n"
"#btn_personal_homePage:hover, #btn_quit:hover, #btn_scaledToSmall:hover { background-color: #eeeff4; border-radius: 10px; }\n"
"#stackedWidget { background-color: #f8f8f8; border-radius: 16px; }\n"
"#page_memberShip, #page_normal, #page_notion, #page_words { color: #C0C4CC; }\n"
"\n"
"\n"
"\n"
""));
        horizontalLayout = new QHBoxLayout(Widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelShow = new QLabel(Widget);
        labelShow->setObjectName(QString::fromUtf8("labelShow"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelShow->sizePolicy().hasHeightForWidth());
        labelShow->setSizePolicy(sizePolicy);
        labelShow->setMinimumSize(QSize(100, 0));
        labelShow->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(labelShow);

        control = new QFrame(Widget);
        control->setObjectName(QString::fromUtf8("control"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(control->sizePolicy().hasHeightForWidth());
        control->setSizePolicy(sizePolicy1);
        control->setMinimumSize(QSize(75, 0));
        control->setMaximumSize(QSize(90, 16777215));
        control->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(control);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(3, -1, 3, -1);
        btnStartShare = new QPushButton(control);
        btnStartShare->setObjectName(QString::fromUtf8("btnStartShare"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnStartShare->sizePolicy().hasHeightForWidth());
        btnStartShare->setSizePolicy(sizePolicy2);
        btnStartShare->setMinimumSize(QSize(70, 40));
        btnStartShare->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(btnStartShare);

        btnFull = new QPushButton(control);
        btnFull->setObjectName(QString::fromUtf8("btnFull"));
        sizePolicy2.setHeightForWidth(btnFull->sizePolicy().hasHeightForWidth());
        btnFull->setSizePolicy(sizePolicy2);
        btnFull->setMinimumSize(QSize(70, 40));
        btnFull->setMaximumSize(QSize(100, 100));
        btnFull->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(btnFull);

        comboQuality = new QComboBox(control);
        comboQuality->addItem(QString());
        comboQuality->addItem(QString());
        comboQuality->addItem(QString());
        comboQuality->setObjectName(QString::fromUtf8("comboQuality"));
        comboQuality->setMinimumSize(QSize(70, 30));
        comboQuality->setMaximumSize(QSize(100, 16777215));

        verticalLayout->addWidget(comboQuality);

        labelFPS = new QLabel(control);
        labelFPS->setObjectName(QString::fromUtf8("labelFPS"));
        labelFPS->setStyleSheet(QString::fromUtf8(""));
        labelFPS->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelFPS);

        labelByte = new QLabel(control);
        labelByte->setObjectName(QString::fromUtf8("labelByte"));
        labelByte->setStyleSheet(QString::fromUtf8(""));
        labelByte->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelByte);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        labelHint = new QLabel(control);
        labelHint->setObjectName(QString::fromUtf8("labelHint"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(labelHint->sizePolicy().hasHeightForWidth());
        labelHint->setSizePolicy(sizePolicy3);
        labelHint->setMinimumSize(QSize(75, 0));
        labelHint->setMaximumSize(QSize(130, 16777215));
        labelHint->setLayoutDirection(Qt::LeftToRight);
        labelHint->setStyleSheet(QString::fromUtf8(""));
        labelHint->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelHint);


        horizontalLayout->addWidget(control);

        horizontalLayout->setStretch(0, 20);
        horizontalLayout->setStretch(1, 1);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        labelShow->setText(QString());
        btnStartShare->setText(QCoreApplication::translate("Widget", "\345\274\200\345\220\257\345\205\261\344\272\253", nullptr));
        btnFull->setText(QCoreApplication::translate("Widget", "\351\232\220\350\227\217\345\217\263\344\276\247\346\240\217", nullptr));
        comboQuality->setItemText(0, QCoreApplication::translate("Widget", "\347\224\273\350\264\250\344\275\216", nullptr));
        comboQuality->setItemText(1, QCoreApplication::translate("Widget", "\347\224\273\350\264\250\344\270\255", nullptr));
        comboQuality->setItemText(2, QCoreApplication::translate("Widget", "\347\224\273\350\264\250\351\253\230", nullptr));

        labelFPS->setText(QCoreApplication::translate("Widget", "\345\275\223\345\211\215FPS: 0 ", nullptr));
        labelByte->setText(QCoreApplication::translate("Widget", "\346\257\217\345\270\247: 0KB", nullptr));
        labelHint->setText(QCoreApplication::translate("Widget", "\345\210\235\345\247\213\345\214\226\344\270\255...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
