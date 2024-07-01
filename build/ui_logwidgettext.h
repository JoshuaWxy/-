/********************************************************************************
** Form generated from reading UI file 'logwidgettext.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGWIDGETTEXT_H
#define UI_LOGWIDGETTEXT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogWidgetText
{
public:
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout;
    QCheckBox *check_debug;
    QCheckBox *check_Info;
    QCheckBox *check_warning;
    QCheckBox *check_critical;
    QPushButton *but_clear;

    void setupUi(QWidget *LogWidgetText)
    {
        if (LogWidgetText->objectName().isEmpty())
            LogWidgetText->setObjectName(QString::fromUtf8("LogWidgetText"));
        LogWidgetText->resize(646, 551);
        gridLayout = new QGridLayout(LogWidgetText);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(LogWidgetText);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        check_debug = new QCheckBox(LogWidgetText);
        check_debug->setObjectName(QString::fromUtf8("check_debug"));
        check_debug->setChecked(true);

        horizontalLayout->addWidget(check_debug);

        check_Info = new QCheckBox(LogWidgetText);
        check_Info->setObjectName(QString::fromUtf8("check_Info"));
        check_Info->setChecked(true);

        horizontalLayout->addWidget(check_Info);

        check_warning = new QCheckBox(LogWidgetText);
        check_warning->setObjectName(QString::fromUtf8("check_warning"));
        check_warning->setChecked(true);

        horizontalLayout->addWidget(check_warning);

        check_critical = new QCheckBox(LogWidgetText);
        check_critical->setObjectName(QString::fromUtf8("check_critical"));
        check_critical->setChecked(true);

        horizontalLayout->addWidget(check_critical);

        but_clear = new QPushButton(LogWidgetText);
        but_clear->setObjectName(QString::fromUtf8("but_clear"));

        horizontalLayout->addWidget(but_clear);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(LogWidgetText);

        QMetaObject::connectSlotsByName(LogWidgetText);
    } // setupUi

    void retranslateUi(QWidget *LogWidgetText)
    {
        LogWidgetText->setWindowTitle(QCoreApplication::translate("LogWidgetText", "Form", nullptr));
        check_debug->setText(QCoreApplication::translate("LogWidgetText", "Debug", nullptr));
        check_Info->setText(QCoreApplication::translate("LogWidgetText", "Info", nullptr));
        check_warning->setText(QCoreApplication::translate("LogWidgetText", "Warning", nullptr));
        check_critical->setText(QCoreApplication::translate("LogWidgetText", "Critical", nullptr));
        but_clear->setText(QCoreApplication::translate("LogWidgetText", "\346\270\205\347\251\272\346\227\245\345\277\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogWidgetText: public Ui_LogWidgetText {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGWIDGETTEXT_H
