#ifndef DPERSONALINFO_H
#define DPERSONALINFO_H

#include <QWidget>

namespace Ui {
class DpersonalInfo;
}

class DpersonalInfo : public QWidget
{
    Q_OBJECT

public:
    explicit DpersonalInfo(QWidget *parent = nullptr);
    ~DpersonalInfo();

public slots:
    void getInfo(QString,QString);
    //void getIp(QString,QString);

private slots:
    void on_pushButton_clicked();

    void on_saveBtn_clicked();

    void on_backBtn_clicked();



    void on_choosetxBtn_clicked();

private:
    Ui::DpersonalInfo *ui;

    QByteArray m_data;
};

#endif // DPERSONALINFO_H
