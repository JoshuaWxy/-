/********************************************************************************
** Form generated from reading UI file 'mymessagebox.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYMESSAGEBOX_H
#define UI_MYMESSAGEBOX_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyMessageBox
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *w_bg;
    QVBoxLayout *lay_bg;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lab_messagebox_title;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_system_close;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *toolButton;
    QLabel *lab_mess_body;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_mbox_btn01;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_mbox_btn02;

    void setupUi(QWidget *MyMessageBox)
    {
        if (MyMessageBox->objectName().isEmpty())
            MyMessageBox->setObjectName(QString::fromUtf8("MyMessageBox"));
        MyMessageBox->resize(286, 160);
        MyMessageBox->setMinimumSize(QSize(0, 160));
        MyMessageBox->setMaximumSize(QSize(16777215, 160));
        MyMessageBox->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(MyMessageBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        w_bg = new QWidget(MyMessageBox);
        w_bg->setObjectName(QString::fromUtf8("w_bg"));
        w_bg->setStyleSheet(QString::fromUtf8("#QLabel { color: #F4F9FC; }\n"
"#btn_mbox_btn01, #btn_mbox_btn02 { height: 16px; color: #171414; font-size: 14px; background-color: #f2f2f2; border: 1px solid #DCDFE6; border-radius: 6px; padding: 5px 10px; }\n"
"#btn_mbox_btn01:hover, #btn_mbox_btn02:hover { color: #b2b7cb; font-weight: bold; background-color: #1296db; }\n"
"#w_bg { background-color: #F4F9FC ; border-radius: 22px; }\n"
"#toolButton{backgroud-color:#F4F9FC;border-radius: 22px; }\n"
"\n"
"\n"
"\n"
""));
        lay_bg = new QVBoxLayout(w_bg);
        lay_bg->setObjectName(QString::fromUtf8("lay_bg"));
        lay_bg->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(9, -1, -1, -1);
        lab_messagebox_title = new QLabel(w_bg);
        lab_messagebox_title->setObjectName(QString::fromUtf8("lab_messagebox_title"));
        QFont font;
        font.setPointSize(15);
        font.setBold(false);
        lab_messagebox_title->setFont(font);

        horizontalLayout_4->addWidget(lab_messagebox_title);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        btn_system_close = new QPushButton(w_bg);
        btn_system_close->setObjectName(QString::fromUtf8("btn_system_close"));
        btn_system_close->setMinimumSize(QSize(25, 25));
        btn_system_close->setMaximumSize(QSize(25, 25));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/UI/cha.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_system_close->setIcon(icon);
        btn_system_close->setIconSize(QSize(12, 12));

        horizontalLayout_4->addWidget(btn_system_close);


        lay_bg->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(15, -1, 15, -1);
        toolButton = new QToolButton(w_bg);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setMinimumSize(QSize(40, 40));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/UI/question.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon1);
        toolButton->setIconSize(QSize(35, 35));

        horizontalLayout_3->addWidget(toolButton);

        lab_mess_body = new QLabel(w_bg);
        lab_mess_body->setObjectName(QString::fromUtf8("lab_mess_body"));
        lab_mess_body->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(lab_mess_body);


        lay_bg->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        lay_bg->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btn_mbox_btn01 = new QPushButton(w_bg);
        btn_mbox_btn01->setObjectName(QString::fromUtf8("btn_mbox_btn01"));
        btn_mbox_btn01->setMinimumSize(QSize(100, 30));

        horizontalLayout_2->addWidget(btn_mbox_btn01);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btn_mbox_btn02 = new QPushButton(w_bg);
        btn_mbox_btn02->setObjectName(QString::fromUtf8("btn_mbox_btn02"));
        btn_mbox_btn02->setMinimumSize(QSize(100, 30));

        horizontalLayout_2->addWidget(btn_mbox_btn02);


        lay_bg->addLayout(horizontalLayout_2);


        horizontalLayout->addWidget(w_bg);


        retranslateUi(MyMessageBox);

        QMetaObject::connectSlotsByName(MyMessageBox);
    } // setupUi

    void retranslateUi(QWidget *MyMessageBox)
    {
        MyMessageBox->setWindowTitle(QCoreApplication::translate("MyMessageBox", "Form", nullptr));
        lab_messagebox_title->setText(QCoreApplication::translate("MyMessageBox", "\346\217\220\347\244\272", nullptr));
        btn_system_close->setText(QString());
        toolButton->setText(QString());
        lab_mess_body->setText(QString());
        btn_mbox_btn01->setText(QString());
        btn_mbox_btn02->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MyMessageBox: public Ui_MyMessageBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYMESSAGEBOX_H
