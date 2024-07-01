/********************************************************************************
** Form generated from reading UI file 'notepad.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEPAD_H
#define UI_NOTEPAD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_notePad
{
public:
    QGridLayout *gridLayout_4;
    QTabWidget *tabWidget;
    QWidget *tabWidgetPage1;
    QGridLayout *gridLayout_2;
    QToolButton *t_color;
    QPushButton *btn_twotitle;
    QPushButton *btn_getcolor;
    QPushButton *btn_threetitle;
    QPushButton *btn_left;
    QPushButton *btn_onetitle;
    QPushButton *btn_paste;
    QPushButton *btn_Bold;
    QPushButton *btn_auto;
    QPushButton *btn_copy;
    QSpinBox *spinBox_size;
    QPushButton *btn_right;
    QPushButton *btn_underline;
    QPushButton *btn_cuten;
    QPushButton *btn_xieti;
    QPushButton *btn_cut;
    QFontComboBox *font_combox;
    QPushButton *btn_bothsort;
    QWidget *tabWidgetPage2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_paint;
    QPushButton *btn_new;
    QMdiArea *mdiArea;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *btn_closeall;
    QPushButton *btn_psave;
    QPushButton *btn_open;
    QComboBox *btn_mainstyl;
    QPushButton *btn_save;
    QLabel *label;

    void setupUi(QDialog *notePad)
    {
        if (notePad->objectName().isEmpty())
            notePad->setObjectName(QString::fromUtf8("notePad"));
        notePad->resize(814, 633);
        notePad->setSizeIncrement(QSize(0, 0));
        notePad->setBaseSize(QSize(900, 1200));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        notePad->setFont(font);
        notePad->setStyleSheet(QString::fromUtf8("#centralwidget  { background-color: #f2f1f5; border-radius: 22px; }\n"
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
        notePad->setSizeGripEnabled(false);
        notePad->setModal(false);
        gridLayout_4 = new QGridLayout(notePad);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        tabWidget = new QTabWidget(notePad);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidgetPage1 = new QWidget();
        tabWidgetPage1->setObjectName(QString::fromUtf8("tabWidgetPage1"));
        gridLayout_2 = new QGridLayout(tabWidgetPage1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        t_color = new QToolButton(tabWidgetPage1);
        t_color->setObjectName(QString::fromUtf8("t_color"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/color.png"), QSize(), QIcon::Normal, QIcon::Off);
        t_color->setIcon(icon);
        t_color->setPopupMode(QToolButton::MenuButtonPopup);
        t_color->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        t_color->setAutoRaise(true);

        gridLayout_2->addWidget(t_color, 0, 8, 1, 1);

        btn_twotitle = new QPushButton(tabWidgetPage1);
        btn_twotitle->setObjectName(QString::fromUtf8("btn_twotitle"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/h2.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_twotitle->setIcon(icon1);

        gridLayout_2->addWidget(btn_twotitle, 0, 5, 1, 1);

        btn_getcolor = new QPushButton(tabWidgetPage1);
        btn_getcolor->setObjectName(QString::fromUtf8("btn_getcolor"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/res/color_choice.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_getcolor->setIcon(icon2);

        gridLayout_2->addWidget(btn_getcolor, 1, 8, 1, 1);

        btn_threetitle = new QPushButton(tabWidgetPage1);
        btn_threetitle->setObjectName(QString::fromUtf8("btn_threetitle"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/res/h3.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_threetitle->setIcon(icon3);

        gridLayout_2->addWidget(btn_threetitle, 0, 6, 1, 1);

        btn_left = new QPushButton(tabWidgetPage1);
        btn_left->setObjectName(QString::fromUtf8("btn_left"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/res/current.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_left->setIcon(icon4);

        gridLayout_2->addWidget(btn_left, 1, 4, 1, 1);

        btn_onetitle = new QPushButton(tabWidgetPage1);
        btn_onetitle->setObjectName(QString::fromUtf8("btn_onetitle"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/res/h1.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_onetitle->setIcon(icon5);

        gridLayout_2->addWidget(btn_onetitle, 0, 4, 1, 1);

        btn_paste = new QPushButton(tabWidgetPage1);
        btn_paste->setObjectName(QString::fromUtf8("btn_paste"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/res/past.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_paste->setIcon(icon6);

        gridLayout_2->addWidget(btn_paste, 0, 2, 1, 1);

        btn_Bold = new QPushButton(tabWidgetPage1);
        btn_Bold->setObjectName(QString::fromUtf8("btn_Bold"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/res/xieti.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_Bold->setIcon(icon7);

        gridLayout_2->addWidget(btn_Bold, 1, 1, 1, 1);

        btn_auto = new QPushButton(tabWidgetPage1);
        btn_auto->setObjectName(QString::fromUtf8("btn_auto"));

        gridLayout_2->addWidget(btn_auto, 0, 7, 1, 1);

        btn_copy = new QPushButton(tabWidgetPage1);
        btn_copy->setObjectName(QString::fromUtf8("btn_copy"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/res/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_copy->setIcon(icon8);

        gridLayout_2->addWidget(btn_copy, 0, 1, 1, 1);

        spinBox_size = new QSpinBox(tabWidgetPage1);
        spinBox_size->setObjectName(QString::fromUtf8("spinBox_size"));
        spinBox_size->setAccelerated(true);
        spinBox_size->setMinimum(5);
        spinBox_size->setMaximum(50);
        spinBox_size->setValue(5);

        gridLayout_2->addWidget(spinBox_size, 1, 9, 1, 1);

        btn_right = new QPushButton(tabWidgetPage1);
        btn_right->setObjectName(QString::fromUtf8("btn_right"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/res/right.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_right->setIcon(icon9);

        gridLayout_2->addWidget(btn_right, 1, 6, 1, 1);

        btn_underline = new QPushButton(tabWidgetPage1);
        btn_underline->setObjectName(QString::fromUtf8("btn_underline"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/res/underline.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_underline->setIcon(icon10);

        gridLayout_2->addWidget(btn_underline, 1, 3, 1, 1);

        btn_cuten = new QPushButton(tabWidgetPage1);
        btn_cuten->setObjectName(QString::fromUtf8("btn_cuten"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/res/left.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cuten->setIcon(icon11);

        gridLayout_2->addWidget(btn_cuten, 1, 5, 1, 1);

        btn_xieti = new QPushButton(tabWidgetPage1);
        btn_xieti->setObjectName(QString::fromUtf8("btn_xieti"));
        btn_xieti->setEnabled(true);
        QFont font1;
        font1.setBold(false);
        btn_xieti->setFont(font1);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/res/Blod.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_xieti->setIcon(icon12);
        btn_xieti->setAutoDefault(true);
        btn_xieti->setFlat(false);

        gridLayout_2->addWidget(btn_xieti, 1, 2, 1, 1);

        btn_cut = new QPushButton(tabWidgetPage1);
        btn_cut->setObjectName(QString::fromUtf8("btn_cut"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/res/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cut->setIcon(icon13);

        gridLayout_2->addWidget(btn_cut, 0, 3, 1, 1);

        font_combox = new QFontComboBox(tabWidgetPage1);
        font_combox->setObjectName(QString::fromUtf8("font_combox"));
        font_combox->setContextMenuPolicy(Qt::DefaultContextMenu);
        font_combox->setLayoutDirection(Qt::LeftToRight);
        font_combox->setEditable(true);

        gridLayout_2->addWidget(font_combox, 0, 9, 1, 1);

        btn_bothsort = new QPushButton(tabWidgetPage1);
        btn_bothsort->setObjectName(QString::fromUtf8("btn_bothsort"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/res/fs.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_bothsort->setIcon(icon14);

        gridLayout_2->addWidget(btn_bothsort, 1, 7, 1, 1);

        tabWidget->addTab(tabWidgetPage1, QString());
        tabWidgetPage2 = new QWidget();
        tabWidgetPage2->setObjectName(QString::fromUtf8("tabWidgetPage2"));
        layoutWidget = new QWidget(tabWidgetPage2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(220, 20, 351, 62));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btn_paint = new QPushButton(layoutWidget);
        btn_paint->setObjectName(QString::fromUtf8("btn_paint"));
        btn_paint->setMinimumSize(QSize(0, 0));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setBold(false);
        btn_paint->setFont(font2);
        btn_paint->setIconSize(QSize(20, 20));
        btn_paint->setAutoDefault(true);

        horizontalLayout->addWidget(btn_paint);

        btn_new = new QPushButton(layoutWidget);
        btn_new->setObjectName(QString::fromUtf8("btn_new"));

        horizontalLayout->addWidget(btn_new);

        tabWidget->addTab(tabWidgetPage2, QString());

        gridLayout_4->addWidget(tabWidget, 1, 0, 1, 1);

        mdiArea = new QMdiArea(notePad);
        mdiArea->setObjectName(QString::fromUtf8("mdiArea"));
        mdiArea->setEnabled(true);
        mdiArea->setMinimumSize(QSize(0, 0));
        QFont font3;
        font3.setPointSize(72);
        mdiArea->setFont(font3);
        mdiArea->setStyleSheet(QString::fromUtf8(""));

        gridLayout_4->addWidget(mdiArea, 2, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBox = new QGroupBox(notePad);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFlat(true);
        groupBox->setCheckable(false);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btn_closeall = new QPushButton(groupBox);
        btn_closeall->setObjectName(QString::fromUtf8("btn_closeall"));

        gridLayout->addWidget(btn_closeall, 0, 3, 1, 1);

        btn_psave = new QPushButton(groupBox);
        btn_psave->setObjectName(QString::fromUtf8("btn_psave"));

        gridLayout->addWidget(btn_psave, 0, 2, 1, 1);

        btn_open = new QPushButton(groupBox);
        btn_open->setObjectName(QString::fromUtf8("btn_open"));

        gridLayout->addWidget(btn_open, 0, 0, 1, 1);

        btn_mainstyl = new QComboBox(groupBox);
        btn_mainstyl->addItem(QString());
        btn_mainstyl->addItem(QString());
        btn_mainstyl->addItem(QString());
        btn_mainstyl->addItem(QString());
        btn_mainstyl->addItem(QString());
        btn_mainstyl->addItem(QString());
        btn_mainstyl->setObjectName(QString::fromUtf8("btn_mainstyl"));
        btn_mainstyl->setDuplicatesEnabled(true);

        gridLayout->addWidget(btn_mainstyl, 0, 4, 1, 1);

        btn_save = new QPushButton(groupBox);
        btn_save->setObjectName(QString::fromUtf8("btn_save"));

        gridLayout->addWidget(btn_save, 0, 1, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);

        label = new QLabel(notePad);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/res/resp.jpg);"));

        gridLayout_3->addWidget(label, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);


        retranslateUi(notePad);

        tabWidget->setCurrentIndex(0);
        btn_xieti->setDefault(false);


        QMetaObject::connectSlotsByName(notePad);
    } // setupUi

    void retranslateUi(QDialog *notePad)
    {
        notePad->setWindowTitle(QCoreApplication::translate("notePad", "\345\277\203\345\276\227\347\254\224\350\256\260", nullptr));
        t_color->setText(QCoreApplication::translate("notePad", "\345\270\270\350\247\204\351\242\234\350\211\262", nullptr));
        btn_twotitle->setText(QString());
        btn_getcolor->setText(QCoreApplication::translate("notePad", "\345\255\227\344\275\223\351\242\234\350\211\262", nullptr));
        btn_threetitle->setText(QString());
        btn_left->setText(QString());
        btn_onetitle->setText(QString());
        btn_paste->setText(QString());
        btn_Bold->setText(QString());
        btn_auto->setText(QCoreApplication::translate("notePad", "\345\261\217\345\271\225\351\200\202\351\205\215", nullptr));
        btn_copy->setText(QString());
        spinBox_size->setSpecialValueText(QString());
        btn_right->setText(QString());
        btn_underline->setText(QString());
        btn_cuten->setText(QString());
        btn_xieti->setText(QString());
        btn_cut->setText(QString());
        btn_bothsort->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage1), QCoreApplication::translate("notePad", "\346\226\207\346\234\254\347\274\226\350\276\221", nullptr));
        btn_paint->setText(QCoreApplication::translate("notePad", "\346\226\260\345\273\272\347\273\230\345\233\276", nullptr));
        btn_new->setText(QCoreApplication::translate("notePad", "\346\226\260\345\273\272\346\226\207\346\234\254", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage2), QCoreApplication::translate("notePad", "\346\226\260\345\273\272", nullptr));
        groupBox->setTitle(QString());
        btn_closeall->setText(QCoreApplication::translate("notePad", "\346\270\205\351\231\244\346\211\200\346\234\211", nullptr));
        btn_psave->setText(QCoreApplication::translate("notePad", "\344\277\235\345\255\230\347\273\230\345\233\276", nullptr));
        btn_open->setText(QCoreApplication::translate("notePad", "\346\211\223\345\274\200\346\226\207\346\234\254", nullptr));
        btn_mainstyl->setItemText(0, QCoreApplication::translate("notePad", "Light Theme", nullptr));
        btn_mainstyl->setItemText(1, QCoreApplication::translate("notePad", "Dark Theme", nullptr));
        btn_mainstyl->setItemText(2, QCoreApplication::translate("notePad", "Ocean Theme", nullptr));
        btn_mainstyl->setItemText(3, QCoreApplication::translate("notePad", "Sunset Theme", nullptr));
        btn_mainstyl->setItemText(4, QCoreApplication::translate("notePad", "Forest Theme", nullptr));
        btn_mainstyl->setItemText(5, QCoreApplication::translate("notePad", "Midnight Theme", nullptr));

        btn_mainstyl->setCurrentText(QString());
        btn_mainstyl->setPlaceholderText(QCoreApplication::translate("notePad", "\344\270\273\351\242\230\351\243\216\346\240\274", nullptr));
        btn_save->setText(QCoreApplication::translate("notePad", "\344\277\235\345\255\230\346\226\207\346\234\254", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class notePad: public Ui_notePad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPAD_H
