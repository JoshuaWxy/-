#ifndef DLOGIN_H
#define DLOGIN_H

#include <QDialog>
#include<QtSql>
#include<QDataWidgetMapper>
#include <QMovie>
#include <QMouseEvent>
#include <QMessageBox>
#include <QPointF>
#include <QNetworkInterface>
#include"dpersonalinfo.h"
void sqlite_Init();

QT_BEGIN_NAMESPACE
namespace Ui {
class Dlogin;
}
QT_END_NAMESPACE

class Dlogin : public QDialog
{
    Q_OBJECT

public:
    Dlogin(QWidget *parent = nullptr);
    ~Dlogin();

    QString ip_address;


signals:
    void stuInfo(QString,QString);

    void LoginToMainInfo(DpersonalInfo *d_dpersonalIfo);


protected:
    void mousePressEvent(QMouseEvent *event)Q_DECL_OVERRIDE;
    void mouseMoveEvent(QMouseEvent *event)Q_DECL_OVERRIDE;
    void mouseReleaseEvent(QMouseEvent *event)Q_DECL_OVERRIDE;


private slots:
    void on_miniBtn_clicked();

    void on_closeBtn_clicked();

    void on_registerBtn_clicked();

    void on_loginBtn_clicked();
    void on_forgetBtn_clicked();
    void printfText();

private:
    void iniBtn();

    QSqlDatabase DB;

    void initializeAccountComboBox();
    //QSqlQuery sql;
    //QString ip;

private:
    Ui::Dlogin *ui;


    QPointF m_mousePos;

};
#endif // DLOGIN_H
