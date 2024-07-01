#ifndef PLAYER_H
#define PLAYER_H

#include <QDialog>
#include<QVideoWidget>
#include<QMediaPlayer>
#include"volumeslider.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class Dialog;
}
QT_END_NAMESPACE

class Player : public QDialog
{
    Q_OBJECT

public:
    Player(QWidget *parent = nullptr);
    ~Player();
    signals:
    void itIsFullScreen();
    void itIsNotFullScreen();
private:
bool ok=false;
    QVideoWidget *m_videoWidget = nullptr ;
    QMediaPlayer *m_player = nullptr;
    QAudioOutput *m_audioOutut = nullptr;

    qint64 m_duration;

    void undataDurationInfo(qint64 currentInfo);
    void playNextVideo();
    bool isShowSlider = false;
     volumeSlider * slider;
private slots:
    void open();
    void stop();
    void seek(int msecond);
    void durationChanged(qint64 duration);
    void positionChanged(qint64 progress);
    void skip_to_current();
    void video_pause();
    void seekPosion();
    void do_mediaStatusChanged(QMediaPlayer::MediaStatus status);



    void on_btn_openFile_clicked();


    void on_btn_speedFoward_clicked();

    void on_btn_speedBack_clicked();

    void on_combo_speed_currentTextChanged(const QString &arg1);

    void on_btn_fullScreen_clicked();

    void on_btn_volumn_clicked();
    void updatePlayerVolume(int);

private:
    Ui::Dialog *ui;

    // QObject interface
public:
    virtual bool eventFilter(QObject *watched, QEvent *event) override;

    // QWidget interface
protected:
    virtual void closeEvent(QCloseEvent *event) override;
};






#endif // PLAYER_H
