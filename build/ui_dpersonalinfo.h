/********************************************************************************
** Form generated from reading UI file 'dpersonalinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DPERSONALINFO_H
#define UI_DPERSONALINFO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
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

class Ui_DpersonalInfo
{
public:
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_15;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_11;
    QLabel *ipEdit;
    QSpacerItem *horizontalSpacer;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_17;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_16;
    QSpacerItem *horizontalSpacer_3;
    QLabel *txLabel_2;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLabel *label_15;
    QLineEdit *nameEdit_2;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_9;
    QLabel *label_16;
    QLineEdit *numEdit_2;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_10;
    QLabel *label_17;
    QLineEdit *emailEdit_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_14;
    QLabel *label_18;
    QLineEdit *phoneEdit_2;
    QSpacerItem *verticalSpacer;
    QWidget *page_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_18;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_2;
    QLabel *txLabel_3;
    QPushButton *choosetxBtn;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_19;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_19;
    QLineEdit *nameEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *label_20;
    QLineEdit *sexEdit;
    QHBoxLayout *horizontalLayout_20;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QLabel *label_21;
    QLineEdit *emailEdit;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_13;
    QLabel *label_22;
    QLineEdit *phoneEdit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_12;
    QLabel *label_23;
    QLineEdit *idEdit;
    QHBoxLayout *horizontalLayout_21;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QLabel *label_24;
    QLineEdit *areaEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLabel *label_25;
    QLineEdit *brithEdit;
    QHBoxLayout *horizontalLayout_22;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_2;
    QLabel *label_26;
    QLineEdit *numEdit;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_6;
    QLabel *label_27;
    QLineEdit *classEdit;
    QHBoxLayout *horizontalLayout_23;
    QPushButton *backBtn;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *saveBtn;

    void setupUi(QWidget *DpersonalInfo)
    {
        if (DpersonalInfo->objectName().isEmpty())
            DpersonalInfo->setObjectName(QString::fromUtf8("DpersonalInfo"));
        DpersonalInfo->resize(459, 589);
        DpersonalInfo->setStyleSheet(QString::fromUtf8("QWidget#widget\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
""));
        gridLayout_3 = new QGridLayout(DpersonalInfo);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_11 = new QLabel(DpersonalInfo);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMinimumSize(QSize(48, 48));
        label_11->setMaximumSize(QSize(48, 48));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/pic/IP.png")));
        label_11->setScaledContents(true);

        horizontalLayout_14->addWidget(label_11);

        ipEdit = new QLabel(DpersonalInfo);
        ipEdit->setObjectName(QString::fromUtf8("ipEdit"));
        ipEdit->setEnabled(false);
        ipEdit->setMinimumSize(QSize(100, 40));
        ipEdit->setMaximumSize(QSize(100, 40));
        ipEdit->setStyleSheet(QString::fromUtf8("font: 11pt \"Microsoft YaHei UI\";"));
        ipEdit->setScaledContents(false);

        horizontalLayout_14->addWidget(ipEdit);


        horizontalLayout_15->addLayout(horizontalLayout_14);

        horizontalSpacer = new QSpacerItem(250, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer);


        gridLayout_3->addLayout(horizontalLayout_15, 1, 0, 1, 1);

        stackedWidget = new QStackedWidget(DpersonalInfo);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout = new QGridLayout(page);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_4);

        pushButton = new QPushButton(page);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pic/bj.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);

        horizontalLayout_17->addWidget(pushButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_5);


        gridLayout->addLayout(horizontalLayout_17, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_3);

        txLabel_2 = new QLabel(page);
        txLabel_2->setObjectName(QString::fromUtf8("txLabel_2"));
        txLabel_2->setMinimumSize(QSize(100, 100));
        txLabel_2->setMaximumSize(QSize(100, 100));

        horizontalLayout_16->addWidget(txLabel_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_16);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_5 = new QLabel(page);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("font: 9pt \"\346\245\267\344\275\223\";\n"
""));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/pic/name.png")));

        horizontalLayout_3->addWidget(label_5);

        label_15 = new QLabel(page);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_3->addWidget(label_15);

        nameEdit_2 = new QLineEdit(page);
        nameEdit_2->setObjectName(QString::fromUtf8("nameEdit_2"));

        horizontalLayout_3->addWidget(nameEdit_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_9 = new QLabel(page);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setStyleSheet(QString::fromUtf8("font: 9pt \"\346\245\267\344\275\223\";\n"
""));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/pic/nub.png")));
        label_9->setScaledContents(true);

        horizontalLayout_11->addWidget(label_9);

        label_16 = new QLabel(page);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_11->addWidget(label_16);

        numEdit_2 = new QLineEdit(page);
        numEdit_2->setObjectName(QString::fromUtf8("numEdit_2"));

        horizontalLayout_11->addWidget(numEdit_2);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_10 = new QLabel(page);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setStyleSheet(QString::fromUtf8("font: 9pt \"\346\245\267\344\275\223\";\n"
""));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/pic/email.png")));

        horizontalLayout_13->addWidget(label_10);

        label_17 = new QLabel(page);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_13->addWidget(label_17);

        emailEdit_2 = new QLineEdit(page);
        emailEdit_2->setObjectName(QString::fromUtf8("emailEdit_2"));

        horizontalLayout_13->addWidget(emailEdit_2);


        verticalLayout->addLayout(horizontalLayout_13);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_14 = new QLabel(page);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setStyleSheet(QString::fromUtf8("font: 9pt \"\346\245\267\344\275\223\";\n"
""));
        label_14->setPixmap(QPixmap(QString::fromUtf8(":/pic/phone_big.png")));

        horizontalLayout_9->addWidget(label_14);

        label_18 = new QLabel(page);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_9->addWidget(label_18);

        phoneEdit_2 = new QLineEdit(page);
        phoneEdit_2->setObjectName(QString::fromUtf8("phoneEdit_2"));

        horizontalLayout_9->addWidget(phoneEdit_2);


        verticalLayout->addLayout(horizontalLayout_9);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_2 = new QGridLayout(page_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_6);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        txLabel_3 = new QLabel(page_2);
        txLabel_3->setObjectName(QString::fromUtf8("txLabel_3"));
        txLabel_3->setMinimumSize(QSize(100, 100));
        txLabel_3->setMaximumSize(QSize(100, 100));

        verticalLayout_2->addWidget(txLabel_3);

        choosetxBtn = new QPushButton(page_2);
        choosetxBtn->setObjectName(QString::fromUtf8("choosetxBtn"));
        choosetxBtn->setMaximumSize(QSize(93, 28));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/pic/tx.png"), QSize(), QIcon::Normal, QIcon::Off);
        choosetxBtn->setIcon(icon1);

        verticalLayout_2->addWidget(choosetxBtn);


        horizontalLayout_18->addLayout(verticalLayout_2);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_7);


        gridLayout_2->addLayout(horizontalLayout_18, 0, 0, 1, 1);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(page_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 9pt \"\346\245\267\344\275\223\";\n"
""));
        label->setPixmap(QPixmap(QString::fromUtf8(":/pic/name.png")));
        label->setScaledContents(true);

        horizontalLayout->addWidget(label);

        label_19 = new QLabel(page_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout->addWidget(label_19);

        nameEdit = new QLineEdit(page_2);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));

        horizontalLayout->addWidget(nameEdit);


        horizontalLayout_19->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(page_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 9pt \"\346\245\267\344\275\223\";\n"
""));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/pic/sex.png")));
        label_3->setScaledContents(true);

        horizontalLayout_2->addWidget(label_3);

        label_20 = new QLabel(page_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        horizontalLayout_2->addWidget(label_20);

        sexEdit = new QLineEdit(page_2);
        sexEdit->setObjectName(QString::fromUtf8("sexEdit"));

        horizontalLayout_2->addWidget(sexEdit);


        horizontalLayout_19->addLayout(horizontalLayout_2);


        gridLayout_2->addLayout(horizontalLayout_19, 1, 0, 1, 1);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_8 = new QLabel(page_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("font: 9pt \"\346\245\267\344\275\223\";\n"
""));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/pic/email.png")));

        horizontalLayout_5->addWidget(label_8);

        label_21 = new QLabel(page_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        horizontalLayout_5->addWidget(label_21);

        emailEdit = new QLineEdit(page_2);
        emailEdit->setObjectName(QString::fromUtf8("emailEdit"));

        horizontalLayout_5->addWidget(emailEdit);


        horizontalLayout_20->addLayout(horizontalLayout_5);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_13 = new QLabel(page_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setStyleSheet(QString::fromUtf8("font: 9pt \"\346\245\267\344\275\223\";\n"
""));
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/pic/phone_big.png")));

        horizontalLayout_8->addWidget(label_13);

        label_22 = new QLabel(page_2);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        horizontalLayout_8->addWidget(label_22);

        phoneEdit = new QLineEdit(page_2);
        phoneEdit->setObjectName(QString::fromUtf8("phoneEdit"));

        horizontalLayout_8->addWidget(phoneEdit);


        horizontalLayout_20->addLayout(horizontalLayout_8);


        gridLayout_2->addLayout(horizontalLayout_20, 2, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_12 = new QLabel(page_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setStyleSheet(QString::fromUtf8("font: 9pt \"\346\245\267\344\275\223\";\n"
""));
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/pic/id.png")));

        horizontalLayout_6->addWidget(label_12);

        label_23 = new QLabel(page_2);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        horizontalLayout_6->addWidget(label_23);

        idEdit = new QLineEdit(page_2);
        idEdit->setObjectName(QString::fromUtf8("idEdit"));

        horizontalLayout_6->addWidget(idEdit);


        gridLayout_2->addLayout(horizontalLayout_6, 3, 0, 1, 1);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_4 = new QLabel(page_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font: 9pt \"\346\245\267\344\275\223\";\n"
""));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/pic/area.png")));

        horizontalLayout_7->addWidget(label_4);

        label_24 = new QLabel(page_2);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        horizontalLayout_7->addWidget(label_24);

        areaEdit = new QLineEdit(page_2);
        areaEdit->setObjectName(QString::fromUtf8("areaEdit"));

        horizontalLayout_7->addWidget(areaEdit);


        horizontalLayout_21->addLayout(horizontalLayout_7);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_7 = new QLabel(page_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("font: 9pt \"\346\245\267\344\275\223\";\n"
""));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/pic/birth.png")));

        horizontalLayout_4->addWidget(label_7);

        label_25 = new QLabel(page_2);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        horizontalLayout_4->addWidget(label_25);

        brithEdit = new QLineEdit(page_2);
        brithEdit->setObjectName(QString::fromUtf8("brithEdit"));

        horizontalLayout_4->addWidget(brithEdit);


        horizontalLayout_21->addLayout(horizontalLayout_4);


        gridLayout_2->addLayout(horizontalLayout_21, 4, 0, 1, 1);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 9pt \"\346\245\267\344\275\223\";\n"
""));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/pic/num2.png")));

        horizontalLayout_10->addWidget(label_2);

        label_26 = new QLabel(page_2);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        horizontalLayout_10->addWidget(label_26);

        numEdit = new QLineEdit(page_2);
        numEdit->setObjectName(QString::fromUtf8("numEdit"));

        horizontalLayout_10->addWidget(numEdit);


        horizontalLayout_22->addLayout(horizontalLayout_10);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_6 = new QLabel(page_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("font: 9pt \"\346\245\267\344\275\223\";\n"
""));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/pic/class.png")));

        horizontalLayout_12->addWidget(label_6);

        label_27 = new QLabel(page_2);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        horizontalLayout_12->addWidget(label_27);

        classEdit = new QLineEdit(page_2);
        classEdit->setObjectName(QString::fromUtf8("classEdit"));

        horizontalLayout_12->addWidget(classEdit);


        horizontalLayout_22->addLayout(horizontalLayout_12);


        gridLayout_2->addLayout(horizontalLayout_22, 5, 0, 1, 1);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        backBtn = new QPushButton(page_2);
        backBtn->setObjectName(QString::fromUtf8("backBtn"));
        backBtn->setMaximumSize(QSize(100, 100));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/pic/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        backBtn->setIcon(icon2);

        horizontalLayout_23->addWidget(backBtn);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacer_8);

        saveBtn = new QPushButton(page_2);
        saveBtn->setObjectName(QString::fromUtf8("saveBtn"));
        saveBtn->setMaximumSize(QSize(93, 28));
        saveBtn->setSizeIncrement(QSize(93, 28));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/pic/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveBtn->setIcon(icon3);

        horizontalLayout_23->addWidget(saveBtn);


        gridLayout_2->addLayout(horizontalLayout_23, 6, 0, 1, 1);

        stackedWidget->addWidget(page_2);

        gridLayout_3->addWidget(stackedWidget, 2, 0, 1, 1);


        retranslateUi(DpersonalInfo);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(DpersonalInfo);
    } // setupUi

    void retranslateUi(QWidget *DpersonalInfo)
    {
        DpersonalInfo->setWindowTitle(QCoreApplication::translate("DpersonalInfo", "Form", nullptr));
        label_11->setText(QString());
        ipEdit->setText(QString());
        pushButton->setText(QCoreApplication::translate("DpersonalInfo", "\347\274\226\350\276\221\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        txLabel_2->setText(QCoreApplication::translate("DpersonalInfo", "tx", nullptr));
        label_15->setText(QCoreApplication::translate("DpersonalInfo", "\345\255\246\347\224\237\345\247\223\345\220\215", nullptr));
        label_9->setText(QString());
        label_16->setText(QCoreApplication::translate("DpersonalInfo", "\345\255\246\345\217\267", nullptr));
        label_10->setText(QString());
        label_17->setText(QCoreApplication::translate("DpersonalInfo", "\351\202\256\344\273\266", nullptr));
        label_14->setText(QString());
        label_18->setText(QCoreApplication::translate("DpersonalInfo", "\347\224\265\350\257\235", nullptr));
        txLabel_3->setText(QCoreApplication::translate("DpersonalInfo", "tx", nullptr));
        choosetxBtn->setText(QCoreApplication::translate("DpersonalInfo", "\350\267\237\346\215\242\345\244\264\345\203\217", nullptr));
        label->setText(QString());
        label_19->setText(QCoreApplication::translate("DpersonalInfo", "\345\247\223\345\220\215", nullptr));
        label_3->setText(QString());
        label_20->setText(QCoreApplication::translate("DpersonalInfo", "\346\200\247\345\210\253", nullptr));
        label_8->setText(QString());
        label_21->setText(QCoreApplication::translate("DpersonalInfo", "\351\202\256\344\273\266", nullptr));
        label_13->setText(QString());
        label_22->setText(QCoreApplication::translate("DpersonalInfo", "\347\224\265\350\257\235", nullptr));
        label_12->setText(QString());
        label_23->setText(QCoreApplication::translate("DpersonalInfo", "\350\272\253\344\273\275\350\257\201", nullptr));
        idEdit->setText(QString());
        label_4->setText(QString());
        label_24->setText(QCoreApplication::translate("DpersonalInfo", "\345\234\260\345\235\200", nullptr));
        label_7->setText(QString());
        label_25->setText(QCoreApplication::translate("DpersonalInfo", "\347\224\237\346\227\245", nullptr));
        brithEdit->setText(QString());
        label_2->setText(QString());
        label_26->setText(QCoreApplication::translate("DpersonalInfo", "\345\255\246\345\217\267", nullptr));
        label_6->setText(QString());
        label_27->setText(QCoreApplication::translate("DpersonalInfo", "\347\217\255\347\272\247", nullptr));
        backBtn->setText(QCoreApplication::translate("DpersonalInfo", "\350\277\224\345\233\236", nullptr));
        saveBtn->setText(QCoreApplication::translate("DpersonalInfo", "\344\277\235\345\255\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DpersonalInfo: public Ui_DpersonalInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DPERSONALINFO_H
