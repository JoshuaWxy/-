#include "dpersonalinfo.h"
#include "ui_dpersonalinfo.h"
#include "dlogin.h"
#include<QFileDialog>
DpersonalInfo::DpersonalInfo(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::DpersonalInfo)
{
    ui->setupUi(this);

    ui->stackedWidget->setCurrentIndex(0);

}

DpersonalInfo::~DpersonalInfo()
{
    delete ui;
}
/**
 * @brief 接受信号函数
 *
 * @param QString name,QString passwd 接收到的信号
 */
void DpersonalInfo::getInfo(QString name, QString passwd)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM user WHERE username = :username AND password = :password");
    query.bindValue(":username", name);
    query.bindValue(":password", passwd);
    if (!query.exec()) {
        qDebug() << "Query execution failed:" << query.lastError().text();
        return;
    }

    if (query.next())
    {
        m_data = query.value(query.record().indexOf("picture")).toByteArray();
        qDebug()<<"imageData"<<m_data.size();
        QPixmap pixmap;
        pixmap.loadFromData(m_data);
        ui->txLabel_2->setPixmap(pixmap.scaled(ui->txLabel_2->size(), Qt::KeepAspectRatio));
        ui->txLabel_3->setPixmap(pixmap.scaled(ui->txLabel_3->size(),Qt::KeepAspectRatio));

        QString ipEdit = query.value(query.record().indexOf("userip")).toString();
        qDebug() << "IP address:" << ipEdit;
        ui->ipEdit->setText(ipEdit);


        // 从查询结果中提取字段值
         QString pname1 = query.value(7).toString();
         QString sex1 = query.value(8).toString();
         QString num1 = query.value(9).toString();
         QString area1 = query.value(10).toString();
         QString email1 = query.value(5).toString();
         QString birth1 = query.value(11).toString();
         QString pid1 = query.value(12).toString();
         QString phone1 = query.value(13).toString();
         QString pclass1= query.value(14).toString();


        // 将提取的值设置到UI组件中
         ui->nameEdit->setText(pname1);
         ui->sexEdit->setText(sex1);
         ui->numEdit->setText(num1);
         ui->areaEdit->setText(area1);
         ui->emailEdit->setText(email1);
         ui->brithEdit->setText(birth1);
         ui->idEdit->setText(pid1);
         ui->phoneEdit->setText(phone1);
         ui->classEdit->setText(pclass1);

         ui->nameEdit_2->setText(pname1);
         ui->numEdit_2->setText(num1);
         ui->phoneEdit_2->setText(phone1);
         ui->emailEdit_2->setText(email1);
    }
    else
    {
        qDebug() << "No user found with the given credentials.";
    }
}

/**
 * @brief 响应“编辑个人信息”按钮
 *
 */
void DpersonalInfo::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

/**
 * @brief 响应“保存”按钮,实现把修改的数据保存到数据库
 *
 */
void DpersonalInfo::on_saveBtn_clicked()
{
    QString pname = ui->nameEdit->text();
    QString sex = ui->sexEdit->text();
    QString num = ui->numEdit->text();
    QString area = ui->areaEdit->text();
    QString email = ui->emailEdit->text();
    QString birth = ui->brithEdit->text();
    QString pid = ui->idEdit->text();
    QString phone = ui->phoneEdit->text();
    QString pclass = ui->classEdit->text();
    QSqlQuery query;

    query.prepare("UPDATE user SET pname = :pname,sex = :sex,num = :num,"
                  "area = :area,birth = :birth, pid = :pid, phone = :phone, class = :pclass ,picture = :picture"
                  " WHERE email = :email");
    query.bindValue(":pname", pname);
    query.bindValue(":sex", sex);
    query.bindValue(":num", num);
    query.bindValue(":area", area);
    query.bindValue(":birth", birth);
    query.bindValue(":pid", pid);
    query.bindValue(":phone", phone);
    query.bindValue(":pclass", pclass);
    query.bindValue(":picture", m_data);
    query.bindValue(":email", email);

    if (query.exec())
    {
        qDebug() << "Update successful";
        ui->nameEdit_2->setText(pname);
        ui->numEdit_2->setText(num);
        ui->phoneEdit_2->setText(phone);
        ui->emailEdit_2->setText(email);

    }
    else
    {
        qDebug() << "Update failed:" << query.lastError().text();
    }


    ui->stackedWidget->setCurrentIndex(0);
}

/**
 * @brief 响应“返回”按钮
 *
 */
void DpersonalInfo::on_backBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}
/**
 * @brief 响应“选择头像”按钮
 *
 */
void DpersonalInfo::on_choosetxBtn_clicked()
{
    qDebug()<<" 666";
    QString dir = QApplication::applicationDirPath();
    QString filename =QFileDialog::getOpenFileName(this,"选择图片",dir,"选择图片((*.png *.jpg))");
    QFile *file = new QFile(filename);
    file->open(QIODevice::ReadOnly);
    // if(!file->open(QIODevice::ReadOnly))
    //     return;
    m_data = file->readAll();
    file->close();
    QPixmap pic;
    pic.loadFromData(m_data);
    qDebug() << "Image data size:" << m_data.size();

    ui->txLabel_3->setPixmap(pic.scaled(ui->txLabel_3->width(),ui->txLabel_3->height()));
    ui->txLabel_2->setPixmap(pic.scaled(ui->txLabel_2->width(),ui->txLabel_2->height()));

}

