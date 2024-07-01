#ifndef RECORDING_H
#define RECORDING_H

#include <QDialog>
#include"readthread.h"
#include<QTimer>
class QTimer;
namespace Ui {
class Recording;
}

class Recording : public QDialog
{
    Q_OBJECT

public:
    explicit Recording(QWidget *parent = nullptr);
    ~Recording();

private slots:
    void on_but_startRecording_clicked();
    void StateChanged(ReadThread::PlayState state);
    bool hadSavePath();
    void do_timeout();

    void on_btn_close_clicked();

public:
    bool m_isRecording=false;
    ReadThread *m_rThread = nullptr;
    QTimer m_timer;
signals:
 void recordingSetting(QString rate,QString size,QString qyulity);
private:
    Ui::Recording *ui;
};

#endif // RECORDING_H
