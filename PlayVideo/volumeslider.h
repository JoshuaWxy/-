#ifndef VOLUMESLIDER_H
#define VOLUMESLIDER_H

#include <QDialog>

namespace Ui {
class volumeSlider;
}

class volumeSlider : public QDialog
{
    Q_OBJECT

public:
    explicit volumeSlider(QWidget *parent = nullptr);
    ~volumeSlider();
signals:
void volumeValue(int);
private slots:
    void on_verticalSlider_valueChanged(int value);

    void on_verticalSlider_sliderMoved(int position);

private:
    Ui::volumeSlider *ui;
};

#endif // VOLUMESLIDER_H
