#include "showsharedscreen.h"
#include "ui_showsharedscreen.h"
#include<QMessageBox>
ShowSharedScreen::ShowSharedScreen(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ShowSharedScreen)
{
    ui->setupUi(this);
    // 设置窗体最大化和最小化
    Qt::WindowFlags windowFlag  = Qt::Dialog;
    windowFlag                  |= Qt::WindowMinimizeButtonHint;
    windowFlag                  |= Qt::WindowMaximizeButtonHint;
    windowFlag                  |= Qt::WindowCloseButtonHint;

    setWindowFlags(windowFlag);
}

ShowSharedScreen::~ShowSharedScreen()
{
    delete ui;
}
/**
 * @brief 传递主界面参数信息
 * @param groupAddress
 * @param iface
 * @param groupPort
 */
void ShowSharedScreen::do_multicastGroupInfo(const QHostAddress &groupAddress, const QNetworkInterface &iface, quint16 groupPort)
{
    connect(this, &ShowSharedScreen::info, ui->widget, &Widget::do_multicastGroupInfo);


    emit info(groupAddress,iface, groupPort);
}

void ShowSharedScreen::do_readyClean()
{
}
void ShowSharedScreen::closeEvent(QCloseEvent *event)
{   Q_UNUSED(event);
    QMessageBox::question(this,"提示","确定退出会议吗?",QMessageBox::Yes|QMessageBox::No);
    connect(this,&ShowSharedScreen::stopShared,ui->widget,&Widget::do_stopShared);
    emit stopShared();
    emit enableBtnJoinMeeting();
}

