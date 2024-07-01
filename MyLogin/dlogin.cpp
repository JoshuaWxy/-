#include "dlogin.h"
#include "ui_dlogin.h"
#include "dregister.h"
#include "dpersonalinfo.h"
#include "dforget.h"
Dlogin::Dlogin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dlogin)
{
    //去掉边框
    setWindowFlags(Qt::WindowType::FramelessWindowHint);
    ui->setupUi(this);

    //控件样式编辑
    this->iniBtn();

    //账号提示
    ui->accountcbox->lineEdit()->setPlaceholderText("账号/用户名");

    //设置头像
    ui->txLab->setMask(QRegion(ui->txLab->rect(),QRegion::RegionType::Ellipse));

    //初始化数据库
    sqlite_Init();

    //隐藏密码
    ui->passwdEdit->setEchoMode(QLineEdit::Password);

    //关联账号和密码
    connect(ui->accountcbox, &QComboBox::currentIndexChanged, this, &Dlogin::printfText);
    QSqlQuery query;
    query.exec("select * from user");
    QStringList mysqlMonth;

    while(query.next())
    {
        //将所有账户进行保存
        mysqlMonth<<query.value(1).toString();
    }
    //显示所有账户
    ui->accountcbox->addItems(mysqlMonth);

}

Dlogin::~Dlogin()
{
    delete ui;
}


/**
 * @brief 初始化按钮样式和图标
 */
void Dlogin::iniBtn()
{
    ui->closeBtn->setIcon(QIcon(":/pic/close-bold.png"));
    ui->miniBtn->setIcon(QIcon(":/pic/minus-bold.png"));

    ui->txLab->setPixmap(QPixmap(":/pic/user1.png"));
    //设置透明背景,和hover鼠标选取
    this->setStyleSheet("QPushButton#miniBtn"
                        "{border:one;}"
                        "QPushButton#closeBtn"
                        "{border:one;}"
                        "QPushButton#loginBtn"
                        "{background-color:rgb(11,194,255);"
                        " border-radius:5px;"
                        " font:normal 15px;"
                        " color:white;}"
                        "QPushButton#loginBtn:hover"
                        "{background-color:rgb(33,203,254);}"
                        "QPushButton#miniBtn:hover"
                        "{background-color:rgba(190,190,190,100);}"
                        "QPushButton#closeBtn:hover"
                        "{background-color:rgb(255,84,57);}"
                        );

    //改变注册账号样式
    ui->registerBtn->setStyleSheet("QPushButton#registerBtn"
                                   " {border:one;"
                                   "  color:rgb(166,166,166);}"
                                   " QPushButton#registerBtn:hover"
                                   " {color:rgb(80,137,248);}"
                                   );
    //改变找回密码样式
    ui->forgetBtn->setStyleSheet("QPushButton#forgetBtn"
                                 " {border:one;"
                                 "  color:rgb(166,166,166);}"
                                 " QPushButton#forgetBtn:hover"
                                 " {color:rgb(80,137,248);}");
    //改变记住密码控件样式
    ui->rememberCkbx->setStyleSheet("QCheckBox#rememberCkbx"
                                 " {border:one;"
                                 "  color:rgb(166,166,166);}"
                                 " QCheckBox#rememberCkbx:hover"
                                 " {color:rgb(80,137,248);}"
                                    );
    //账号控件样式
    ui->accountcbox->setStyleSheet("QComboBox#accountcbox"
                                   "{border:none;"
                                   " border-bottom:1px solid rgb(229,229,229);"
                                   " font:normal 15px;}"
                                   "QComboBox#accountcbox:hover"
                                   "{border-bottom:1px solid rgb(193,193,193);}"
                                   "QComboBox#accountcbox:focus"
                                   "{border-bottom:1px solid rgb(18,183,245);}"
                                   "QComboBox#accountcbox::drop-down"
                                   "{min-width:25px;"
                                   "border-image: url(:/pic/drop-down.png);}"
                                   "QComboBox#accountcbox::drop-down:hover"
                                   "{border-image: url(:/pic/drop-down-hover.png);}"
                                   );
    //密码控件样式
    ui->passwdEdit->setStyleSheet("QLineEdit#passwdEdit"
                                  "{border:none;"
                                  " border-bottom:1px solid rgb(229,229,229);"
                                  " font:normal 15px;}"
                                  " QLineEdit#passwdEdit:hover"
                                  "{border-bottom:1px solid rgb(193,193,193);}"
                                  " QLineEdit#passwdEdit:focus"
                                  "{border-bottom:1px solid rgb(18,183,245);}"
                                  );

}

/**
 * @brief 鼠标移动窗口功能
 *
 * @param QMouseEvent *event
 */
void Dlogin::mousePressEvent(QMouseEvent *event)
{
    if(event->buttons()&Qt::LeftButton)
    {
        this->m_mousePos=QCursor::pos();
    }
}
/**
 * @brief 鼠标移动窗口功能
 *
 * @param QMouseEvent *event
 */
void Dlogin::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons()&Qt::LeftButton)
    {

        QPoint currentMousePos = QCursor::pos();
        int dx = currentMousePos.x() - this->m_mousePos.x();
        int dy = currentMousePos.y() - this->m_mousePos.y();

        QPoint newPos = this->pos() + QPoint(dx, dy);
        this->move(newPos);

        this->m_mousePos = currentMousePos;
    }
}
/**
 * @brief 鼠标移动窗口功能
 *
 * @param QMouseEvent *event
 */
void Dlogin::mouseReleaseEvent(QMouseEvent *event)
{   Q_UNUSED(event);
    this->m_mousePos=QPointF(0,0);
}

/**
 * @brief 最小化窗口功能槽函数
 *
 */
void Dlogin::on_miniBtn_clicked()
{
    //最小化窗口
    this->showMinimized();
}

/**
 * @brief 关闭窗口槽函数
 *
 */
void Dlogin::on_closeBtn_clicked()
{
    //关闭窗口
    this->close();
}


/**
 * @brief 响应“注册”按钮
 *
 */
void Dlogin::on_registerBtn_clicked()
{
    this->hide();
    Dregister *d_register = new Dregister;
    d_register->show();


}
/**
 * @brief 响应“登录”按钮
 *
 */
 #include"mainwindow.h"
void Dlogin::on_loginBtn_clicked()
{
    QString username = ui->accountcbox->currentText();
    QString password = ui->passwdEdit->text();
    QString sql=QString("select * from user where username='%1' and password='%2'")
                      .arg(username).arg(password);
    //创建执行语句对象
    QSqlQuery query(sql);
    //判断执行结果
    if(!query.next())
    {
        qDebug()<<"Login error";
        QMessageBox::information(this,"登录认证","登录失败,账户或者密码错误");

    }
    else
    {
        qDebug()<<"登录成功";

        DpersonalInfo *d_dpersonalIfo = new DpersonalInfo;

        connect(this,&Dlogin::stuInfo,d_dpersonalIfo,&DpersonalInfo::getInfo);

        emit stuInfo(username,password);
       // d_dpersonalIfo->show();
         MainWindow *w = new MainWindow;
        connect(this,&Dlogin::LoginToMainInfo,w,&MainWindow::getLoginInfo);
        emit LoginToMainInfo(d_dpersonalIfo);
         w->show();
         this->hide();

        //this->close();
    }

    if(query.exec(sql)&&query.next())
    {
        if(ui->rememberCkbx->isChecked())  //判断复选框是否被勾选，如果勾选，数据库标标记记住密码
        {
            //更新数据库将字段为username的那一行，修改tf为"1"代表记住密码
            sql = QString("update user set tf = '%1' where username = '%2'").arg("1").arg(username);
            query.exec(sql);
        }
        else
        {
            //否则 tf写入"0"代表不记住密码
            sql = QString("update user set tf = '%1' where username = '%2'").arg("0").arg(username);
            query.exec(sql);
        }
    }
}
/**
 * @brief 初始化数据库
 *
 */
void sqlite_Init()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("user.db");
    if(!db.open())
    {
        qDebug()<<"打开失败";
    }
    //create excle
    QString createsql = QString("CREATE TABLE IF NOT EXISTS user("
                                "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                                "username NTEXT UNIQUE NOT NULL,"
                                "password NTEXT NOT NULL,"
                                "picture BLOB,"// 添加图片字段，使用 BLOB 类型存储图片数据
                                "tf varchar,"
                                "email varchar,"
                                "userip varchar,"
                                "pname varchar,"
                                "sex varchar,"
                                "num varchar,"
                                "area varchar,"
                                "birth varchar,"
                                "pid varchar,"
                                "phone varchar,"
                                "class varchar"
                                ")");
    QSqlQuery query;
    if(!query.exec(createsql)){
        qDebug()<<"创建表失败";
    }
    else{
        qDebug()<<"创建表成功";
    }
}
/**
 * @brief 响应“忘记密码”按钮
 *
 */
void Dlogin::on_forgetBtn_clicked()
{
    this->hide();
    Dforget *d_forget = new Dforget;
    d_forget->show();
}
/**
 * @brief 响应“记住密码”功能
 *
 */
void Dlogin::printfText()
{
    QSqlQuery query;
    //遍历账户
    query.exec("select * from user");

    //保存账号 假定最多5个账户
    QString account_qstr[10];

    //保存账户是否记录密码
    QString remember_qstr[10];
    //用于数组
    int i = 0;
    int j = 0;
    while(query.next())
    {
        //保存遍历值
        account_qstr[i++] = query.value(2).toString();//第二个字段 userpassworld
        remember_qstr[j++] = query.value(4).toString();//第四个字段 tf
    }
    ui->passwdEdit->setText(NULL);

    //ui->accountcbox->currentIndex()==0代表下拉列表框第一个选项 再判断tf是否为"1" 如果条件成立，则显示密码
    if(ui->accountcbox->currentIndex()==0 && remember_qstr[0]=="1")
    {
        qDebug()<<"1";
        ui->passwdEdit->setText(account_qstr[0]);
    }
    if(ui->accountcbox->currentIndex()==1 && remember_qstr[1]=="1")
    {
        ui->passwdEdit->setText(account_qstr[1]);
    }
    if(ui->accountcbox->currentIndex()==2 && remember_qstr[2]=="1")
    {
        ui->passwdEdit->setText(account_qstr[2]);
    }
    if(ui->accountcbox->currentIndex()==3 && remember_qstr[3]=="1")
    {
        ui->passwdEdit->setText(account_qstr[3]);
    }
    if(ui->accountcbox->currentIndex()==4 && remember_qstr[4]=="1")
    {
        ui->passwdEdit->setText(account_qstr[4]);
    }
}

