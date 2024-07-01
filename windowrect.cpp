#include "windowrect.h"
#include <QDebug>
#include <QGridLayout>
#include <QEvent>
#include <QMouseEvent>

#include <Windows.h>
#include <windef.h>

#if defined(Q_OS_WIN)
static HHOOK g_hook = nullptr;
/**
 * @brief           处理鼠标事件的回调函数
 * @param nCode
 * @param wParam
 * @param lParam
 * @return
 */
LRESULT CALLBACK CallBackProc(int nCode, WPARAM wParam, LPARAM lParam)
{
    switch (wParam)
    {
    case WM_LBUTTONDOWN:   // 鼠标左键按下
    {   QEvent *a  = new QMouseEvent (QEvent::MouseButtonPress, QCursor::pos(), Qt::LeftButton, Qt::LeftButton, Qt::NoModifier);
        emit MouseEvent::getInstance()->mouseSignal(a);
        break;

    }
    default:
        break;
    }
    return CallNextHookEx(nullptr, nCode, wParam, lParam);   // 注意这一行一定不能少，否则会出大问题
}
#endif

WindowRect::WindowRect(QWidget *parent) : QWidget(parent)
{
    // windows下如果不设置鼠标穿透则只能捕获到当前窗口
    this->setAttribute(Qt::WA_TransparentForMouseEvents, true);
    this->setWindowFlags(Qt::FramelessWindowHint);                            // 去掉边框、标题栏
    this->setAttribute(Qt::WA_TranslucentBackground);                         // 背景透明
    this->setWindowFlags(this->windowFlags() | Qt::WindowStaysOnTopHint);     // 设置顶级窗口，防止遮挡

    // 在当前窗口上增加一层QWidget，否则不会显示边框
    QGridLayout* gridLayout = new QGridLayout(this);
    gridLayout->setSpacing(0);
    gridLayout->setContentsMargins(0, 0, 0, 0);
    gridLayout->addWidget(new QWidget(), 0, 0, 1, 1);

    this->setStyleSheet(" background-color: rgba(58, 196, 255, 40); border: 2px solid rgba(58, 196, 255, 200);"); // 设置窗口边框样式 dashed虚线，solid 实线

    connect(MouseEvent::getInstance(), &MouseEvent::mouseSignal, this, &WindowRect::on_mouseSignal);
    // 使用定时器定时获取当前鼠标位置的窗口位置信息
    connect(&m_timer, &QTimer::timeout, this, &WindowRect::on_timeout);
    m_timer.start(50);//越快获取窗口信息越快
}

WindowRect::~WindowRect()
{
    if(g_hook)
    {
        UnhookWindowsHookEx(g_hook);
    }
}

/**
 * @brief         通过截图全局鼠标事件将当前窗口大小发生出去
 * @param event
 */
void WindowRect::on_mouseSignal(QEvent *event)
{
    delete event;//框选
    this->hide();
    emit this->selectRect(QRect(this->pos(), this->size()));
}

/**
 * @brief        Windows使用全局鼠标钩子，显示窗口时挂载鼠标钩子
 * @param event
 */
void WindowRect::showEvent(QShowEvent *event)
{
    // 由于windows不透明的窗体如果不设置设置鼠标穿透WindowFromPoint只能捕捉到当前窗体，而设置鼠标穿透后想要获取鼠标事件只能通过鼠标钩子
    g_hook = SetWindowsHookExW(WH_MOUSE_LL, CallBackProc, GetModuleHandleW(nullptr), 0);  // 挂载全局鼠标钩子
    if (g_hook)
    {
        qDebug() << "鼠标钩子挂接成功,线程ID:" << GetCurrentThreadId();

    }
    else
    {
        qDebug() << "鼠标钩子挂接失败:" << GetLastError();
    }
    QWidget::showEvent(event);
}

/**
 * @brief       隐藏窗口时卸载鼠标钩子
 * @param event
 */
void WindowRect::hideEvent(QHideEvent *event)
{
    if(g_hook)
    {
        bool ret = UnhookWindowsHookEx(g_hook);
        if(ret)
        {
            qDebug() << "卸载鼠标钩子。";
            g_hook = nullptr;
        }
    }
    QWidget::hideEvent(event);
}

/**
 * @brief        linux下使用自带的鼠标点击事件就可以
 * @param event
 */
void WindowRect::mousePressEvent(QMouseEvent *event)
{
    QWidget::mousePressEvent(event);
}


void WindowRect::on_timeout()
{
    QPoint point = QCursor::pos();  // 获取鼠标当前位置
    POINT pos;
    pos.x = point.x();
    pos.y = point.y();

    HWND hwnd = nullptr;
    hwnd = WindowFromPoint(pos);   // 通过鼠标位置获取窗口句柄
    if(!hwnd) return;

    RECT lrect;
    bool ret = GetWindowRect(hwnd, &lrect);     //获取窗口位置
    if(!ret) return;

    QRect rect;
    rect.setX(lrect.left);
    rect.setY(lrect.top);
    rect.setWidth(lrect.right - lrect.left);
    rect.setHeight(lrect.bottom - lrect.top);
    this->setGeometry(rect);         // 设置窗口边框
}
