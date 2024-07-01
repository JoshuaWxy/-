#ifndef WORDSLEARNING_H
#define WORDSLEARNING_H

#include <QWidget>
#include <QSqlDatabase>
#include <QtSql>
#include <QMessageBox>
#include <QTableView>
#include "wordcards.h"

namespace Ui {
class WordsLearning;
}

class WordsLearning : public QWidget
{
    Q_OBJECT

public:
    explicit WordsLearning(QWidget *parent = nullptr);
    ~WordsLearning();

    void previousWord();

    void nextWord();

    void selectRow();

    void rememberWord();

    void forgotWord();

    void updateTimesAndIntegrate(int p_times, int p_integrates);

    void updateOrInsertWord();

    void createTable(int score);

    void searchWord();

signals:
    void do_learnWordBtn_clicked();

    void toLearnWordPage();

    void updateCountdown();

private slots:
    void on_learnWordBtn_clicked();

    void on_searchWordBtn_clicked();

    void on_toLearnBtn_clicked();

    void on_returnWordsBtn_clicked();

private:
    void openWordsSQL(const QString &sqlQuery);

    void openSQLCET4();

    void openSQLCET6();

    void openSQLFamiliar();

    void searchLearnWordNum(const QString &sqlQuery);

    void onCurrentRowChanged(const QModelIndex &current, const QModelIndex &previous);

    QString getCurrentWord();

    void handleButtonClick();

    void onButtonClicked(QPushButton *button);

    void setDefaultButtonStyle(QPushButton *button);

private:
    Ui::WordsLearning *ui;

    QSqlDatabase db;

    QSqlQueryModel *qryModel;

    QItemSelectionModel *selModel;

    QPushButton* selectedButton;

    QString currentTableName;

    wordCards card;

    int currentRow;

    int rowCount;

    bool isSelected; // 跟踪按钮是否被选中

    void updateStyle();
};

#endif // WORDSLEARNING_H
