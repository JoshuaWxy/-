#ifndef DREGISTER_H
#define DREGISTER_H

#include <QDialog>

namespace Ui {
class Dregister;
}

class Dregister : public QDialog
{
    Q_OBJECT

public:
    explicit Dregister(QWidget *parent = nullptr);
    ~Dregister();
public:
    virtual bool eventFilter(QObject *watched, QEvent *event) override;

private slots:
    void on_Next1Btn_clicked();

    void on_back1Btn_clicked();

    void on_Next2Btn_clicked();

    void on_back2Btn_clicked();

    void on_finishBtn_clicked();

    void on_returnBtn_clicked();

    void myslot();

    void on_emailBtn_clicked();



    void on_fwBtn_clicked();


private:
    Ui::Dregister *ui;

    int previousIndex = 0;
    int nextIndex;
    QByteArray m_data;
    QString username;
    QString password;
    QString surepass;
    QString email;
    void userIp();
    QString ip_address;

    QTimer * timer;

};

#endif // DREGISTER_H
