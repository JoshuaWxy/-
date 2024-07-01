#include "dforget.h"
#include "ui_dforget.h"
#include "dlogin.h"
#include "smtp.h"

int f_count = 60;          //倒计时
int f_verificationcode = 0;//验证码
/**
 * @brief Dforget 类的构造函数
 * 初始化 Dforget 类的新实例，并设置其父窗口。
 * @param parent 父窗口指针
 */
Dforget::Dforget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Dforget)
{
    ui->setupUi(this);

    f_timer = new QTimer(this);  //创建计时器
    connect(f_timer, &QTimer::timeout, this, &Dforget::myslot1);
}

Dforget::~Dforget()
{
    delete ui;
}
/**
 * @brief 响应“返回登录”按钮点击事件
 *
 * 当用户点击“返回登录”按钮时，关闭当前窗口，打开登录窗口。
 *
 */
void Dforget::on_backloginBtn_clicked()
{
    this->close();
    Dlogin *d_dlogin = new Dlogin;
    d_dlogin->show();
    //停止计时
    f_timer->stop();
}

/**
 * @brief 响应“发送验证码”按钮点击事件
 *
 * 当用户点击“验证”按钮时，获取用户输入的邮箱地址，生成验证码，并通过SMTP发送包含验证码的邮件。
 * 随后启动计时器以显示剩余秒数。
 *
 */
void Dforget::on_verifiBtn_clicked()
{
    //邮箱地址
    QString mailaddress_qstr = ui->emailEdit->text();
    std::string mailaddress_str = mailaddress_qstr.toStdString();
    const char * mailaddress_c = mailaddress_str.c_str();
    //随机生成验证码
    srand(QTime(0,0,0).secsTo(QTime::currentTime()));
    f_verificationcode = rand()%(99999 - 10000) + 10000;
    //将验证码加入字符串
    QString verificationcode_qstr = QString("【验证码为%1】，用于邮箱确认以及密码重置，请勿泄露和转发，若非本人操作，请忽略此邮件。——————课堂通开发团队")
                                        .arg(f_verificationcode);
    std::string verificationcode_str = verificationcode_qstr.toStdString();
    const char * verificationcode_c = verificationcode_str.c_str();
    //登录邮箱
    Smtp smtp("3277225167@qq.com","gpwqwxvqhsigchff");  //第一个参数是发送者邮箱，第二个授权码，并不是邮箱密码
    //发送邮件
    smtp.send(mailaddress_c,"验证信息",verificationcode_c);
    //间隔1秒触发myslot() 来显示剩余秒数
    f_timer->start(1000);
}

/**
 * @brief 响应“确定修改”按钮点击事件
 *
 * 当用户点击“确定”按钮时，获取用户输入的验证码，与发送的验证码进行比较。
 * 如果验证码正确，则更新用户密码；如果错误，则显示错误消息。
 *
 */
void Dforget::on_SureBtn_clicked()
{
    QString register_qstr = ui->sureEdit->text();

    // 将字符串转为整型进行验证码判断
    int verificationcode_2 = register_qstr.toInt();

    if(verificationcode_2 == f_verificationcode)
    {
        QString username = ui->accountLabel->text();
        QString useremail = ui->emailEdit->text();
        QString newPassword = ui->newpasswdLabel->text(); // 新密码
        QString updateQuery = "UPDATE user SET password = :newPassword WHERE username = :username and email = :useremail";
        QSqlQuery query;
        query.prepare(updateQuery);
        query.bindValue(":newPassword", newPassword);
        query.bindValue(":username", username);
        query.bindValue(":useremail", useremail);

        if (!query.exec())
        {
            QMessageBox::critical(this, "错误", "更新密码失败：" + query.lastError().text());
        }
        else
        {
            QMessageBox::information(this, "成功", "密码已成功更新！");
            Dlogin *d_dlogin = new Dlogin;
            d_dlogin->show();
            this->close();
        }
    }
    else
    {
        QMessageBox::about(this, "About", QString::fromUtf8("验证码错误"));
    }
}
/**
 * @brief 自定义槽函数，用于更新倒计时标签的文本
 *
 * 根据剩余时间更新标签的文本，并在倒计时结束时停止计时器。
 */
void Dforget::myslot1()
{
    QString count_qstr = QString("剩余%1秒").arg(f_count--);
    ui->label_3->setText(count_qstr);
    if(f_count == -1)
    {
        //如果用户没有返回登陆，倒计时结束应停止计时
        f_timer->stop();
    }
}

