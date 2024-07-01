/********************************************************************************
** Form generated from reading UI file 'paydialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAYDIALOG_H
#define UI_PAYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_payDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_tittle;
    QHBoxLayout *horizontalLayout;
    QLabel *label_zhifubao;
    QLabel *label_wechat;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_accept;
    QPushButton *pushButton_reject;

    void setupUi(QDialog *payDialog)
    {
        if (payDialog->objectName().isEmpty())
            payDialog->setObjectName(QString::fromUtf8("payDialog"));
        payDialog->resize(617, 530);
        verticalLayout = new QVBoxLayout(payDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_tittle = new QLabel(payDialog);
        label_tittle->setObjectName(QString::fromUtf8("label_tittle"));
        QFont font;
        font.setPointSize(20);
        label_tittle->setFont(font);
        label_tittle->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_tittle);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_zhifubao = new QLabel(payDialog);
        label_zhifubao->setObjectName(QString::fromUtf8("label_zhifubao"));

        horizontalLayout->addWidget(label_zhifubao);

        label_wechat = new QLabel(payDialog);
        label_wechat->setObjectName(QString::fromUtf8("label_wechat"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Microsoft JhengHei UI Light")});
        font1.setPointSize(20);
        font1.setBold(true);
        label_wechat->setFont(font1);
        label_wechat->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_wechat);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_accept = new QPushButton(payDialog);
        pushButton_accept->setObjectName(QString::fromUtf8("pushButton_accept"));

        horizontalLayout_2->addWidget(pushButton_accept);

        pushButton_reject = new QPushButton(payDialog);
        pushButton_reject->setObjectName(QString::fromUtf8("pushButton_reject"));

        horizontalLayout_2->addWidget(pushButton_reject);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalLayout->setStretch(0, 2);
        verticalLayout->setStretch(1, 6);
        verticalLayout->setStretch(2, 1);

        retranslateUi(payDialog);
        QObject::connect(pushButton_accept, &QPushButton::clicked, payDialog, qOverload<>(&QDialog::accept));
        QObject::connect(pushButton_reject, &QPushButton::clicked, payDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(payDialog);
    } // setupUi

    void retranslateUi(QDialog *payDialog)
    {
        payDialog->setWindowTitle(QCoreApplication::translate("payDialog", "Dialog", nullptr));
        label_tittle->setText(QCoreApplication::translate("payDialog", "\344\275\234\350\200\205\344\270\215\346\230\257\350\217\251\350\220\250\357\274\214\345\205\205\345\200\274\344\275\277\344\275\240\345\274\272\345\244\247", nullptr));
        label_zhifubao->setText(QString());
        label_wechat->setText(QString());
        pushButton_accept->setText(QCoreApplication::translate("payDialog", "\350\265\236\350\265\217", nullptr));
        pushButton_reject->setText(QCoreApplication::translate("payDialog", "\346\273\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class payDialog: public Ui_payDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAYDIALOG_H
