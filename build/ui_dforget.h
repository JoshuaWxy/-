/********************************************************************************
** Form generated from reading UI file 'dforget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DFORGET_H
#define UI_DFORGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dforget
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *backloginBtn;
    QPushButton *SureBtn;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *sureEdit;
    QPushButton *verifiBtn;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *accountLabel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *newpasswdLabel;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *emailEdit;

    void setupUi(QWidget *Dforget)
    {
        if (Dforget->objectName().isEmpty())
            Dforget->setObjectName(QString::fromUtf8("Dforget"));
        Dforget->resize(357, 322);
        Dforget->setStyleSheet(QString::fromUtf8("QWidget#widget\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
""));
        gridLayout = new QGridLayout(Dforget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        backloginBtn = new QPushButton(Dforget);
        backloginBtn->setObjectName(QString::fromUtf8("backloginBtn"));
        backloginBtn->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/C:/Users/fdog/Desktop/lib/blackButton_2.jpg);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pic/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        backloginBtn->setIcon(icon);

        horizontalLayout_4->addWidget(backloginBtn);

        SureBtn = new QPushButton(Dforget);
        SureBtn->setObjectName(QString::fromUtf8("SureBtn"));
        SureBtn->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/C:/Users/fdog/Desktop/lib/blackButton_2.jpg);"));

        horizontalLayout_4->addWidget(SureBtn);


        gridLayout->addLayout(horizontalLayout_4, 4, 0, 1, 1);

        label_4 = new QLabel(Dforget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 5, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(Dforget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";"));

        horizontalLayout_3->addWidget(label_3);

        sureEdit = new QLineEdit(Dforget);
        sureEdit->setObjectName(QString::fromUtf8("sureEdit"));

        horizontalLayout_3->addWidget(sureEdit);

        verifiBtn = new QPushButton(Dforget);
        verifiBtn->setObjectName(QString::fromUtf8("verifiBtn"));
        verifiBtn->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/C:/Users/fdog/Desktop/lib/blackButton_2.jpg);"));

        horizontalLayout_3->addWidget(verifiBtn);


        gridLayout->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Dforget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/pic/name.png")));

        horizontalLayout->addWidget(label);

        accountLabel = new QLineEdit(Dforget);
        accountLabel->setObjectName(QString::fromUtf8("accountLabel"));

        horizontalLayout->addWidget(accountLabel);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(Dforget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/pic/mima.png")));

        horizontalLayout_2->addWidget(label_2);

        newpasswdLabel = new QLineEdit(Dforget);
        newpasswdLabel->setObjectName(QString::fromUtf8("newpasswdLabel"));

        horizontalLayout_2->addWidget(newpasswdLabel);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(Dforget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\226\271\346\255\243\351\273\221\344\275\223\347\256\200\344\275\223\";"));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/pic/email.png")));

        horizontalLayout_5->addWidget(label_5);

        emailEdit = new QLineEdit(Dforget);
        emailEdit->setObjectName(QString::fromUtf8("emailEdit"));

        horizontalLayout_5->addWidget(emailEdit);


        gridLayout->addLayout(horizontalLayout_5, 1, 0, 1, 1);


        retranslateUi(Dforget);

        QMetaObject::connectSlotsByName(Dforget);
    } // setupUi

    void retranslateUi(QWidget *Dforget)
    {
        Dforget->setWindowTitle(QCoreApplication::translate("Dforget", "Form", nullptr));
        backloginBtn->setText(QCoreApplication::translate("Dforget", "\350\277\224\345\233\236\347\231\273\345\275\225", nullptr));
        SureBtn->setText(QCoreApplication::translate("Dforget", "\347\241\256\350\256\244\344\277\256\346\224\271", nullptr));
        label_4->setText(QString());
        label_3->setText(QCoreApplication::translate("Dforget", "\351\252\214\350\257\201\347\240\201", nullptr));
        verifiBtn->setText(QCoreApplication::translate("Dforget", "\345\217\221\351\200\201\351\252\214\350\257\201\347\240\201", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dforget: public Ui_Dforget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DFORGET_H
