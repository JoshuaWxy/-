#ifndef TEXT_H
#define TEXT_H

#include <QWidget>

namespace Ui {
class text;
}

class text : public QWidget
{
    Q_OBJECT

private:
    QString m_filename;             //当前文件
    bool    m_fileOpened=false;     //文件已打开

public:
    explicit text(QWidget *parent = nullptr);
    ~text();
    void    loadFromFile(QString& aFileName);   //打开文件
    bool isFileOpened();
private:
    Ui::text *ui;
};

#endif // TEXT_H
