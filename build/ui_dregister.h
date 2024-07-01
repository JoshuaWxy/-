/********************************************************************************
** Form generated from reading UI file 'dregister.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DREGISTER_H
#define UI_DREGISTER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dregister
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_7;
    QLineEdit *accountEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *label_8;
    QLineEdit *passwdEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *label_9;
    QLineEdit *SurepasswdEdit;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *returnBtn;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *Next1Btn;
    QWidget *page_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLabel *label_6;
    QLineEdit *EmaiEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *verifiEdit;
    QPushButton *emailBtn;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *back1Btn;
    QSpacerItem *horizontalSpacer;
    QPushButton *Next2Btn;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_10;
    QCheckBox *checkBox;
    QPushButton *fwBtn;
    QWidget *page_3;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_4;
    QLabel *txLabel;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *back2Btn;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *finishBtn;

    void setupUi(QDialog *Dregister)
    {
        if (Dregister->objectName().isEmpty())
            Dregister->setObjectName(QString::fromUtf8("Dregister"));
        Dregister->resize(419, 286);
        Dregister->setStyleSheet(QString::fromUtf8(""));
        stackedWidget = new QStackedWidget(Dregister);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 20, 381, 231));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout = new QGridLayout(page);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/pic/name.png")));

        horizontalLayout->addWidget(label);

        label_7 = new QLabel(page);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout->addWidget(label_7);

        accountEdit = new QLineEdit(page);
        accountEdit->setObjectName(QString::fromUtf8("accountEdit"));

        horizontalLayout->addWidget(accountEdit);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/pic/mima.png")));

        horizontalLayout_2->addWidget(label_2);

        label_8 = new QLabel(page);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_2->addWidget(label_8);

        passwdEdit = new QLineEdit(page);
        passwdEdit->setObjectName(QString::fromUtf8("passwdEdit"));

        horizontalLayout_2->addWidget(passwdEdit);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(page);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/pic/mima2.png")));

        horizontalLayout_3->addWidget(label_3);

        label_9 = new QLabel(page);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_3->addWidget(label_9);

        SurepasswdEdit = new QLineEdit(page);
        SurepasswdEdit->setObjectName(QString::fromUtf8("SurepasswdEdit"));

        horizontalLayout_3->addWidget(SurepasswdEdit);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        returnBtn = new QPushButton(page);
        returnBtn->setObjectName(QString::fromUtf8("returnBtn"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pic/return.png"), QSize(), QIcon::Normal, QIcon::Off);
        returnBtn->setIcon(icon);

        horizontalLayout_7->addWidget(returnBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);

        Next1Btn = new QPushButton(page);
        Next1Btn->setObjectName(QString::fromUtf8("Next1Btn"));
        Next1Btn->setMinimumSize(QSize(90, 30));
        Next1Btn->setMaximumSize(QSize(90, 30));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/pic/next.png"), QSize(), QIcon::Normal, QIcon::Off);
        Next1Btn->setIcon(icon1);

        horizontalLayout_7->addWidget(Next1Btn);


        gridLayout->addLayout(horizontalLayout_7, 3, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        layoutWidget = new QWidget(page_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(11, 11, 357, 121));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/pic/email.png")));

        horizontalLayout_4->addWidget(label_4);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_4->addWidget(label_6);

        EmaiEdit = new QLineEdit(layoutWidget);
        EmaiEdit->setObjectName(QString::fromUtf8("EmaiEdit"));

        horizontalLayout_4->addWidget(EmaiEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        verifiEdit = new QLineEdit(layoutWidget);
        verifiEdit->setObjectName(QString::fromUtf8("verifiEdit"));

        horizontalLayout_5->addWidget(verifiEdit);

        emailBtn = new QPushButton(layoutWidget);
        emailBtn->setObjectName(QString::fromUtf8("emailBtn"));

        horizontalLayout_5->addWidget(emailBtn);


        verticalLayout->addLayout(horizontalLayout_5);

        layoutWidget1 = new QWidget(page_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(11, 192, 361, 32));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        back1Btn = new QPushButton(layoutWidget1);
        back1Btn->setObjectName(QString::fromUtf8("back1Btn"));
        back1Btn->setIcon(icon);

        horizontalLayout_6->addWidget(back1Btn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        Next2Btn = new QPushButton(layoutWidget1);
        Next2Btn->setObjectName(QString::fromUtf8("Next2Btn"));
        Next2Btn->setMinimumSize(QSize(90, 30));
        Next2Btn->setMaximumSize(QSize(90, 30));
        Next2Btn->setIcon(icon1);

        horizontalLayout_6->addWidget(Next2Btn);

        layoutWidget2 = new QWidget(page_2);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 150, 276, 25));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        checkBox = new QCheckBox(layoutWidget2);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout_10->addWidget(checkBox);

        fwBtn = new QPushButton(layoutWidget2);
        fwBtn->setObjectName(QString::fromUtf8("fwBtn"));
        fwBtn->setStyleSheet(QString::fromUtf8("QPushButton#fwBtn\n"
"{\n"
"border:one;\n"
"color:rgb(81,112,255);\n"
"}"));

        horizontalLayout_10->addWidget(fwBtn);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        gridLayout_2 = new QGridLayout(page_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_4);

        txLabel = new QLabel(page_3);
        txLabel->setObjectName(QString::fromUtf8("txLabel"));
        txLabel->setMinimumSize(QSize(100, 100));
        txLabel->setMaximumSize(QSize(100, 100));
        txLabel->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";"));
        txLabel->setScaledContents(true);

        horizontalLayout_9->addWidget(txLabel);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_5);


        gridLayout_2->addLayout(horizontalLayout_9, 0, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        back2Btn = new QPushButton(page_3);
        back2Btn->setObjectName(QString::fromUtf8("back2Btn"));
        back2Btn->setIcon(icon);

        horizontalLayout_8->addWidget(back2Btn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_3);

        finishBtn = new QPushButton(page_3);
        finishBtn->setObjectName(QString::fromUtf8("finishBtn"));
        finishBtn->setIcon(icon1);

        horizontalLayout_8->addWidget(finishBtn);


        gridLayout_2->addLayout(horizontalLayout_8, 1, 0, 1, 1);

        stackedWidget->addWidget(page_3);

        retranslateUi(Dregister);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Dregister);
    } // setupUi

    void retranslateUi(QDialog *Dregister)
    {
        Dregister->setWindowTitle(QCoreApplication::translate("Dregister", "Dialog", nullptr));
        label->setText(QString());
        label_7->setText(QCoreApplication::translate("Dregister", "\350\264\246\345\217\267", nullptr));
        label_2->setText(QString());
        label_8->setText(QCoreApplication::translate("Dregister", "\345\257\206\347\240\201", nullptr));
        label_3->setText(QString());
        label_9->setText(QCoreApplication::translate("Dregister", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        returnBtn->setText(QCoreApplication::translate("Dregister", "\350\277\224\345\233\236", nullptr));
        Next1Btn->setText(QCoreApplication::translate("Dregister", "\344\270\213\344\270\200\346\255\245", nullptr));
        label_4->setText(QString());
        label_6->setText(QCoreApplication::translate("Dregister", "\351\202\256\347\256\261", nullptr));
        label_5->setText(QCoreApplication::translate("Dregister", "\351\202\256\347\256\261\351\252\214\350\257\201\347\240\201", nullptr));
        emailBtn->setText(QCoreApplication::translate("Dregister", "\345\217\221\351\200\201\351\252\214\350\257\201\347\240\201", nullptr));
        back1Btn->setText(QCoreApplication::translate("Dregister", "\344\270\212\344\270\200\346\255\245", nullptr));
        Next2Btn->setText(QCoreApplication::translate("Dregister", "\344\270\213\344\270\200\346\255\245", nullptr));
        checkBox->setText(QCoreApplication::translate("Dregister", "\346\210\221\345\267\262\350\256\244\347\234\237\351\230\205\350\257\273\345\271\266\346\216\245\345\217\227", nullptr));
        fwBtn->setText(QCoreApplication::translate("Dregister", "\350\257\276\345\240\202\351\200\232\346\234\215\345\212\241\345\215\217\350\256\256", nullptr));
        txLabel->setText(QCoreApplication::translate("Dregister", "\347\202\271\345\207\273\350\256\276\347\275\256\345\244\264\345\203\217", nullptr));
        back2Btn->setText(QCoreApplication::translate("Dregister", "\344\270\212\344\270\200\346\255\245", nullptr));
        finishBtn->setText(QCoreApplication::translate("Dregister", "\345\256\214\346\210\220\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dregister: public Ui_Dregister {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DREGISTER_H
