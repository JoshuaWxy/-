#include "painter.h"
#include "qevent.h"
#include "ui_painter.h"

#include <QColorDialog>
#include <QFileDialog>
#include <QMenu>
#include <QPainter>
#include<QScrollArea>
#include <QVBoxLayout>

painter::painter(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::painter)
{
    ui->setupUi(this);
    this->setWindowIcon(QPixmap(":/res/paint.png"));

}

painter::~painter()
{
    delete ui;
}
/**
  * @brief 清除绘图
*/
void painter::on_btn_pnew_clicked()
{
    while(!_lines.empty() || !pens.empty())
    {
        _lines.pop_back();
        pens.pop_back();
    }
    this->update();
}
/**
  * @brief 捕捉绘图事件
 @param *ev
*/
void painter::paintEvent(QPaintEvent* ev)
{

    QPainter painter(this);
    //   数据结构 QVector<QColor> colors;

    for(int i = 0 ; i < _lines.size(); i++)
    {
        const QVector<QPoint> &line = _lines.at(i);

        painter.setPen(pens.at(i));

        for (int j = 0 ; j < line.size()-1; j++)
        {
            painter.drawLine(line.at(j),line.at(j+1));
        }
    }
    return QWidget::paintEvent(ev);

}
/**
  * @brief 捕捉鼠标移动
 @param *ev
*/
void painter::mouseMoveEvent(QMouseEvent* ev)
{
    if(!ui->groupBox->rect().contains(ev->pos())) {
        if(_lines.size() == 0)
        {
            QVector<QPoint> line;
            _lines.append(line);
        }
        QVector<QPoint> &lastline = _lines.last();
        lastline.append(ev->pos());
        //对这个类的事件进行跟新
        this->update();
    }

    return QWidget::mouseMoveEvent(ev);
}
/**
  * @brief 捕捉鼠标按压
 @param *ev
*/
void painter::mousePressEvent(QMouseEvent* ev)
{
    QPixmap pix;
    pix.load(":/res/pen.png");
    QCursor customCursor(pix.scaled(10,10), 0, 0); // 0, 0 是光标热点的位置
    QApplication::setOverrideCursor(customCursor);
    if(!ui->groupBox->rect().contains(ev->pos())) {
        QVector<QPoint> line;
        _lines.append(line);    //就是push_back()

        //设置这条线的颜色
        pens.append(lastpen);

        //取出线的引用
        QVector<QPoint> &lastLine = _lines.last();
        //调用pos事件，返回QPoint
        lastLine.append(ev->pos());
    }
    return QWidget::mousePressEvent(ev);
}
/**
  @brief 捕捉鼠标释放
 @param *ev
*/
void painter::mouseReleaseEvent(QMouseEvent* ev)
{
       QApplication::restoreOverrideCursor();
    if(!ui->groupBox->rect().contains(ev->pos())) {
        QVector<QPoint> &lastLine = _lines.last();
        lastLine.append(ev->pos());
    }
    return QWidget::mouseReleaseEvent(ev);
}

 /**
  * @brief 画笔颜色的获取
*/

void painter::on_btn_getpcolor_clicked()
{
    // 检查是否有绘图
    if (_lines.empty() || pens.empty()) {
        return;
    }
    QColor color = QColorDialog::getColor();
    lastpen.setColor(color);
}
/**
  * @brief 回撤操作
*/
void painter::on_btn_redo_clicked()
{
    // 检查是否有绘图
    if (_lines.empty() || pens.empty()) {
        return;
    }
    _lines.pop_back();
    pens.pop_back();
    this->update();
}

/**
  * @brief 设置画笔粗细
 @param action
*/
void painter::on_horizontalSlider_actionTriggered(int action)
{
    Q_UNUSED(action);
    int value =ui->horizontalSlider->value();
    lastpen.setWidth(value);
}

/**
  * @brief 绘图放大
*/
void painter::on_btn_up_clicked()
{
    // 放大倍数
    qreal scaleFactor = 1.2; // 假设放大 20%

    // 遍历所有绘制的线条
    for (int i = 0; i < _lines.size(); ++i) {
        QVector<QPoint>& line = _lines[i];
        for (int j = 0; j < line.size(); ++j) {
            // 将线条中的点坐标进行放大
            line[j].rx() *= scaleFactor;
            line[j].ry() *= scaleFactor;
        }
    }

    // 更新界面，重新绘制放大后的图形
    update();
}
/**
  * @brief 绘图缩小
*/
void painter::on_btn_down_clicked()
{
    qreal scaleFactor = 0.8;
    // 遍历所有绘制的线条
    for (int i = 0; i < _lines.size(); ++i) {
        QVector<QPoint>& line = _lines[i];
        for (int j = 0; j < line.size(); ++j) {
            // 将线条中的点坐标进行放大
            line[j].rx() *= scaleFactor;
            line[j].ry() *= scaleFactor;
        }
    }
    // 更新界面，重新绘制放大后的图形
    update();
}

