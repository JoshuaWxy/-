/********************************************************************************
** Form generated from reading UI file 'recording.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECORDING_H
#define UI_RECORDING_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_Recording
{
public:
    QGroupBox *groupBox;
    QSpinBox *spinBox_frame_rate;
    QComboBox *combo_size;
    QComboBox *combo_qulity;
    QLabel *label_frame_rate;
    QLabel *label_recording_size;
    QLabel *label_recording_qulity;
    QPushButton *but_startRecording;
    QLineEdit *line_path;
    QLabel *label_2;
    QTimeEdit *timeEdit;
    QLabel *label;
    QPushButton *btn_close;

    void setupUi(QDialog *Recording)
    {
        if (Recording->objectName().isEmpty())
            Recording->setObjectName(QString::fromUtf8("Recording"));
        Recording->resize(475, 360);
        Recording->setMinimumSize(QSize(475, 360));
        Recording->setMaximumSize(QSize(475, 360));
        Recording->setStyleSheet(QString::fromUtf8("#groupBox  { background-color: #f2f1f5; border-radius: 22px; }\n"
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
"QTe"
                        "xtEdit, QTextBrowser { padding-right: 3px; }\n"
"QLineEdit:hover, QComboBox:hover, QTimeEdit:hover, QDateEdit:hover, QDateTimeEdit:hover, QSpinBox:hover, QDoubleSpinBox:hover { border: 1px solid #409EFF; }\n"
"QComboBox::down-arrow { width:10px; height:10px; right:2px; image:url(:/icons/down.png); }\n"
"QComboBox::drop-down { subcontrol-origin:padding; subcontrol-position:top right; width:15px; border-left-width:0px; border-left-style:solid; border-top-right-radius:3px; border-bottom-right-radius:3px; border-left-color:#242424; }\n"
"QComboBox QAbstractItemView::item{ min-height:20px; min-width:10px; }\n"
"QComboBox::drop-down:on{ top: 1px; }\n"
"QTimeEdit::up-button, QDateEdit::up-button, QDateTimeEdit::up-button, QSpinBox::up-button, QDoubleSpinBox::up-button { width:10px; height:10px; image:url(:/icons/up.png); padding: 3px 8px 0px 0px; }\n"
"QTimeEdit::down-button, QDateEdit::down-button, QDateTimeEdit::down-button, QSpinBox::down-button, QDoubleSpinBox::down-button { width:10px; height:10px; image:url(:/i"
                        "cons/down.png); padding: 0px 8px 3px 0px; }\n"
"QTimeEdit::up-button:pressed, QDateEdit::up-button:pressed, QDateTimeEdit::up-button:pressed, QSpinBox::up-button:pressed, QDoubleSpinBox::up-button:pressed { top: -2px; }\n"
"QTimeEdit::down-button:pressed, QDateEdit::down-button:pressed, QDateTimeEdit::down-button:pressed, QSpinBox::down-button:pressed, QDoubleSpinBox::down-button:pressed { bottom: -2px; }\n"
"QTabWidge::pane{ border:1px solid #DCDFE6; border-radius: 6px; border-top-left-radius: 0px; background-color: #ffffff; selection-background-color:#ffffff; selection-color:#DCDFE6; alternate-background-color:#f2f1f5; gridline-color:#3d4150; }\n"
"QTabBa::tab { border:1px solid #DCDFE6; border-top-left-radius: 6px; border-top-right-radius: 6px; font-size: 13px; background-color: #f2f1f5; padding: 2px 6px; }\n"
"QTabWidge::pane:top { top:-1px; }\n"
"QTabWidgt::pane:bottom { bottom:-1px; }\n"
"QTabWidgt::pane:left { right:-1px; }\n"
"QTabWidgt::pane:right { left:-1px; }\n"
"QTabBr::tab:selected { background-c"
                        "olor: #ffffff; border-bottom: none; }\n"
"QGroupBox { border: 1px solid #DCDFE6; border-radius: 6px; font-size: 13px; margin-top: 7px; }\n"
"QGroupBox::title { subcontrol-origin: margin; subcontrol-position: top center; padding: 0px 5px 3px; }\n"
"\n"
"#widget_menu { background-color: #f8f8f8; border-radius: 16px; }\n"
"#btn_playVideo, #btn_playMusic, #btn_ScreenRecording, #toolBtn_screenShot { background-color: #ffffff; border-radius: 5px; padding: 12px 0 0; }\n"
"#btn_playVideo:hover, #btn_playMusic:hover, #btn_ScreenRecording:hover, #toolBtn_screenShot:hover,hover { background-color: #f8f8f8; border: 1px solid #f0f0f0; }\n"
"#lable_title { padding: 0 10px; }\n"
"#btn_language, #btn_meeting, #btn_normal, #btn_notion { padding: 8px 12px; color: #d1d8e7;  border: none; }\n"
"#btn_language:hover, #btn_meeting:hover, #btn_normal:hover, #btn_notion:hover { background-color: #ffffff; border-radius: 15px; color: #b8c3ce; }\n"
"#btn_personal_homePage, #btn_quit, #btn_scaledToSmall, #btn_littleshow {  border: none; }"
                        "\n"
"#btn_personal_homePage:hover, #btn_quit:hover, #btn_scaledToSmall:hover { background-color: #eeeff4; border-radius: 10px; }\n"
"#stackedWidget { background-color: #f8f8f8; border-radius: 16px; }\n"
"#page_memberShip, #page_normal, #page_notion, #page_words { color: #C0C4CC; }\n"
"\n"
"\n"
"\n"
""));
        groupBox = new QGroupBox(Recording);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 10, 461, 341));
        groupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        groupBox->setFlat(false);
        spinBox_frame_rate = new QSpinBox(groupBox);
        spinBox_frame_rate->setObjectName(QString::fromUtf8("spinBox_frame_rate"));
        spinBox_frame_rate->setGeometry(QRect(90, 40, 61, 31));
        spinBox_frame_rate->setMinimum(20);
        spinBox_frame_rate->setMaximum(60);
        spinBox_frame_rate->setValue(30);
        combo_size = new QComboBox(groupBox);
        combo_size->addItem(QString());
        combo_size->addItem(QString());
        combo_size->addItem(QString());
        combo_size->addItem(QString());
        combo_size->addItem(QString());
        combo_size->addItem(QString());
        combo_size->setObjectName(QString::fromUtf8("combo_size"));
        combo_size->setGeometry(QRect(90, 130, 111, 31));
        combo_qulity = new QComboBox(groupBox);
        combo_qulity->addItem(QString());
        combo_qulity->addItem(QString());
        combo_qulity->addItem(QString());
        combo_qulity->addItem(QString());
        combo_qulity->setObjectName(QString::fromUtf8("combo_qulity"));
        combo_qulity->setGeometry(QRect(90, 80, 91, 31));
        label_frame_rate = new QLabel(groupBox);
        label_frame_rate->setObjectName(QString::fromUtf8("label_frame_rate"));
        label_frame_rate->setGeometry(QRect(10, 40, 61, 21));
        label_recording_size = new QLabel(groupBox);
        label_recording_size->setObjectName(QString::fromUtf8("label_recording_size"));
        label_recording_size->setGeometry(QRect(10, 130, 71, 21));
        label_recording_qulity = new QLabel(groupBox);
        label_recording_qulity->setObjectName(QString::fromUtf8("label_recording_qulity"));
        label_recording_qulity->setGeometry(QRect(10, 90, 61, 21));
        but_startRecording = new QPushButton(groupBox);
        but_startRecording->setObjectName(QString::fromUtf8("but_startRecording"));
        but_startRecording->setGeometry(QRect(150, 270, 141, 51));
        line_path = new QLineEdit(groupBox);
        line_path->setObjectName(QString::fromUtf8("line_path"));
        line_path->setGeometry(QRect(90, 220, 271, 31));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 220, 61, 31));
        timeEdit = new QTimeEdit(groupBox);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setGeometry(QRect(90, 170, 161, 40));
        timeEdit->setMinimumSize(QSize(120, 40));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setBold(false);
        timeEdit->setFont(font);
        timeEdit->setAlignment(Qt::AlignCenter);
        timeEdit->setButtonSymbols(QAbstractSpinBox::NoButtons);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 170, 91, 31));
        btn_close = new QPushButton(groupBox);
        btn_close->setObjectName(QString::fromUtf8("btn_close"));
        btn_close->setGeometry(QRect(420, 10, 31, 31));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/UI/cha.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_close->setIcon(icon);
        btn_close->setIconSize(QSize(20, 20));

        retranslateUi(Recording);

        QMetaObject::connectSlotsByName(Recording);
    } // setupUi

    void retranslateUi(QDialog *Recording)
    {
        Recording->setWindowTitle(QCoreApplication::translate("Recording", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Recording", "\345\275\225\345\210\266\350\256\276\347\275\256", nullptr));
        combo_size->setItemText(0, QCoreApplication::translate("Recording", "1920X1080", nullptr));
        combo_size->setItemText(1, QCoreApplication::translate("Recording", "2560X1440", nullptr));
        combo_size->setItemText(2, QCoreApplication::translate("Recording", "2560X1600", nullptr));
        combo_size->setItemText(3, QCoreApplication::translate("Recording", "1280X720", nullptr));
        combo_size->setItemText(4, QCoreApplication::translate("Recording", "720X480", nullptr));
        combo_size->setItemText(5, QString());

        combo_qulity->setItemText(0, QCoreApplication::translate("Recording", "\344\270\255\347\255\211\350\264\250\351\207\217", nullptr));
        combo_qulity->setItemText(1, QCoreApplication::translate("Recording", "\344\275\216\350\264\250\351\207\217", nullptr));
        combo_qulity->setItemText(2, QCoreApplication::translate("Recording", "\351\253\230\350\264\250\351\207\217", nullptr));
        combo_qulity->setItemText(3, QString());

        label_frame_rate->setText(QCoreApplication::translate("Recording", "\345\275\225\345\210\266\345\270\247\347\216\207", nullptr));
        label_recording_size->setText(QCoreApplication::translate("Recording", "\345\275\225\345\210\266\345\260\272\345\257\270", nullptr));
        label_recording_qulity->setText(QCoreApplication::translate("Recording", "\345\275\225\345\210\266\350\264\250\351\207\217", nullptr));
        but_startRecording->setText(QCoreApplication::translate("Recording", "\345\274\200\345\247\213\345\275\225\345\261\217", nullptr));
        label_2->setText(QCoreApplication::translate("Recording", "\345\275\225\345\210\266\350\267\257\345\276\204:", nullptr));
        timeEdit->setDisplayFormat(QCoreApplication::translate("Recording", "HH:mm:ss", nullptr));
        label->setText(QCoreApplication::translate("Recording", "\345\275\225\345\210\266\346\227\266\351\227\264:", nullptr));
        btn_close->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Recording: public Ui_Recording {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECORDING_H
