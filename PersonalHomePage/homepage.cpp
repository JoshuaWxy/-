#include "homepage.h"
#include "ui_homepage.h"
#include"dlogin.h"
HomePage::HomePage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::HomePage)
{
    ui->setupUi(this);
    //connect(ui->widget,&DpersonalInfo::)
}

HomePage::~HomePage()
{
    delete ui;
}
