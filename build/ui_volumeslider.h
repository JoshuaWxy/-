/********************************************************************************
** Form generated from reading UI file 'volumeslider.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOLUMESLIDER_H
#define UI_VOLUMESLIDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_volumeSlider
{
public:
    QHBoxLayout *horizontalLayout;
    QSlider *verticalSlider;

    void setupUi(QDialog *volumeSlider)
    {
        if (volumeSlider->objectName().isEmpty())
            volumeSlider->setObjectName(QString::fromUtf8("volumeSlider"));
        volumeSlider->resize(34, 116);
        horizontalLayout = new QHBoxLayout(volumeSlider);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalSlider = new QSlider(volumeSlider);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(verticalSlider);


        retranslateUi(volumeSlider);

        QMetaObject::connectSlotsByName(volumeSlider);
    } // setupUi

    void retranslateUi(QDialog *volumeSlider)
    {
        volumeSlider->setWindowTitle(QCoreApplication::translate("volumeSlider", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class volumeSlider: public Ui_volumeSlider {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOLUMESLIDER_H
