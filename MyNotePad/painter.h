#ifndef PAINTER_H
#define PAINTER_H

#include "qpen.h"
#include <QWidget>

namespace Ui {
class painter;
}

class painter : public QWidget
{
    Q_OBJECT

public:
    explicit painter(QWidget *parent = nullptr);
    ~painter();
    void paintEvent(QPaintEvent*);
    void mouseMoveEvent(QMouseEvent*);
    void mousePressEvent(QMouseEvent*);
    void mouseReleaseEvent(QMouseEvent*);
private slots:
    void on_btn_pnew_clicked();

    void on_btn_getpcolor_clicked();

    void on_btn_redo_clicked();

    void on_horizontalSlider_actionTriggered(int action);

    void on_btn_up_clicked();

    void on_btn_down_clicked();

private:
    Ui::painter *ui;
    QVector<QVector<QPoint> > _lines;
    QVector<QPen> pens;
    QPen lastpen;
};

#endif // PAINTER_H
