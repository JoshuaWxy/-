/********************************************************************************
** Form generated from reading UI file 'paint.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAINT_H
#define UI_PAINT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_paint
{
public:
    QGridLayout *gridLayout;
    QPlainTextEdit *note_TextEdit;

    void setupUi(QWidget *paint)
    {
        if (paint->objectName().isEmpty())
            paint->setObjectName(QString::fromUtf8("paint"));
        paint->resize(786, 593);
        gridLayout = new QGridLayout(paint);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        note_TextEdit = new QPlainTextEdit(paint);
        note_TextEdit->setObjectName(QString::fromUtf8("note_TextEdit"));

        gridLayout->addWidget(note_TextEdit, 0, 0, 1, 1);


        retranslateUi(paint);

        QMetaObject::connectSlotsByName(paint);
    } // setupUi

    void retranslateUi(QWidget *paint)
    {
        paint->setWindowTitle(QCoreApplication::translate("paint", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class paint: public Ui_paint {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAINT_H
