#ifndef SCREENSHOT_H
#define SCREENSHOT_H

#include <QDialog>
#include <qtoolbutton.h>
#include "screenrect.h"
#include "windowrect.h"
#include"playimage.h"

class QAction;
namespace Ui {
class ScreenShot;
}

class ScreenShot : public QDialog
{
    Q_OBJECT

public:
    explicit ScreenShot(QWidget *parent = nullptr);
    ~ScreenShot();
private:
    QAction  *m_acModel=nullptr;
    QPixmap ma_pixmap;                    // 保存截取的图像
    ScreenRect m_screenRect;
    WindowRect m_windowRect;
    PlayImage m_playImage;
signals:
    void playPixmap(const QPixmap& pixmap);
private slots:
    void on_triggered(QAction *action);
    void on_newGrab();
    void on_saveImage();
    void on_clearImage();
    void on_selectRect(QRect rect);
    void grabPixmap(QRect rect);            // 捕获图像

    void on_getPixmap(const QPixmap&);
private:
    Ui::ScreenShot *ui;
};

#endif // SCREENSHOT_H
