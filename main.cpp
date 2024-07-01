#include "mainwindow.h"
#include <QApplication>
#include"appinit.h"
#include"dlogin.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //字体
    QFont font("Arial",10);
    font.setBold(true);
    a.setFont(font);

    AppInit::Instance()->start();
    Dlogin p;
    p.exec();
    return a.exec();
}
