#include "text.h"
#include "ui_text.h"

#include <QFileInfo>
#include <QMessageBox>

text::text(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::text)
{
    ui->setupUi(this);
    this->setWindowTitle("新建");
    //this->setWindowIcon(QPixmap(":/res/note.png"));

}

text::~text()
{
    delete ui;
}

void text::loadFromFile(QString &aFileName)
{
    //打开文件
    QFile aFile(aFileName);     //以文件方式读出
    if (aFile.open(QIODevice::ReadOnly | QIODevice::Text)) //以只读文本方式打开文件
    {
        QTextStream aStream(&aFile);    //用文本流读取文件
        ui->note_TextEdit->clear();
        ui->note_TextEdit->setPlainText(aStream.readAll()); //读取文本文件
        aFile.close();

        m_filename=aFileName;             //保存当前文件名
        this->setWindowTitle(m_filename);
        QFileInfo   fileInfo(aFileName);    //文件信息
        QString str=fileInfo.fileName();    //去除路径后的文件名
        this->setWindowTitle(str+"[*]");
        m_fileOpened=true;
    }
}

bool text::isFileOpened()
{
    //文件是否已打开
    return m_fileOpened;
}


