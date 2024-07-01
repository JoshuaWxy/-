#include "playimage.h"
#include <QPainter>
#include"mainwindow.h"
PlayImage::PlayImage(QWidget *parent) : QWidget(parent)
{
    // 背景颜色初始化
    QPalette palette(this->palette());
    palette.setColor(QPalette::Window, Qt::white);
    this->setPalette(palette);
    this->setAutoFillBackground(true);
}

/**
 * @brief        传入Qimage图片显示
 * @param image
 */
void PlayImage::updateImage(const QImage& image)
{
    updatePixmap(QPixmap::fromImage(image));
}

/**
 * @brief        传入QPixmap图片
 * @param pixmap
 */
void PlayImage::updatePixmap(const QPixmap &pixmap)
{
    m_mutex.lock();
    m_pixmap = pixmap;
    m_mutex.unlock();
    update();

}

/**
 * @brief        使用Qpainter显示图片
 * @param event
 */
void PlayImage::paintEvent(QPaintEvent *event)
{
    if(!m_pixmap.isNull())
    {
        QPainter painter(this);
        painter.setRenderHint(QPainter::Antialiasing);

        m_mutex.lock();
        QPixmap pixmap = m_pixmap.scaled(this->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation);  // 这里采用SmoothTransformation，保证显示图像的清晰度
        m_mutex.unlock();
        int x = (this->width() - pixmap.width()) / 2;
        int y = (this->height() - pixmap.height()) / 2;
        painter.drawPixmap(x, y, pixmap);
    }
    QWidget::paintEvent(event);
}
