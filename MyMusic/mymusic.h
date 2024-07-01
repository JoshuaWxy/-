#ifndef MYMUSIC_H
#define MYMUSIC_H

#include <QMainWindow>
#include <QtMultimedia>

namespace Ui {
class MyMusic;
}

class MyMusic : public QMainWindow
{
    Q_OBJECT

public:
    explicit MyMusic(QWidget *parent = nullptr);
    ~MyMusic();
private:
    QMediaPlayer *player;
    QAudioOutput *audioOutput;
    QTimer *m_pTimer;
    QString positionTime;
    QString durationTime;
    bool loopPay=true;
    bool m_bStart=false;
    int m_Rote=0;
private slots:
    void on_act_add_triggered();

    void on_act_remove_triggered();

    void on_act_clear_triggered();

    void on_act_quit_triggered();

    void on_btnPrevious_clicked();

    void on_btnPlay_clicked();

    void on_btnNext_clicked();

    void on_btnrand_clicked();

    void on_doubleSpinBox_valueChanged(double arg1);


    void on_btnLoop_clicked(bool checked);

    void on_sliderVolumn_valueChanged(int value);

    void on_sliderPosition_valueChanged(int value);

    void on_listWidget_doubleClicked(const QModelIndex &index);

    void on_btnSound_clicked();



    void do_positionChanged(qint64 position);

    void do_durationChanged(qint64 duration);

    void do_sourceChanged(const QUrl &media);

    void do_playbackStateChanged(QMediaPlayer::PlaybackState newState);

   // void on_randomPlay();

    void upDateRote();
    void onStartOrStopRotate();
private:
    Ui::MyMusic *ui;

    // QObject interface
public:
    virtual bool eventFilter(QObject *watched, QEvent *event) override;

    // QWidget interface
protected:
    virtual void paintEvent(QPaintEvent *event) override;

    // QWidget interface
protected:
    virtual void closeEvent(QCloseEvent *event) override;
};






#endif // MYMUSIC_H
