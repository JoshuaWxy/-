#include "dregister.h"
#include "ui_dregister.h"
#include "dpersonalinfo.h"
#include "dlogin.h"
#include<QFileDialog>

#include"smtp.h"

int count = 60;          //倒计时
int verificationcode = 0;//验证码
Dregister::Dregister(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dregister)
{
    ui->setupUi(this);

    ui->stackedWidget->setCurrentIndex(0);

    ui->txLabel->installEventFilter(this);

    //隐藏密码
    ui->passwdEdit->setEchoMode(QLineEdit::Password);

    ui->SurepasswdEdit->setEchoMode(QLineEdit::Password);

    timer = new QTimer(this);  //创建计时器
    connect(timer, &QTimer::timeout, this, &Dregister::myslot);



}

Dregister::~Dregister()
{
    delete ui;
}

/**
 * @brief 响应“第一个下一步”按钮
 *
 */
void Dregister::on_Next1Btn_clicked()
{
    username = ui->accountEdit->text();
    password = ui->passwdEdit->text();
    surepass = ui->SurepasswdEdit->text();
    QRegularExpression usernameRegex("^\\d{6,}$"); // 匹配6位或更多位的数字
    QRegularExpression passwordRegex("^[A-Za-z0-9]{6,}$"); // 匹配6位或更多位的字母数字字符

    if(!usernameRegex.match(username).hasMatch()) {
        QMessageBox::information(this, "注册错误", "账号必须是不少于6位的数字");
    }
    else if(!passwordRegex.match(password).hasMatch()) {
        QMessageBox::information(this, "注册错误", "密码必须是不少于6位的字母数字字符");
    }
    else if(password != surepass) {
        QMessageBox::information(this, "注册认证", "两次密码输入不一致");
    }
    else {
        ui->stackedWidget->setCurrentIndex(1);
    }

}

/**
 * @brief 响应“第一个上一步按钮”按钮
 *
 */
void Dregister::on_back1Btn_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}
/**
 * @brief 响应“第二个下一步按钮”按钮
 *
 */
void Dregister::on_Next2Btn_clicked()
{

    QString register_qstr = ui->verifiEdit->text();

    email = ui->EmaiEdit->text();

    bool isChecked = ui->checkBox->isChecked(); // 检查复选框是否被选中

    // 将字符串转为整型进行验证码判断
    int verificationcode_2 = register_qstr.toInt();

    if(verificationcode_2 == verificationcode)
    {
        if(email.isEmpty())
        {
            QMessageBox::information(this, "输入错误", "邮箱不能为空");
        }
        else if(!isChecked)
        {
            QMessageBox::information(this, "操作提示", "请认真阅读课堂通服务协议");
        }
        else if(register_qstr.isEmpty())
        {
            QMessageBox::information(this, "操作提示", "请填写验证码");
        }
        else
        {
            // 如果所有条件都满足，则切换到下一个界面
            ui->stackedWidget->setCurrentIndex(2);
        }
    }
    else
    {
        QMessageBox::about(this, "验证码错误", "验证码错误");
    }
}

/**
 * @brief 响应“第二个上一步按钮”按钮
 *
 */
void Dregister::on_back2Btn_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

//
/**
 * @brief 响应“返回登录按钮”按钮
 *
 */
void Dregister::on_returnBtn_clicked()
{
    this->close();
    Dlogin *d_dlogin = new Dlogin;
    d_dlogin->show();
    //停止计时
    timer->stop();
}
/**
 * @brief 自定义槽函数，用于更新倒计时标签的文本
 *
 * 根据剩余时间更新标签的文本，并在倒计时结束时停止计时器。
 */
void Dregister::myslot()
{
    QString count_qstr = QString("剩余%1秒").arg(count--);
    ui->label_5->setText(count_qstr);
    if(count == -1)
    {
        //如果用户没有返回登陆，倒计时结束应停止计时
        timer->stop();
    }
}
/**
 * @brief 实现获取用户IP地址的功能
 *
 */
void Dregister::userIp()
{
QList<QNetworkInterface> interfaces = QNetworkInterface::allInterfaces();
for (const QNetworkInterface &interface : interfaces)
{
    // 检查接口是否有效、是否为无线网络、是否处于活动状态
    if (interface.isValid() && interface.type() == QNetworkInterface::Wifi && interface.flags().testFlag(QNetworkInterface::IsUp))
    {
        QList<QNetworkAddressEntry> entries = interface.addressEntries();
        for (const QNetworkAddressEntry &entry : entries)
        {
            if (entry.ip().protocol() == QAbstractSocket::IPv4Protocol &&
                entry.ip() != QHostAddress::LocalHost &&
                !entry.ip().toString().startsWith("169."))
            {
                ip_address = entry.ip().toString();
            }
        }
    }
}
// 如果未找到符合条件的IP地址，则返回本地回环地址
if (ip_address.isEmpty())
    ip_address = QHostAddress(QHostAddress::LocalHost).toString();
}

/**
 * @brief 响应“注册完成按钮”按钮
 *
 */
void Dregister::on_finishBtn_clicked()
{
    userIp();
    QString sql = "INSERT INTO user (username, password, picture,email,userip) VALUES (:username, :password, :picture,:email,:userip)";
    QSqlQuery query;
    query.prepare(sql);
    query.bindValue(":username", username);
    query.bindValue(":password", password);
    query.bindValue(":email",email);
    query.bindValue(":picture", m_data);
    query.bindValue(":userip",ip_address);

    if (!query.exec()) {
        qDebug() << "Error inserting data:" << query.lastError().text();
    } else {
        qDebug() << "Data inserted successfully";
        QMessageBox::information(this,"注册认证","插入成功！");
        Dlogin *d_dlogin = new Dlogin;
        d_dlogin->show();
        this->close();
    }
    qDebug()<<"m_data: "<<m_data.size();

}
/**
 * @brief 实现点击头像框选择头像的
 *
 * @param QObject *watched,QEvent *event
 */
bool Dregister::eventFilter(QObject *watched, QEvent *event)
{
    qDebug()<<" 123";
    QString dir = QApplication::applicationDirPath();
    if(watched==ui->txLabel)
    {
        if(event->type()==QEvent::MouseButtonPress)
        {
            qDebug()<<" 444";
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

            ui->txLabel->setPixmap(pic.scaled(ui->txLabel->width(),ui->txLabel->height()));

        }
    }
    return QDialog::eventFilter(watched,event);
}


// 发送验证码
/**
 * @brief 响应“发送验证码”按钮点击事件
 *
 * 当用户点击“验证”按钮时，获取用户输入的邮箱地址，生成验证码，并通过SMTP发送包含验证码的邮件。
 * 随后启动计时器以显示剩余秒数。
 *
 */
void Dregister::on_emailBtn_clicked()
{
    //邮箱地址
    QString mailaddress_qstr = ui->EmaiEdit->text();
    if(!mailaddress_qstr.isNull())
    {
        std::string mailaddress_str = mailaddress_qstr.toStdString();
        const char * mailaddress_c = mailaddress_str.c_str();

        //随机生成验证码
        srand(QTime(0,0,0).secsTo(QTime::currentTime()));
        verificationcode = rand()%(99999 - 10000) + 10000;
        //将验证码加入字符串
        QString verificationcode_qstr = QString("【验证码为%1】，用于邮箱绑定，请勿泄露和转发，若非本人操作，请忽略此邮件。——————课堂通开发团队").arg(verificationcode);
        std::string verificationcode_str = verificationcode_qstr.toStdString();
        const char * verificationcode_c = verificationcode_str.c_str();
        //登录邮箱
        Smtp smtp("3277225167@qq.com","gpwqwxvqhsigchff");  //第一个参数是发送者邮箱，第二个授权码，并不是邮箱密码
        //发送邮件
        smtp.send(mailaddress_c,"验证信息",verificationcode_c);
        //间隔1秒触发myslot() 来显示剩余秒数
        timer->start(1000);
    }
    else
    {
        QMessageBox::information(this,"about","邮箱不能为空！");
    }
}

void Dregister::on_fwBtn_clicked()
{
   QMessageBox::information(this,"about","课堂通用户服务协议\n"
                                         "欢迎您使用课堂通及相关服务！");

}

