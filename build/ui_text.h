/********************************************************************************
** Form generated from reading UI file 'text.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXT_H
#define UI_TEXT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_text
{
public:
    QGridLayout *gridLayout;
    QTextEdit *note_TextEdit;

    void setupUi(QWidget *text)
    {
        if (text->objectName().isEmpty())
            text->setObjectName(QString::fromUtf8("text"));
        text->resize(786, 593);
        gridLayout = new QGridLayout(text);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        note_TextEdit = new QTextEdit(text);
        note_TextEdit->setObjectName(QString::fromUtf8("note_TextEdit"));

        gridLayout->addWidget(note_TextEdit, 0, 0, 1, 1);


        retranslateUi(text);

        QMetaObject::connectSlotsByName(text);
    } // setupUi

    void retranslateUi(QWidget *text)
    {
        text->setWindowTitle(QCoreApplication::translate("text", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class text: public Ui_text {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXT_H
