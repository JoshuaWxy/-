#ifndef WORDCARDS_H
#define WORDCARDS_H

#include <QTableView>
#include <QWidget>
#include <QtSql>

namespace Ui {
class wordCards;
}

class wordCards : public QWidget
{
    Q_OBJECT

public:
    explicit wordCards(QWidget *parent = nullptr);
    ~wordCards();

    // 设置数据的公共方法
    void setData(const QString &word, const QString &pronounciation, const QString &translation);

    void setSearchData(const QString &word, const QString &pronounciation, const QString &translation);

    void setDownBtn();

    void resetTickingCheckBox();

    void forgotToTranslation();

    void restoreForgotBtn();

    void toLearnWordPage();

    void startCountdown();

    void stopCountdown();

signals:
    void cardClosed();

    void do_upBtn_clicked();

    void do_downBtn_clicked();

    void do_forgotBtn_clicked();

    void do_rememberBtn_clicked();

    void integrateAdd1();

    void integrateAdd2();

private slots:
    void on_explainBtn_clicked();

    void on_wordVisibleCheckBox_clicked(bool checked);

    void on_upBtn_clicked();

    void on_downBtn_clicked();

    void on_forgotBtn_clicked();

    void on_rememberBtn_clicked();

    void on_tickingCheckBox_clicked(bool checked);

    void updateCountdown();

    void on_BackBtn_clicked();

private:
    void newRoundCountdown();

private:
    QSqlQueryModel *qryModel;

    QItemSelectionModel *selModel;

    QTimer *timer;

    int remainingTime;

    bool isCountdownRunning;

    bool isTickingMode;         //是否进入计时模式

    bool isRememberBtnClicked;  // 用于跟踪remember按钮是否在特定时间内被点击

    bool isOneRoundFinished;    // 用于跟踪一轮计时是否完成

private:
    Ui::wordCards *ui;

protected:
    void closeEvent(QCloseEvent *event) override;
};

#endif // WORDCARDS_H
