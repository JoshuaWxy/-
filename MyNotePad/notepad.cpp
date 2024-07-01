#include "notepad.h"
#include "qmenu.h"
#include "text.h"
#include"painter.h"
#include "ui_notepad.h"
#include<QMdiSubWindow>
#include <QDir>
#include <QFileDialog>
#include <QTextEdit>
#include <QClipboard>//cut
#include<QColorDialog>
#include<QMouseEvent>
#include <QMessageBox>
#include<QMenu>
#include <QToolButton>
#include<QDialog>
notePad::notePad(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::notePad)
{
    ui->setupUi(this);
    ui->spinBox_size->setValue(5);
    //setWindowState(Qt::WindowMaximized);  //窗口最大化显示

    QMenu *color = new QMenu();
    this->setWindowIcon(QPixmap(":/res/note.png"));
    color->addAction("红色");
    color->addAction("黄色");
    color->addAction("绿色");
    color->addAction("黑色");
    color->addAction("粉色");
    ui->t_color->setMenu(color);
}

notePad::~notePad()
{
    delete ui;
}
/**
  * @brief 获取当前活跃的子窗口
*/
QTextEdit* notePad::getCurrentTextEdit()
{
    // 获取当前活动的子窗口
    QMdiSubWindow *activeSubWindow = ui->mdiArea->activeSubWindow();
    if (!activeSubWindow) {
        return nullptr;
    }

    // 获取当前活动子窗口中的 QTextEdit
    QWidget *widget = activeSubWindow->widget();
    if (!widget) {
        return nullptr;
    }

    QTextEdit *textEdit = widget->findChild<QTextEdit *>();


    return textEdit;
}

/**
  * @brief 新建文本
*/
void notePad::on_btn_new_clicked()
{
    text *formDoc = new text(this);
    ui->mdiArea->addSubWindow(formDoc);     //文档窗口添加到MDI
    formDoc->show();    //在单独的窗口中显示

    ui->btn_cut->setEnabled(true);
    ui->btn_copy->setEnabled(true);
    ui->btn_paste->setEnabled(true);



}
/**
   @brief 打开文件  //必须先获取当前MDI子窗口，再使用打开文件对话框，否则无法获得活动的子窗口
*/
void notePad::on_btn_open_clicked()
{

    bool needNew=false;     // 是否需要新建子窗口

    text    *formDoc;
    if (ui->mdiArea->subWindowList().size()>0) //如果有打开的主窗口，获取活动窗口
    {
        formDoc=(text*)ui->mdiArea->activeSubWindow()->widget();
        needNew=formDoc->isFileOpened();        //文件已经打开，需要新建窗口
    }
    else
        needNew=true;

    QString curPath=QDir::currentPath();
    QString aFileName=QFileDialog::getOpenFileName(this,tr("打开一个文件"),curPath,
                                                     "C程序文件(*.h *cpp);;文本文件(*.txt);;所有文件(*.*)");
    if (aFileName.isEmpty())
        return;     //如果未选择文件，退出

    if (needNew)    //需要新建子窗口
    {
        formDoc = new text(this);   //指定父窗口，必须在父窗口为Widget窗口提供一个显示区域
        ui->mdiArea->addSubWindow(formDoc);
    }
    formDoc->loadFromFile(aFileName);   //打开文件
    formDoc->show();

    ui->btn_cut->setEnabled(true);
    ui->btn_copy->setEnabled(true);
    ui->btn_paste->setEnabled(true);

}
//
/**
  * @brief 捕捉文本位置
 @param save
*/
QString notePad::getFile(bool save)
{

    QString curPath=QCoreApplication::applicationDirPath();
    QString dlgTitle="选择一个文件";
    QString filter="程序文件(*.h *.cpp);;文本文件(*.txt);;所有文件(*.*)";
    QString aFileName;
    if(save)
        aFileName=QFileDialog::getSaveFileName(this,dlgTitle,curPath,filter);
    else
        aFileName=QFileDialog::getOpenFileName(this,dlgTitle,curPath,filter);
    if(aFileName.isEmpty())
        return aFileName;

    QFileInfo QFileInfo(aFileName);
    QDir::setCurrent(QFileInfo.absoluteFilePath());
    return aFileName;
}

/**
  * @brief 保存文本到本地文件
*/
void notePad::on_btn_save_clicked()
{
    if (!ui->mdiArea) {
        return;
    }
    QTextEdit *textEdit = getCurrentTextEdit();
    if (!textEdit) {
        return;
    }
    QString str = textEdit->toPlainText();
    QFile aFile(getFile(true));
    if (!aFile.open(QIODevice::WriteOnly | QIODevice::Text)) {
        return;
    }
    qint64 bytesWritten = aFile.write(str.toUtf8());
    if (bytesWritten == -1) {
        aFile.close();
        return;
    }
    aFile.close();
}
/**
  * @brief 实现裁剪功能
*/
void notePad::on_btn_cut_clicked()
{
    QTextEdit *textEdit = getCurrentTextEdit();
    if (!textEdit) {
        return;
    }
    // 获取选中的文本
    QString selectedText = textEdit->textCursor().selectedText();
    // 将选中的文本放入剪贴板
    QClipboard *clipboard = QApplication::clipboard();
    clipboard->setText(selectedText);
    // 删除选中的文本
    QTextCursor cursor = textEdit->textCursor();
    cursor.removeSelectedText();
    // 将光标移到末尾以保持焦点位置
    textEdit->setFocus();
}

/**
  * @brief 实现复制功能 相比裁剪多加一个clipboard
*/
void notePad::on_btn_copy_clicked()
{
    QTextEdit *textEdit = getCurrentTextEdit();
    if (!textEdit) {
        return;
    }
    // 获取选中的文本
    QString selectedText = textEdit->textCursor().selectedText();

    // 将选中的文本放入剪贴板
    QClipboard *clipboard = QApplication::clipboard();
    clipboard->setText(selectedText);
    // 将光标移到末尾以保持焦点位置
    textEdit->setFocus();
}
/**
  * @brief 实现粘贴功能
*/
void notePad::on_btn_paste_clicked()
{
    QTextEdit *textEdit = getCurrentTextEdit();
    if (!textEdit) {
        return;
    }
    // 从剪贴板中获取文本
    QClipboard *clipboard = QApplication::clipboard();
    QString textFromClipboard = clipboard->text();

    // 在光标位置插入文本
    QTextCursor cursor = textEdit->textCursor();
    cursor.insertText(textFromClipboard);
    // 将光标移到末尾以保持焦点位置
    textEdit->setFocus();
}
/**
  * @brief 通过改变spinbox的值来调整字体大小
 @param value
*/
void notePad::on_spinBox_size_valueChanged(int value)
{
    QTextEdit *textEdit = getCurrentTextEdit();
    if (!textEdit) {
        return;
    }
    // 获取当前选中的文本范围
    QTextCursor cursor = textEdit->textCursor();
    if (!cursor.hasSelection()) {
        return;
    }

    // 设置所选文本的字体大小
    QTextCharFormat format;
    format.setFontPointSize(value);
    cursor.mergeCharFormat(format);

    // 更新 spinBox 的值
    ui->spinBox_size->setValue(value);
    // 将光标移到末尾以保持焦点位置
    textEdit->setFocus();
}

/**
  * @brief 实现选中文本粗体功能
 @param checked
*/
void notePad::on_btn_Bold_clicked(bool checked)
{
    Q_UNUSED(checked);
    QTextEdit *textEdit = getCurrentTextEdit();
    if (!textEdit) {
        return;
    }
    QTextCharFormat fmt = textEdit->textCursor().charFormat();

    // 检查当前文本的粗体属性，然后进行相应的切换
    if (fmt.fontWeight() == QFont::Bold)
        fmt.setFontWeight(QFont::Normal);
    else
        fmt.setFontWeight(QFont::Bold);

    textEdit->setCurrentCharFormat(fmt);

    // 将光标移到末尾以保持焦点位置
    textEdit->setFocus();
}

/**
  * @brief 实现斜体功能
 @param checked
*/
void notePad::on_btn_xieti_clicked(bool checked)
{
    Q_UNUSED(checked);
    QTextEdit *textEdit = getCurrentTextEdit();
    if (!textEdit) {
        return;
    }
    QTextCharFormat fmt = textEdit->textCursor().charFormat();
    // 检查当前文本的斜体属性，然后进行相应的切换
    if (fmt.fontItalic())
        fmt.setFontItalic(false);
    else
        fmt.setFontItalic(true);

    textEdit->setCurrentCharFormat(fmt);

    // 将光标移到末尾以保持焦点位置
    textEdit->setFocus();
}
/**
  * @brief 实现下划线功能
 @param check
*/
void notePad::on_btn_underline_clicked(bool checked)
{
    Q_UNUSED(checked);
    QTextEdit *textEdit = getCurrentTextEdit();
    if (!textEdit) {
        return;
    }
    QTextCharFormat fmt = textEdit->textCursor().charFormat();

    // 检查当前文本的下划线属性，然后进行相应的切换
    if (fmt.fontUnderline())
        fmt.setFontUnderline(false);
    else
        fmt.setFontUnderline(true);

    textEdit->setCurrentCharFormat(fmt);

    // 将光标移到末尾以保持焦点位置
    textEdit->setFocus();
}
/**
  * @brief 实现获取颜色版来改变选中文字颜色
*/
void notePad::on_btn_getcolor_clicked()
{ QTextEdit *textEdit = getCurrentTextEdit();
    if (!textEdit) {
        return;
    }
    // 从颜色对话框获取用户选择的颜色
    QColor color = QColorDialog::getColor(Qt::black, this, "Select Color");
    if (!color.isValid()) {
        return;
    }

    QTextCharFormat fmt = textEdit->textCursor().charFormat();

    // 设置文本颜色为用户选择的颜色
    fmt.setForeground(color);

    textEdit->setCurrentCharFormat(fmt);

    // 将光标移到末尾以保持焦点位置
    textEdit->setFocus();
}
/**
  * @brief 实现多个子窗口textEdit与fream适应屏幕大小--miderae
*/
void notePad::on_btn_auto_clicked()
{
    ui->mdiArea->tileSubWindows();
}
/**
  * @brief 实现左对齐
*/
void notePad::on_btn_left_clicked()
{
    QTextEdit *textEdit = getCurrentTextEdit();
    if (!textEdit) {
        return;
    }
    // 获取当前文本编辑区的光标
    QTextCursor cursor = textEdit->textCursor();

    // 获取选中的文本
    QString selectedText = cursor.selectedText();

    // 如果没有选中文本，则返回
    if (selectedText.isEmpty()) {
        return;
    }

    // 将选中文本的对齐方式设置为左对齐
    QTextBlockFormat format;
    format.setAlignment(Qt::AlignLeft);
    cursor.mergeBlockFormat(format);

    // 将修改后的光标应用到文本编辑区
    textEdit->setTextCursor(cursor);
}
/**
  * @brief 实现右对齐
*/
void notePad::on_btn_right_clicked()
{
    QTextEdit *textEdit = getCurrentTextEdit();
    if (!textEdit) {
        return;
    }
    // 获取当前文本编辑区的光标
    QTextCursor cursor = textEdit->textCursor();

    // 获取选中的文本
    QString selectedText = cursor.selectedText();

    // 如果没有选中文本，则返回
    if (selectedText.isEmpty()) {
        return;
    }

    // 将选中文本的对齐方式设置为右对齐
    QTextBlockFormat format;
    format.setAlignment(Qt::AlignRight);
    cursor.mergeBlockFormat(format);

    // 将修改后的光标应用到文本编辑区
    textEdit->setTextCursor(cursor);
}

/**
  * @brief 实现居中对齐
*/
void notePad::on_btn_cuten_clicked()
{
    QTextEdit *textEdit = getCurrentTextEdit();
    if (!textEdit) {
        return;
    }
    // 获取当前文本编辑区的光标
    QTextCursor cursor = textEdit->textCursor();

    // 获取选中的文本
    QString selectedText = cursor.selectedText();

    // 如果没有选中文本，则返回
    if (selectedText.isEmpty()) {
        return;
    }

    // 将选中文本的对齐方式设置为居中对齐
    QTextBlockFormat format;
    format.setAlignment(Qt::AlignCenter);
    cursor.mergeBlockFormat(format);

    // 将修改后的光标应用到文本编辑区
    textEdit->setTextCursor(cursor);
}

/**
  * @brief 实现文本分散中心对齐
*/
void notePad::on_btn_bothsort_clicked()
{
    QTextEdit *textEdit = getCurrentTextEdit();
    if (!textEdit) {
        return;
    }
    // 获取当前文本编辑区的光标
    QTextCursor cursor = textEdit->textCursor();

    // 获取选中的文本
    QString selectedText = cursor.selectedText();

    // 如果没有选中文本，则返回
    if (selectedText.isEmpty()) {
        return;
    }

    // 将选中文本的对齐方式设置为分散对齐
    QTextBlockFormat format;
    format.setAlignment(Qt::AlignJustify);
    cursor.mergeBlockFormat(format);

    // 将修改后的光标应用到文本编辑区
    textEdit->setTextCursor(cursor);
}
/**
  * @brief 实现一级标题
*/
void notePad::on_btn_onetitle_clicked()
{   QTextEdit *textEdit = getCurrentTextEdit();
    if (!textEdit) {
        return;
    }

    // 获取当前文本编辑区的光标
    QTextCursor cursor = textEdit->textCursor();

    // 获取选中的文本
    QString selectedText = cursor.selectedText();

    // 如果没有选中文本，则返回
    if (selectedText.isEmpty()) {
        return;
    }

    // 将选中文本设置为一级标题
    QTextCharFormat format;
    format.setFontWeight(QFont::Bold);  // 设置粗体
    format.setFontPointSize(16);        // 设置字体大小
    format.setVerticalAlignment(QTextCharFormat::AlignTop);  // 设置垂直对齐方式
    cursor.mergeCharFormat(format);

    // 更新文本
    textEdit->setTextCursor(cursor);

}
/**
  * @brief 实现二级标题
*/
void notePad::on_btn_twotitle_clicked()
{

    QTextEdit *textEdit = getCurrentTextEdit();
    if (!textEdit) {
        return;
    }
    // 获取当前文本编辑区的光标
    QTextCursor cursor = textEdit->textCursor();

    // 获取选中的文本
    QString selectedText = cursor.selectedText();

    // 如果没有选中文本，则返回
    if (selectedText.isEmpty()) {
        return;
    }

    // 将选中文本设置为二级标题
    QTextCharFormat format;
    format.setFontWeight(QFont::Bold);  // 设置粗体
    format.setFontPointSize(14);        // 设置字体大小
    format.setVerticalAlignment(QTextCharFormat::AlignTop);  // 设置垂直对齐方式
    cursor.mergeCharFormat(format);

    // 更新文本
    textEdit->setTextCursor(cursor);
}
/**
  * @brief 实现三级标题
*/
void notePad::on_btn_threetitle_clicked()
{
    QTextEdit *textEdit = getCurrentTextEdit();
    if (!textEdit) {
        return;
    }
    // 获取当前文本编辑区的光标
    QTextCursor cursor = textEdit->textCursor();

    // 获取选中的文本
    QString selectedText = cursor.selectedText();

    // 如果没有选中文本，则返回
    if (selectedText.isEmpty()) {
        return;
    }

    // 将选中文本设置为二级标题
    QTextCharFormat format;
    format.setFontWeight(QFont::Bold);  // 设置粗体
    format.setFontPointSize(12);        // 设置字体大小
    format.setVerticalAlignment(QTextCharFormat::AlignTop);  // 设置垂直对齐方式
    cursor.mergeCharFormat(format);

    // 更新文本
    textEdit->setTextCursor(cursor);
}
/**
  * @brief 关闭所有子窗口
*/
void notePad::on_btn_closeall_clicked()
{
    ui->mdiArea->closeAllSubWindows();
}

/**
  * @brief 设置Dialog风格
 @param arg1
*/
void notePad::on_btn_mainstyl_currentTextChanged(const QString &arg1)
{
    Q_UNUSED(arg1);

    QString selectedStyle = ui->btn_mainstyl->currentText();
    // 根据选择的主题风格设置样式表
    if (selectedStyle == "Light Theme") {
        qApp->setStyleSheet("QDialog { background-color: white; color: black; }");
    } else if (selectedStyle == "Dark Theme") {
        qApp->setStyleSheet("QDialog { background-color: #2E2F30; color: white; }");
    }
    else if (selectedStyle == "Ocean Theme") {
        qApp->setStyleSheet("QDialog { background-color: #006994; color: white; }");
    }
    else if (selectedStyle == "Sunset Theme") {
        qApp->setStyleSheet("QDialog { background-color: #FF6F61; color: white; }");
    }
    else if (selectedStyle == "Forest Theme") {
        qApp->setStyleSheet("QDialog { background-color: #228B22; color: white; }");
    }
    else  if (selectedStyle == "Midnight Theme") {
        qApp->setStyleSheet("QDialog { background-color: #191970; color: white; }");
    }
    // 刷新界面
    qApp->processEvents();
}

/**
  * @brief 设置combox来改变字体颜色
 @param arg1
*/
void notePad::on_t_color_triggered(QAction *arg1)
{ QTextEdit *textEdit = getCurrentTextEdit();
    if (!textEdit) {
        return;
    }
    QTextCharFormat fmt = textEdit->textCursor().charFormat();
    QString text =arg1->text();
    if(text=="红色")
    {
        fmt.setForeground(Qt::red); // 设置文本颜色为红色
        textEdit->setCurrentCharFormat(fmt);
    }
    else if(text=="黄色")
    {
        fmt.setForeground(Qt::yellow); // 设置文本颜色为黄色
        textEdit->setCurrentCharFormat(fmt);
    }
    else if(text=="绿色")
    {
        fmt.setForeground(Qt::green); // 设置文本颜色为绿色
        textEdit->setCurrentCharFormat(fmt);
    }
    else if(text=="黑色")
    {
        fmt.setForeground(Qt::black); // 设置文本颜色为黑色
        textEdit->setCurrentCharFormat(fmt);
    }
    else if(text=="粉色")
    {
        fmt.setForeground(QColorConstants::Svg::pink); // 设置文本颜色为粉色
        textEdit->setCurrentCharFormat(fmt);
    }
    // 将光标移到末尾以保持焦点位置
    textEdit->setFocus();
}

/**
  * @brief 实现保存绘图
*/
void notePad::on_btn_psave_clicked()
{
 QMdiSubWindow *activeSubWindow = ui->mdiArea->activeSubWindow();
        // 弹出文件对话框让用户选择保存位置
        QString fileName = QFileDialog::getSaveFileName(this, tr("Save Image"), "", tr("PNG Files (*.png)"));
        if (!fileName.isEmpty()) {
            // 获取 widget 的截图并保存到 QPixmap 中
            QPixmap pixmap =activeSubWindow->grab();
            // 将绘画内容保存为图像文件
            pixmap.save(fileName, "PNG");
        }
}
/**
  * @brief 新建绘图子窗口
*/
void notePad::on_btn_paint_clicked()
{
    painter *p=new painter();
    ui->mdiArea->addSubWindow(p);     //文档窗口添加到MDI
    p->show();    //在单独的窗口中显示
}
/**
  * @brief 实现combox来选择字体的样式
 @param f
*/
void notePad::on_font_combox_currentFontChanged(const QFont &f)
{
    QTextEdit *textEdit = getCurrentTextEdit();
    if (!textEdit) {
        return;
    }
    // 获取当前选中的文本范围
    QTextCursor cursor = textEdit->textCursor();
    if (!cursor.hasSelection()) {
        return;
    }

    // 设置所选文本的字体
    QTextCharFormat format;
    format.setFontFamilies({f.family()});
    cursor.mergeCharFormat(format);

    // 更新字体组合框的当前字体
    ui->font_combox->setCurrentFont(f);
    // 将光标移到末尾以保持焦点位置
    textEdit->setFocus();
}

