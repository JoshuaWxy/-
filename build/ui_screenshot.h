/********************************************************************************
** Form generated from reading UI file 'screenshot.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREENSHOT_H
#define UI_SCREENSHOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include "playimage.h"

QT_BEGIN_NAMESPACE

class Ui_ScreenShot
{
public:
    PlayImage *widget;

    void setupUi(QDialog *ScreenShot)
    {
        if (ScreenShot->objectName().isEmpty())
            ScreenShot->setObjectName(QString::fromUtf8("ScreenShot"));
        ScreenShot->resize(449, 357);
        ScreenShot->setStyleSheet(QString::fromUtf8("#ScreenShot  { background-color: #F4F9FC; border-radius: 22px; }\n"
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
"Q"
                        "TextEdit, QTextBrowser { padding-right: 3px; }\n"
"QLineEdit:hover, QComboBox:hover, QTimeEdit:hover, QDateEdit:hover, QDateTimeEdit:hover, QSpinBox:hover, QDoubleSpinBox:hover { border: 1px solid #409EFF; }\n"
"QComboBox::down-arrow { width:10px; height:10px; right:2px; image:url(:/icons/down.png); }\n"
"QComboBox::drop-down { subcontrol-origin:padding; subcontrol-position:top right; width:15px; border-left-width:0px; border-left-style:solid; border-top-right-radius:3px; border-bottom-right-radius:3px; border-left-color:#242424; }\n"
"QComboBox QAbstractItemView::item{ min-height:20px; min-width:10px; }\n"
"QComboBox::drop-down:on{ top: 1px; }\n"
"QTimeEdit::up-button, QDateEdit::up-button, QDateTimeEdit::up-button, QSpinBox::up-button, QDoubleSpinBox::up-button { width:10px; height:10px; image:url(:/icons/up.png); padding: 3px 8px 0px 0px; }\n"
"QTimeEdit::down-button, QDateEdit::down-button, QDateTimeEdit::down-button, QSpinBox::down-button, QDoubleSpinBox::down-button { width:10px; height:10px; image:url(:"
                        "/icons/down.png); padding: 0px 8px 3px 0px; }\n"
"QTimeEdit::up-button:pressed, QDateEdit::up-button:pressed, QDateTimeEdit::up-button:pressed, QSpinBox::up-button:pressed, QDoubleSpinBox::up-button:pressed { top: -2px; }\n"
"QTimeEdit::down-button:pressed, QDateEdit::down-button:pressed, QDateTimeEdit::down-button:pressed, QSpinBox::down-button:pressed, QDoubleSpinBox::down-button:pressed { bottom: -2px; }\n"
"QTabWidge::pane{ border:1px solid #DCDFE6; border-radius: 6px; border-top-left-radius: 0px; background-color: #ffffff; selection-background-color:#ffffff; selection-color:#DCDFE6; alternate-background-color:#f2f1f5; gridline-color:#3d4150; }\n"
"QTabBa::tab { border:1px solid #DCDFE6; border-top-left-radius: 6px; border-top-right-radius: 6px; font-size: 13px; background-color: #f2f1f5; padding: 2px 6px; }\n"
"QTabWidge::pane:top { top:-1px; }\n"
"QTabWidgt::pane:bottom { bottom:-1px; }\n"
"QTabWidgt::pane:left { right:-1px; }\n"
"QTabWidgt::pane:right { left:-1px; }\n"
"QTabBr::tab:selected { background"
                        "-color: #ffffff; border-bottom: none; }\n"
"QGroupBox { border: 1px solid #DCDFE6; border-radius: 6px; font-size: 13px; margin-top: 7px; }\n"
"QGroupBox::title { subcontrol-origin: margin; subcontrol-position: top center; padding: 0px 5px 3px; }\n"
"\n"
"#widget_menu { background-color: #F7FBFC; border-radius: 16px; }\n"
"#btn_videoPlayback, #btn_playMusic, #btn_ScreenRecording, #toolBtn_screenShot { background-color: #ffffff; border-radius: 5px; padding: 12px 0 0; }\n"
"#btn_videoPlayback:hover, #btn_playMusic:hover, #btn_ScreenRecording:hover, #toolBtn_screenShot:hover,hover { background-color: #f8f8f8; border: 1px solid #f0f0f0; }\n"
"#lable_title { padding: 0 10px; }\n"
"#btn_language, #btn_meeting, #btn_normal, #btn_notion { padding: 8px 12px; color: #d1d8e7;  border: none; }\n"
"#btn_language:hover, #btn_meeting:hover, #btn_normal:hover, #btn_notion:hover { background-color: #ffffff; border-radius: 15px; color: #b8c3ce;border: 1px solid #f0f0f0; }\n"
"#btn_personal_homePage, #btn_quit, #btn_scaledToSmall"
                        ", #btn_littleshow {  border: none; }\n"
"#btn_personal_homePage:hover, #btn_quit:hover, #btn_scaledToSmall:hover { background-color: #eeeff4; border-radius: 10px; }\n"
"#stackedWidget { background-color: #F7FBFC; border-radius: 16px; }\n"
"#page_memberShip, #page_normal, #page_notion, #page_words { color: #C0C4CC; }\n"
"\n"
"\n"
"\n"
""));
        widget = new PlayImage(ScreenShot);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 50, 441, 301));

        retranslateUi(ScreenShot);

        QMetaObject::connectSlotsByName(ScreenShot);
    } // setupUi

    void retranslateUi(QDialog *ScreenShot)
    {
        ScreenShot->setWindowTitle(QCoreApplication::translate("ScreenShot", "\346\210\252\345\261\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ScreenShot: public Ui_ScreenShot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREENSHOT_H
