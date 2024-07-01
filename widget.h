#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTimer>
#include <QDateTime>
#include <QMouseEvent>
#include <QDebug>
#include <QKeyEvent>
#include "sharescreenthread.h"
namespace Ui { class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

protected:

    void cleanShow();
    void keyPressEvent(QKeyEvent *event);
public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();


signals:
    void info(const QHostAddress &groupAddress, const QNetworkInterface &iface, quint16 groupPort);
    void readyClean();
public slots:
    void do_multicastGroupInfo(const QHostAddress &groupAddress, const QNetworkInterface &iface, quint16 groupPort);
public slots:
    void onStateChange();
    void on_btnStartShare_clicked();
    void onUpdateShow();
    void on_btnFull_clicked();

    void on_comboQuality_currentIndexChanged(int index);
    void to_cleanLabel();
    void do_stopShared();
public slots:


private:
    ShareScreenThread m_thread;
    QTimer m_updateShow;
    qint64 m_pressMSec;
    int m_updateShowCnt;

    Ui::Widget *ui;

};
#endif // WIDGET_H
