#ifndef MYMESSAGEBOX_H
#define MYMESSAGEBOX_H

#include <QDialog>
namespace Ui {
class MyMessageBox;
}

class MyMessageBox : public QDialog
{
    Q_OBJECT

public:
    explicit MyMessageBox(QDialog *parent = 0);
    ~MyMessageBox();

    void setBodyText(QString text);
    void setButtonText(QString text);
    void setButtonText(QString text1, QString text2);

signals:
    void btnchicked(int num);

private slots:
    void on_btn_system_close_clicked();

    void on_btn_mbox_btn01_clicked();

    void on_btn_mbox_btn02_clicked();

private:
    Ui::MyMessageBox *ui;

    void initUi();
};

#endif // MYMESSAGEBOX_H
