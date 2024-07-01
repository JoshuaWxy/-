#ifndef NOTEPAD_H
#define NOTEPAD_H

#include "qtextedit.h"
#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui {
class notePad;
}
QT_END_NAMESPACE

class notePad : public QDialog
{
    Q_OBJECT

public:
    notePad(QWidget *parent = nullptr);
    ~notePad();

    QTextEdit *getCurrentTextEdit();
private slots:

    void on_btn_new_clicked();

    void on_btn_open_clicked();

    void on_btn_save_clicked();

    void on_btn_cut_clicked();

    void on_btn_copy_clicked();

    void on_btn_paste_clicked();

    void on_spinBox_size_valueChanged(int value);

    void on_btn_Bold_clicked(bool checked);

    void on_btn_xieti_clicked(bool checked);

    void on_btn_underline_clicked(bool checked);

    void on_btn_getcolor_clicked();

    void on_btn_auto_clicked();

    void on_btn_left_clicked();

    void on_btn_right_clicked();

    void on_btn_cuten_clicked();

    void on_btn_bothsort_clicked();

    void on_btn_onetitle_clicked();

    void on_btn_twotitle_clicked();

    void on_btn_threetitle_clicked();

    void on_btn_closeall_clicked();

    void on_btn_mainstyl_currentTextChanged(const QString &arg1);

    void on_t_color_triggered(QAction *arg1);

    void on_btn_psave_clicked();

    void on_btn_paint_clicked();

    void on_font_combox_currentFontChanged(const QFont &f);

private:
    Ui::notePad *ui;
    QString getFile(bool save=false);
};
#endif // NOTEPAD_H
