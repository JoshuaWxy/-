/********************************************************************************
** Form generated from reading UI file 'wordcards.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORDCARDS_H
#define UI_WORDCARDS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_wordCards
{
public:
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QPushButton *upBtn;
    QPushButton *forgotBtn;
    QPushButton *explainBtn;
    QPushButton *downBtn;
    QPushButton *rememberBtn;
    QPushButton *BackBtn;
    QCheckBox *wordVisibleCheckBox;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLineEdit *wordLineEditP1;
    QLabel *wordLabelP1;
    QLCDNumber *wordLcdNumber;
    QLineEdit *tipsLineEdit;
    QWidget *page_2;
    QLineEdit *wordLineEditP2;
    QTextEdit *translationTextEdit;
    QLabel *pronounciationLabel;
    QLabel *wordLabelP2;
    QLineEdit *pronounciationLineEdit;
    QLabel *translationLabel;
    QCheckBox *tickingCheckBox;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *wordCards)
    {
        if (wordCards->objectName().isEmpty())
            wordCards->setObjectName(QString::fromUtf8("wordCards"));
        wordCards->resize(550, 350);
        wordCards->setMinimumSize(QSize(550, 350));
        wordCards->setMaximumSize(QSize(550, 350));
        gridLayout = new QGridLayout(wordCards);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        splitter = new QSplitter(wordCards);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        upBtn = new QPushButton(splitter);
        upBtn->setObjectName(QString::fromUtf8("upBtn"));
        upBtn->setMinimumSize(QSize(0, 30));
        upBtn->setCursor(QCursor(Qt::PointingHandCursor));
        splitter->addWidget(upBtn);
        forgotBtn = new QPushButton(splitter);
        forgotBtn->setObjectName(QString::fromUtf8("forgotBtn"));
        forgotBtn->setMinimumSize(QSize(0, 30));
        forgotBtn->setCursor(QCursor(Qt::PointingHandCursor));
        splitter->addWidget(forgotBtn);
        explainBtn = new QPushButton(splitter);
        explainBtn->setObjectName(QString::fromUtf8("explainBtn"));
        explainBtn->setEnabled(true);
        explainBtn->setMinimumSize(QSize(0, 30));
        explainBtn->setCursor(QCursor(Qt::PointingHandCursor));
        explainBtn->setStyleSheet(QString::fromUtf8(""));
        splitter->addWidget(explainBtn);
        downBtn = new QPushButton(splitter);
        downBtn->setObjectName(QString::fromUtf8("downBtn"));
        downBtn->setEnabled(true);
        downBtn->setMinimumSize(QSize(0, 30));
        downBtn->setCursor(QCursor(Qt::PointingHandCursor));
        downBtn->setStyleSheet(QString::fromUtf8(""));
        splitter->addWidget(downBtn);
        rememberBtn = new QPushButton(splitter);
        rememberBtn->setObjectName(QString::fromUtf8("rememberBtn"));
        rememberBtn->setMinimumSize(QSize(0, 30));
        rememberBtn->setCursor(QCursor(Qt::PointingHandCursor));
        splitter->addWidget(rememberBtn);
        BackBtn = new QPushButton(splitter);
        BackBtn->setObjectName(QString::fromUtf8("BackBtn"));
        BackBtn->setMinimumSize(QSize(0, 30));
        BackBtn->setCursor(QCursor(Qt::PointingHandCursor));
        splitter->addWidget(BackBtn);

        gridLayout->addWidget(splitter, 2, 0, 1, 4);

        wordVisibleCheckBox = new QCheckBox(wordCards);
        wordVisibleCheckBox->setObjectName(QString::fromUtf8("wordVisibleCheckBox"));
        wordVisibleCheckBox->setChecked(true);

        gridLayout->addWidget(wordVisibleCheckBox, 0, 1, 1, 1);

        stackedWidget = new QStackedWidget(wordCards);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setLineWidth(1);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        wordLineEditP1 = new QLineEdit(page);
        wordLineEditP1->setObjectName(QString::fromUtf8("wordLineEditP1"));
        wordLineEditP1->setGeometry(QRect(170, 110, 271, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light")});
        font.setPointSize(9);
        font.setBold(false);
        font.setItalic(false);
        wordLineEditP1->setFont(font);
        wordLineEditP1->setStyleSheet(QString::fromUtf8("font: 25 9pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';\n"
"color: rgb(31,31,31);\n"
"padding-left:20px;\n"
"background-color: rgb(255, 255, 255);\n"
"border:2px solid rgb(20,196,188);\n"
"border-radius:15px;"));
        wordLabelP1 = new QLabel(page);
        wordLabelP1->setObjectName(QString::fromUtf8("wordLabelP1"));
        wordLabelP1->setGeometry(QRect(91, 110, 71, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light")});
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        wordLabelP1->setFont(font1);
        wordLabelP1->setStyleSheet(QString::fromUtf8("font: 25 10\n"
"pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';\n"
"color: rgb(20,196,188);\n"
"border: none;border-radius:15px;\n"
"background-color: rgb(255, 255, 255);"));
        wordLabelP1->setAlignment(Qt::AlignCenter);
        wordLcdNumber = new QLCDNumber(page);
        wordLcdNumber->setObjectName(QString::fromUtf8("wordLcdNumber"));
        wordLcdNumber->setGeometry(QRect(160, 160, 131, 81));
        wordLcdNumber->setStyleSheet(QString::fromUtf8("QLcdNumber { color: #ADD8E6; }"));
        wordLcdNumber->setFrameShape(QFrame::NoFrame);
        wordLcdNumber->setFrameShadow(QFrame::Plain);
        wordLcdNumber->setLineWidth(1);
        wordLcdNumber->setSmallDecimalPoint(false);
        wordLcdNumber->setDigitCount(5);
        wordLcdNumber->setMode(QLCDNumber::Dec);
        wordLcdNumber->setSegmentStyle(QLCDNumber::Filled);
        wordLcdNumber->setProperty("value", QVariant(15.000000000000000));
        wordLcdNumber->setProperty("intValue", QVariant(15));
        tipsLineEdit = new QLineEdit(page);
        tipsLineEdit->setObjectName(QString::fromUtf8("tipsLineEdit"));
        tipsLineEdit->setGeometry(QRect(40, 30, 451, 21));
        tipsLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit { border: 1px solid transparent;\n"
" background-color: transparent;}"));
        tipsLineEdit->setEchoMode(QLineEdit::Normal);
        tipsLineEdit->setAlignment(Qt::AlignCenter);
        tipsLineEdit->setDragEnabled(false);
        tipsLineEdit->setReadOnly(true);
        tipsLineEdit->setCursorMoveStyle(Qt::LogicalMoveStyle);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        wordLineEditP2 = new QLineEdit(page_2);
        wordLineEditP2->setObjectName(QString::fromUtf8("wordLineEditP2"));
        wordLineEditP2->setGeometry(QRect(130, 40, 251, 31));
        wordLineEditP2->setFont(font);
        wordLineEditP2->setStyleSheet(QString::fromUtf8("font: 25 9pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';\n"
"color: rgb(31,31,31);\n"
"padding-left:20px;\n"
"background-color: rgb(255, 255, 255);\n"
"border:2px solid rgb(20,196,188);\n"
"border-radius:15px;"));
        translationTextEdit = new QTextEdit(page_2);
        translationTextEdit->setObjectName(QString::fromUtf8("translationTextEdit"));
        translationTextEdit->setGeometry(QRect(129, 140, 341, 61));
        translationTextEdit->setFont(font);
        translationTextEdit->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        translationTextEdit->setStyleSheet(QString::fromUtf8("font: 25 9pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';\n"
"color: rgb(31,31,31);\n"
"padding-left:20px;\n"
"background-color: rgb(255, 255, 255);\n"
"border:2px solid rgb(20,196,188);\n"
"border-radius:15px;"));
        pronounciationLabel = new QLabel(page_2);
        pronounciationLabel->setObjectName(QString::fromUtf8("pronounciationLabel"));
        pronounciationLabel->setGeometry(QRect(61, 90, 61, 31));
        pronounciationLabel->setFont(font1);
        pronounciationLabel->setStyleSheet(QString::fromUtf8("font: 25 10\n"
"pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';\n"
"color: rgb(20,196,188);\n"
"border: none;border-radius:15px;\n"
"background-color: rgb(255, 255, 255);"));
        pronounciationLabel->setAlignment(Qt::AlignCenter);
        wordLabelP2 = new QLabel(page_2);
        wordLabelP2->setObjectName(QString::fromUtf8("wordLabelP2"));
        wordLabelP2->setGeometry(QRect(61, 40, 61, 31));
        wordLabelP2->setFont(font1);
        wordLabelP2->setStyleSheet(QString::fromUtf8("font: 25 10\n"
"pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';\n"
"color: rgb(20,196,188);\n"
"border: none;border-radius:15px;\n"
"background-color: rgb(255, 255, 255);"));
        wordLabelP2->setAlignment(Qt::AlignCenter);
        pronounciationLineEdit = new QLineEdit(page_2);
        pronounciationLineEdit->setObjectName(QString::fromUtf8("pronounciationLineEdit"));
        pronounciationLineEdit->setGeometry(QRect(130, 90, 291, 31));
        pronounciationLineEdit->setFont(font);
        pronounciationLineEdit->setStyleSheet(QString::fromUtf8("font: 25 9pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';\n"
"color: rgb(31,31,31);\n"
"padding-left:20px;\n"
"background-color: rgb(255, 255, 255);\n"
"border:2px solid rgb(20,196,188);border-radius:15px;"));
        translationLabel = new QLabel(page_2);
        translationLabel->setObjectName(QString::fromUtf8("translationLabel"));
        translationLabel->setGeometry(QRect(60, 150, 61, 31));
        translationLabel->setFont(font1);
        translationLabel->setStyleSheet(QString::fromUtf8("font: 25 10\n"
"pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';\n"
"color: rgb(20,196,188);\n"
"border: none;border-radius:15px;\n"
"background-color: rgb(255, 255, 255);"));
        translationLabel->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(page_2);

        gridLayout->addWidget(stackedWidget, 1, 0, 1, 4);

        tickingCheckBox = new QCheckBox(wordCards);
        tickingCheckBox->setObjectName(QString::fromUtf8("tickingCheckBox"));
        tickingCheckBox->setChecked(false);

        gridLayout->addWidget(tickingCheckBox, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(208, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(208, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 3, 1, 1);


        retranslateUi(wordCards);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(wordCards);
    } // setupUi

    void retranslateUi(QWidget *wordCards)
    {
        wordCards->setWindowTitle(QCoreApplication::translate("wordCards", "Form", nullptr));
        upBtn->setText(QCoreApplication::translate("wordCards", "\344\270\212\344\270\200\344\270\252", nullptr));
        forgotBtn->setText(QCoreApplication::translate("wordCards", "\345\277\230\350\256\260\344\272\206", nullptr));
        explainBtn->setText(QCoreApplication::translate("wordCards", "\346\237\245\347\234\213\347\277\273\350\257\221/\345\215\225\350\257\215", nullptr));
        downBtn->setText(QCoreApplication::translate("wordCards", "\344\270\213\344\270\200\344\270\252", nullptr));
        rememberBtn->setText(QCoreApplication::translate("wordCards", "\345\267\262\350\256\260\344\275\217", nullptr));
        BackBtn->setText(QCoreApplication::translate("wordCards", "\350\277\224\345\233\236", nullptr));
        wordVisibleCheckBox->setText(QCoreApplication::translate("wordCards", "\347\277\273\350\257\221\347\225\214\351\235\242\346\230\257\345\220\246\346\230\276\347\244\272\345\215\225\350\257\215", nullptr));
        wordLineEditP1->setText(QString());
        wordLabelP1->setText(QCoreApplication::translate("wordCards", "\345\215\225\350\257\215:", nullptr));
        tipsLineEdit->setText(QCoreApplication::translate("wordCards", "\346\257\217\346\254\241\344\273\21615s\345\274\200\345\247\213\345\200\222\350\256\241\346\227\266\357\274\2145s\345\206\205\350\256\260\344\275\217\347\206\237\347\273\203\345\272\246+2,15s\345\206\205\350\256\260\344\275\217\347\206\237\347\273\203\345\272\246+1", nullptr));
        wordLineEditP2->setText(QString());
        pronounciationLabel->setText(QCoreApplication::translate("wordCards", "\345\217\221\351\237\263:", nullptr));
        wordLabelP2->setText(QCoreApplication::translate("wordCards", "\345\215\225\350\257\215:", nullptr));
        pronounciationLineEdit->setText(QString());
        translationLabel->setText(QCoreApplication::translate("wordCards", "\351\207\212\344\271\211:", nullptr));
        tickingCheckBox->setText(QCoreApplication::translate("wordCards", "\345\274\200\345\247\213\350\256\241\346\227\266\346\250\241\345\274\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class wordCards: public Ui_wordCards {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORDCARDS_H
