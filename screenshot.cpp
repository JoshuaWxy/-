#include "screenshot.h"
#include "ui_screenshot.h"
#include "mainwindow.h"
#include <QComboBox>
#include<QMenu>
#include<QToolBar>
#include<QVBoxLayout>
#include <QMessageBox>
#include <QFileDialog>
#include<QMainWindow>
#include<QScreen>
ScreenShot::ScreenShot(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ScreenShot)
{
    ui->setupUi(this);
    QAction* acNew    = new QAction(QIcon(":/img/剪切.ico"), "新建截图");
    QAction* acSave   = new QAction(QIcon(":/img/保存.ico"), "保存截图");
    QAction* acClear  = new QAction(QIcon(":/img/取消.ico"), "取消截图");
    m_acModel         = new QAction(QIcon(":/img/选区.ico"), "截图模式");
    QMenu* menu = new QMenu(this);
    menu->addAction(new QAction("全屏", this));
    menu->addAction(new QAction("矩形", this));
    menu->addAction(new QAction("窗口", this));
    QToolBar* toolbar = new QToolBar(this);
    m_acModel->setMenu(menu);
    toolbar->addAction(acNew);
    toolbar->addAction(m_acModel);
    toolbar->addAction(acSave);
    toolbar->addAction(acClear);
    toolbar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->setMenuBar(toolbar);
    setLayout(layout);

    connect(menu, &QMenu::triggered, this, &ScreenShot::on_triggered);
    connect(acNew, &QAction::triggered, this, &ScreenShot::on_newGrab);
    connect(acSave, &QAction::triggered, this, &ScreenShot::on_saveImage);
    connect(acClear, &QAction::triggered, this, &ScreenShot::on_clearImage);
    connect(&m_screenRect, &ScreenRect::selectRect, this, &ScreenShot::on_selectRect);
    connect(&m_windowRect, &WindowRect::selectRect, this, &ScreenShot::on_selectRect);


}

ScreenShot::~ScreenShot()
{
    delete ui;
}

/**
 * @brief 更改选择不同项后的名称
 * @param action
 */

void ScreenShot::on_triggered(QAction *action)
{
    m_acModel->setText(action->text());
}

/**
 * @brief 处理点击新建按钮操作
 */

void ScreenShot::on_newGrab()
{

    QString strModel = m_acModel->text();
    if(strModel == "全屏")
    {
        grabPixmap(QRect(0, 0, -1, -1));
    }
    else if(strModel == "矩形")
    {
        this->hide();
        m_screenRect.show();
    }
    else if(strModel == "窗口")
    {
        this->hide();
        m_windowRect.show();
    }
    else
    {
    }
}

/**
 * @brief 抓取屏幕框选区域
 * @param rect
 */

void ScreenShot::grabPixmap(QRect rect)
{
    this->setWindowOpacity(0); // 将当前窗口设置为完全透明，不然截图会把当前窗口截进去

    QScreen *screen = QGuiApplication::primaryScreen(); // 获取默认屏幕
    QPixmap pixmap = screen->grabWindow(0, rect.x(), rect.y(), rect.width(), rect.height()); // 获取桌面抓取矩形的pixmap

    this->setWindowOpacity(1);
    // 恢复窗口不透明度

    // 更新图像并显示捕获的图像
    ui->widget->updatePixmap(pixmap);
    //拿到转换的图片
    ma_pixmap =  pixmap;
    emit playPixmap(ma_pixmap);
}

void ScreenShot::on_getPixmap(const QPixmap &pixmap)
{
    ma_pixmap=pixmap;
    qDebug("获取了ui的pixmap");
}

/**
 * @brief         保存截图
 * @param checked
 */

void ScreenShot::on_saveImage()
{

    if(ma_pixmap.isNull())
        qDebug("为空");


    QString strName = QFileDialog::getSaveFileName(this, "保存到", QDir::homePath(), "便携式网络图形(*.png);;JPEG文件(*.jpg)");
    if(strName.isEmpty()) return;

    QImage image = ma_pixmap.toImage();
    if(image.save(strName))
    {
        QMessageBox::information(this,"提示","保存成功");
    }
    else
    {
        QMessageBox::warning(this, "注意！", "文件保存失败，请检查有没有输入文件后缀名。");
    }
}

/**
 * @brief         清除截图
 * @param checked
 */

void ScreenShot::on_clearImage()
{
    ma_pixmap = QPixmap();
    ui->widget->updatePixmap(ma_pixmap);
}

/**
 * @brief        矩形选择截图
 * @param rect
 */

void ScreenShot::on_selectRect(QRect rect)
{
    this->show();
    grabPixmap(rect);
}


