/********************************************************************************
** Form generated from reading UI file 'wordslearning.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORDSLEARNING_H
#define UI_WORDSLEARNING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WordsLearning
{
public:
    QGridLayout *gridLayout_5;
    QFrame *frame_2;
    QGridLayout *gridLayout_3;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QLabel *selectLabel;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout;
    QPushButton *CET4WordsBtn;
    QPushButton *CET6WordsBtn;
    QPushButton *rememberWordsBtn;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *toLearnBtn;
    QSpacerItem *horizontalSpacer_2;
    QWidget *page_2;
    QGridLayout *gridLayout_4;
    QSplitter *splitter;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QTableView *tableView;
    QWidget *widget;
    QPushButton *learnWordBtn;
    QLineEdit *searchLineEdit;
    QPushButton *searchWordBtn;
    QPushButton *returnWordsBtn;
    QLabel *learnedWoldLabel;
    QLabel *wordIMGLabel;

    void setupUi(QWidget *WordsLearning)
    {
        if (WordsLearning->objectName().isEmpty())
            WordsLearning->setObjectName(QString::fromUtf8("WordsLearning"));
        WordsLearning->resize(800, 500);
        WordsLearning->setMinimumSize(QSize(800, 500));
        gridLayout_5 = new QGridLayout(WordsLearning);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        frame_2 = new QFrame(WordsLearning);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setStyleSheet(QString::fromUtf8(""));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        stackedWidget = new QStackedWidget(frame_2);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout = new QGridLayout(page);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_4 = new QSpacerItem(250, 37, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        selectLabel = new QLabel(page);
        selectLabel->setObjectName(QString::fromUtf8("selectLabel"));
        selectLabel->setMinimumSize(QSize(0, 40));
        selectLabel->setMaximumSize(QSize(16777215, 42));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light")});
        font.setPointSize(9);
        font.setBold(false);
        font.setItalic(false);
        selectLabel->setFont(font);
        selectLabel->setStyleSheet(QString::fromUtf8("border-image: url();\n"
"font: 25 9pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';\n"
"color: rgb(31,31,31);\n"
"padding-left:20px;\n"
"background-color: rgb(255, 255, 255);\n"
"border:2px solid rgb(20,196,188);border-radius:15px;"));
        selectLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(selectLabel);

        horizontalSpacer_5 = new QSpacerItem(249, 37, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        CET4WordsBtn = new QPushButton(page);
        CET4WordsBtn->setObjectName(QString::fromUtf8("CET4WordsBtn"));
        CET4WordsBtn->setMinimumSize(QSize(220, 220));
        CET4WordsBtn->setStyleSheet(QString::fromUtf8("QPushButton {  \n"
"    background-color: transparent;  \n"
"    border: none;  \n"
"    border-radius: 10px; /* \350\256\276\347\275\256\345\234\206\350\247\222\345\215\212\345\276\204 */  \n"
"}  \n"
"  \n"
"QPushButton:hover {  \n"
"    background-color: #ADD8E6; /* \346\265\205\350\223\235\350\211\262 */  \n"
"    border-radius: 10px; /* \344\277\235\346\214\201\345\234\206\350\247\222\345\215\212\345\276\204\357\274\214\347\241\256\344\277\235\346\202\254\345\201\234\346\227\266\345\275\242\347\212\266\344\270\215\345\217\230 */  \n"
"}"));
        CET4WordsBtn->setAutoDefault(false);

        horizontalLayout->addWidget(CET4WordsBtn);

        CET6WordsBtn = new QPushButton(page);
        CET6WordsBtn->setObjectName(QString::fromUtf8("CET6WordsBtn"));
        CET6WordsBtn->setMinimumSize(QSize(220, 220));
        CET6WordsBtn->setStyleSheet(QString::fromUtf8("QPushButton {  \n"
"    background-color: transparent;  \n"
"    border: none;  \n"
"    border-radius: 10px; /* \350\256\276\347\275\256\345\234\206\350\247\222\345\215\212\345\276\204 */  \n"
"}  \n"
"  \n"
"QPushButton:hover {  \n"
"    background-color: #ADD8E6; /* \346\265\205\350\223\235\350\211\262 */  \n"
"    border-radius: 10px; /* \344\277\235\346\214\201\345\234\206\350\247\222\345\215\212\345\276\204\357\274\214\347\241\256\344\277\235\346\202\254\345\201\234\346\227\266\345\275\242\347\212\266\344\270\215\345\217\230 */  \n"
"}"));
        CET6WordsBtn->setAutoDefault(false);
        CET6WordsBtn->setFlat(false);

        horizontalLayout->addWidget(CET6WordsBtn);

        rememberWordsBtn = new QPushButton(page);
        rememberWordsBtn->setObjectName(QString::fromUtf8("rememberWordsBtn"));
        rememberWordsBtn->setMinimumSize(QSize(220, 220));
        rememberWordsBtn->setStyleSheet(QString::fromUtf8("QPushButton {  \n"
"    background-color: transparent;  \n"
"    border: none;  \n"
"    border-radius: 10px; /* \350\256\276\347\275\256\345\234\206\350\247\222\345\215\212\345\276\204 */  \n"
"}  \n"
"  \n"
"QPushButton:hover {  \n"
"    background-color: #ADD8E6; /* \346\265\205\350\223\235\350\211\262 */  \n"
"    border-radius: 10px; /* \344\277\235\346\214\201\345\234\206\350\247\222\345\215\212\345\276\204\357\274\214\347\241\256\344\277\235\346\202\254\345\201\234\346\227\266\345\275\242\347\212\266\344\270\215\345\217\230 */  \n"
"}"));
        rememberWordsBtn->setFlat(false);

        horizontalLayout->addWidget(rememberWordsBtn);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        toLearnBtn = new QPushButton(page);
        toLearnBtn->setObjectName(QString::fromUtf8("toLearnBtn"));
        toLearnBtn->setMinimumSize(QSize(161, 40));
        QFont font1;
        font1.setPointSize(10);
        toLearnBtn->setFont(font1);
        toLearnBtn->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(toLearnBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_4 = new QGridLayout(page_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        splitter = new QSplitter(page_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tableView = new QTableView(groupBox);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setEnabled(true);
        tableView->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        tableView->setStyleSheet(QString::fromUtf8(""));
        tableView->setSortingEnabled(false);

        gridLayout_2->addWidget(tableView, 0, 0, 1, 1);

        splitter->addWidget(groupBox);
        widget = new QWidget(splitter);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMaximumSize(QSize(150, 16777215));
        learnWordBtn = new QPushButton(widget);
        learnWordBtn->setObjectName(QString::fromUtf8("learnWordBtn"));
        learnWordBtn->setGeometry(QRect(10, 210, 131, 31));
        learnWordBtn->setCursor(QCursor(Qt::OpenHandCursor));
        learnWordBtn->setStyleSheet(QString::fromUtf8("border-image: url();\n"
"font: 25 11pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';\n"
"color: rgb(31,31,31);\n"
"padding-left:20px;\n"
"background-color: rgb(255, 255, 255);\n"
"border:2px solid rgb(0,0,0);border-radius:15px;"));
        searchLineEdit = new QLineEdit(widget);
        searchLineEdit->setObjectName(QString::fromUtf8("searchLineEdit"));
        searchLineEdit->setEnabled(true);
        searchLineEdit->setGeometry(QRect(10, 270, 131, 30));
        searchLineEdit->setStyleSheet(QString::fromUtf8("border-image: url();\n"
"font: 25 11pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';\n"
"color: rgb(31,31,31);\n"
"padding-left:20px;\n"
"background-color: rgb(255, 255, 255);\n"
"border:2px solid rgb(20,196,188);border-radius:15px;"));
        searchLineEdit->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        searchWordBtn = new QPushButton(widget);
        searchWordBtn->setObjectName(QString::fromUtf8("searchWordBtn"));
        searchWordBtn->setGeometry(QRect(10, 310, 131, 31));
        searchWordBtn->setStyleSheet(QString::fromUtf8("border-image: url();\n"
"font: 25 11pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';\n"
"color: rgb(31,31,31);\n"
"padding-left:20px;\n"
"background-color: rgb(255, 255, 255);\n"
"border:2px solid rgb(0,0,0);border-radius:15px;"));
        returnWordsBtn = new QPushButton(widget);
        returnWordsBtn->setObjectName(QString::fromUtf8("returnWordsBtn"));
        returnWordsBtn->setGeometry(QRect(10, 380, 131, 31));
        returnWordsBtn->setCursor(QCursor(Qt::ClosedHandCursor));
        returnWordsBtn->setStyleSheet(QString::fromUtf8("border-image: url();\n"
"font: 25 11pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';\n"
"color: rgb(31,31,31);\n"
"padding-left:20px;\n"
"background-color: rgb(255, 255, 255);\n"
"border:2px solid rgb(0,0,0);border-radius:15px;"));
        learnedWoldLabel = new QLabel(widget);
        learnedWoldLabel->setObjectName(QString::fromUtf8("learnedWoldLabel"));
        learnedWoldLabel->setGeometry(QRect(10, 170, 131, 31));
        learnedWoldLabel->setFont(font);
        learnedWoldLabel->setStyleSheet(QString::fromUtf8("border-image: url();\n"
"font: 25 9pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';\n"
"color: rgb(31,31,31);\n"
"padding-left:20px;\n"
"background-color: rgb(255, 255, 255);\n"
"border:2px solid rgb(20,196,188);border-radius:15px;"));
        learnedWoldLabel->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        wordIMGLabel = new QLabel(widget);
        wordIMGLabel->setObjectName(QString::fromUtf8("wordIMGLabel"));
        wordIMGLabel->setGeometry(QRect(20, 30, 111, 111));
        splitter->addWidget(widget);

        gridLayout_4->addWidget(splitter, 0, 0, 1, 1);

        stackedWidget->addWidget(page_2);

        gridLayout_3->addWidget(stackedWidget, 0, 0, 1, 1);


        gridLayout_5->addWidget(frame_2, 0, 0, 1, 1);


        retranslateUi(WordsLearning);

        stackedWidget->setCurrentIndex(1);
        CET4WordsBtn->setDefault(false);
        CET6WordsBtn->setDefault(false);


        QMetaObject::connectSlotsByName(WordsLearning);
    } // setupUi

    void retranslateUi(QWidget *WordsLearning)
    {
        WordsLearning->setWindowTitle(QCoreApplication::translate("WordsLearning", "\345\215\225\350\257\215\346\234\254", nullptr));
        selectLabel->setText(QCoreApplication::translate("WordsLearning", "\350\257\267\351\200\211\346\213\251\344\275\240\350\246\201\345\255\246\344\271\240\347\232\204\345\215\225\350\257\215\346\234\254    ", nullptr));
        CET4WordsBtn->setText(QCoreApplication::translate("WordsLearning", "\345\233\233\347\272\247", nullptr));
        CET6WordsBtn->setText(QCoreApplication::translate("WordsLearning", "\345\205\255\347\272\247", nullptr));
        rememberWordsBtn->setText(QCoreApplication::translate("WordsLearning", "\347\206\237\350\257\215", nullptr));
        toLearnBtn->setText(QCoreApplication::translate("WordsLearning", "\347\202\271\345\207\273\345\274\200\345\247\213\345\255\246\344\271\240\345\215\225\350\257\215", nullptr));
        groupBox->setTitle(QCoreApplication::translate("WordsLearning", "\346\216\250\350\215\220\345\255\246\344\271\240\345\215\225\350\257\215", nullptr));
        learnWordBtn->setText(QCoreApplication::translate("WordsLearning", "\345\255\246\344\271\240\345\215\225\350\257\215", nullptr));
        searchLineEdit->setText(QString());
        searchLineEdit->setPlaceholderText(QCoreApplication::translate("WordsLearning", "\350\257\267\350\276\223\345\205\245\345\215\225\350\257\215\357\274\232", nullptr));
        searchWordBtn->setText(QCoreApplication::translate("WordsLearning", "\346\220\234\347\264\242\345\215\225\350\257\215", nullptr));
#if QT_CONFIG(tooltip)
        returnWordsBtn->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        returnWordsBtn->setText(QCoreApplication::translate("WordsLearning", "\350\277\224\345\233\236\345\215\225\350\257\215\346\234\254", nullptr));
        learnedWoldLabel->setText(QCoreApplication::translate("WordsLearning", "\345\267\262\345\255\246\344\271\240\345\215\225\350\257\215\357\274\232", nullptr));
        wordIMGLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WordsLearning: public Ui_WordsLearning {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORDSLEARNING_H
