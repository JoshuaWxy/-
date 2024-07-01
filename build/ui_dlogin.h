/********************************************************************************
** Form generated from reading UI file 'dlogin.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLOGIN_H
#define UI_DLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dlogin
{
public:
    QWidget *widget;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *msgLabel;
    QPushButton *registerBtn;
    QPushButton *miniBtn;
    QPushButton *closeBtn;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QLabel *txLab;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout;
    QComboBox *accountcbox;
    QLineEdit *passwdEdit;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *rememberCkbx;
    QPushButton *forgetBtn;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *loginBtn;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_2;

    void setupUi(QDialog *Dlogin)
    {
        if (Dlogin->objectName().isEmpty())
            Dlogin->setObjectName(QString::fromUtf8("Dlogin"));
        Dlogin->resize(800, 600);
        Dlogin->setMinimumSize(QSize(800, 600));
        Dlogin->setMaximumSize(QSize(800, 600));
        widget = new QWidget(Dlogin);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(460, 0, 341, 600));
        widget->setMinimumSize(QSize(0, 600));
        widget->setMaximumSize(QSize(16777215, 600));
        widget->setStyleSheet(QString::fromUtf8(""));
        widget1 = new QWidget(widget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(100, 460, 137, 30));
        horizontalLayout_3 = new QHBoxLayout(widget1);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        msgLabel = new QLabel(widget1);
        msgLabel->setObjectName(QString::fromUtf8("msgLabel"));

        horizontalLayout_3->addWidget(msgLabel);

        registerBtn = new QPushButton(widget1);
        registerBtn->setObjectName(QString::fromUtf8("registerBtn"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(registerBtn->sizePolicy().hasHeightForWidth());
        registerBtn->setSizePolicy(sizePolicy);
        registerBtn->setMinimumSize(QSize(0, 1));
        registerBtn->setMaximumSize(QSize(61, 28));

        horizontalLayout_3->addWidget(registerBtn);

        miniBtn = new QPushButton(widget);
        miniBtn->setObjectName(QString::fromUtf8("miniBtn"));
        miniBtn->setGeometry(QRect(280, 0, 32, 32));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(miniBtn->sizePolicy().hasHeightForWidth());
        miniBtn->setSizePolicy(sizePolicy1);
        miniBtn->setMaximumSize(QSize(32, 32));
        miniBtn->setLayoutDirection(Qt::LeftToRight);
        miniBtn->setAutoFillBackground(false);
        miniBtn->setStyleSheet(QString::fromUtf8(""));
        miniBtn->setFlat(false);
        closeBtn = new QPushButton(widget);
        closeBtn->setObjectName(QString::fromUtf8("closeBtn"));
        closeBtn->setEnabled(true);
        closeBtn->setGeometry(QRect(310, 0, 32, 32));
        closeBtn->setMinimumSize(QSize(32, 32));
        closeBtn->setMaximumSize(QSize(32, 32));
        closeBtn->setStyleSheet(QString::fromUtf8(""));
        widget2 = new QWidget(widget);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(0, 160, 341, 141));
        horizontalLayout_4 = new QHBoxLayout(widget2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        txLab = new QLabel(widget2);
        txLab->setObjectName(QString::fromUtf8("txLab"));
        sizePolicy1.setHeightForWidth(txLab->sizePolicy().hasHeightForWidth());
        txLab->setSizePolicy(sizePolicy1);
        txLab->setMinimumSize(QSize(70, 70));
        txLab->setMaximumSize(QSize(70, 70));
        txLab->setScaledContents(true);

        horizontalLayout_4->addWidget(txLab);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        widget3 = new QWidget(widget);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(0, 30, 341, 130));
        horizontalLayout_5 = new QHBoxLayout(widget3);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        label = new QLabel(widget3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(140, 128));
        label->setMaximumSize(QSize(140, 128));
        label->setPixmap(QPixmap(QString::fromUtf8(":/pic/logo.png")));

        horizontalLayout_5->addWidget(label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        widget4 = new QWidget(widget);
        widget4->setObjectName(QString::fromUtf8("widget4"));
        widget4->setGeometry(QRect(0, 310, 340, 154));
        verticalLayout_2 = new QVBoxLayout(widget4);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        accountcbox = new QComboBox(widget4);
        accountcbox->setObjectName(QString::fromUtf8("accountcbox"));
        accountcbox->setMinimumSize(QSize(240, 30));
        accountcbox->setMaximumSize(QSize(240, 30));
        accountcbox->setEditable(true);
        accountcbox->setDuplicatesEnabled(false);

        verticalLayout->addWidget(accountcbox);

        passwdEdit = new QLineEdit(widget4);
        passwdEdit->setObjectName(QString::fromUtf8("passwdEdit"));
        passwdEdit->setMinimumSize(QSize(240, 30));
        passwdEdit->setMaximumSize(QSize(240, 30));

        verticalLayout->addWidget(passwdEdit);


        horizontalLayout_6->addLayout(verticalLayout);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_5 = new QSpacerItem(50, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        rememberCkbx = new QCheckBox(widget4);
        rememberCkbx->setObjectName(QString::fromUtf8("rememberCkbx"));

        horizontalLayout->addWidget(rememberCkbx);

        forgetBtn = new QPushButton(widget4);
        forgetBtn->setObjectName(QString::fromUtf8("forgetBtn"));

        horizontalLayout->addWidget(forgetBtn);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_8);

        loginBtn = new QPushButton(widget4);
        loginBtn->setObjectName(QString::fromUtf8("loginBtn"));
        loginBtn->setMinimumSize(QSize(240, 35));
        loginBtn->setMaximumSize(QSize(240, 35));

        horizontalLayout_7->addWidget(loginBtn);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_9);


        verticalLayout_2->addLayout(horizontalLayout_7);

        widget4->raise();
        txLab->raise();
        widget4->raise();
        label->raise();
        closeBtn->raise();
        miniBtn->raise();
        label_2 = new QLabel(Dlogin);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 800, 600));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/pic/bj11.jpg")));
        label_2->setScaledContents(true);
        label_2->raise();
        widget->raise();
        registerBtn->raise();
        msgLabel->raise();

        retranslateUi(Dlogin);

        miniBtn->setDefault(false);


        QMetaObject::connectSlotsByName(Dlogin);
    } // setupUi

    void retranslateUi(QDialog *Dlogin)
    {
        Dlogin->setWindowTitle(QCoreApplication::translate("Dlogin", "Dlogin", nullptr));
        msgLabel->setText(QCoreApplication::translate("Dlogin", "\346\262\241\346\234\211\350\264\246\345\217\267?", nullptr));
        registerBtn->setText(QCoreApplication::translate("Dlogin", "\345\216\273\346\263\250\345\206\214!", nullptr));
        miniBtn->setText(QString());
        closeBtn->setText(QString());
        txLab->setText(QCoreApplication::translate("Dlogin", "tx", nullptr));
        label->setText(QString());
        accountcbox->setPlaceholderText(QString());
        passwdEdit->setPlaceholderText(QCoreApplication::translate("Dlogin", "\345\257\206\347\240\201", nullptr));
        rememberCkbx->setText(QCoreApplication::translate("Dlogin", "\350\256\260\344\275\217\345\257\206\347\240\201", nullptr));
        forgetBtn->setText(QCoreApplication::translate("Dlogin", "\346\211\276\345\233\236\345\257\206\347\240\201", nullptr));
        loginBtn->setText(QCoreApplication::translate("Dlogin", "\347\231\273  \345\275\225", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dlogin: public Ui_Dlogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLOGIN_H
