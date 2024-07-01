#ifndef SHOWSHAREDSCREEN_H
#define SHOWSHAREDSCREEN_H

#include <QDialog>
#include<QHostAddress>
#include<QNetworkInterface>
namespace Ui {
class ShowSharedScreen;
}

class ShowSharedScreen : public QDialog
{
    Q_OBJECT

public:
    explicit ShowSharedScreen(QWidget *parent = nullptr);
    ~ShowSharedScreen();
signals:
    void info(const QHostAddress &groupAddress, const QNetworkInterface &iface, quint16 groupPort);
    void stopShared();
    void enableBtnJoinMeeting();
public slots:
    void do_multicastGroupInfo(const QHostAddress &groupAddress, const QNetworkInterface &iface, quint16 groupPort);
    void do_readyClean();
private:
    Ui::ShowSharedScreen *ui;

    // QWidget interface
protected:
    virtual void closeEvent(QCloseEvent *event) override;
};



#endif // SHOWSHAREDSCREEN_H
