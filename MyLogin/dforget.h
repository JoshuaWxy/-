#ifndef DFORGET_H
#define DFORGET_H

#include <QWidget>

namespace Ui {
class Dforget;
}

class Dforget : public QWidget
{
    Q_OBJECT

public:
    explicit Dforget(QWidget *parent = nullptr);
    ~Dforget();

private slots:
    void on_backloginBtn_clicked();

    void on_verifiBtn_clicked();

    void on_SureBtn_clicked();

    void myslot1();

private:
    Ui::Dforget *ui;
    QTimer * f_timer;
};

#endif // DFORGET_H
