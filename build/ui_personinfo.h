/********************************************************************************
** Form generated from reading UI file 'personinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONINFO_H
#define UI_PERSONINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PersonInfo
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *line_Name;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_loginIn;
    QPushButton *btn_signUp;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *PersonInfo)
    {
        if (PersonInfo->objectName().isEmpty())
            PersonInfo->setObjectName(QString::fromUtf8("PersonInfo"));
        PersonInfo->resize(400, 300);
        gridLayout = new QGridLayout(PersonInfo);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 98, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(90, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(PersonInfo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label);

        line_Name = new QLineEdit(PersonInfo);
        line_Name->setObjectName(QString::fromUtf8("line_Name"));

        horizontalLayout_2->addWidget(line_Name);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(PersonInfo);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        lineEdit_2 = new QLineEdit(PersonInfo);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_3->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btn_loginIn = new QPushButton(PersonInfo);
        btn_loginIn->setObjectName(QString::fromUtf8("btn_loginIn"));

        horizontalLayout->addWidget(btn_loginIn);

        btn_signUp = new QPushButton(PersonInfo);
        btn_signUp->setObjectName(QString::fromUtf8("btn_signUp"));

        horizontalLayout->addWidget(btn_signUp);


        gridLayout->addLayout(horizontalLayout, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 98, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 1, 1, 1);


        retranslateUi(PersonInfo);

        QMetaObject::connectSlotsByName(PersonInfo);
    } // setupUi

    void retranslateUi(QDialog *PersonInfo)
    {
        PersonInfo->setWindowTitle(QCoreApplication::translate("PersonInfo", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("PersonInfo", "\345\247\223\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("PersonInfo", "Textl", nullptr));
        btn_loginIn->setText(QCoreApplication::translate("PersonInfo", "\347\231\273\351\231\206", nullptr));
        btn_signUp->setText(QCoreApplication::translate("PersonInfo", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PersonInfo: public Ui_PersonInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONINFO_H
