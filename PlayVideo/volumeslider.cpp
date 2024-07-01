#include "volumeslider.h"
#include "ui_volumeslider.h"

volumeSlider::volumeSlider(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::volumeSlider)
{
    ui->setupUi(this);
  setWindowFlag(Qt::FramelessWindowHint);
   setWindowFlag(Qt::MSWindowsFixedSizeDialogHint);

}

volumeSlider::~volumeSlider()
{
    delete ui;
}

void volumeSlider::on_verticalSlider_valueChanged(int value)
{
    emit volumeValue(value);
}


void volumeSlider::on_verticalSlider_sliderMoved(int position)
{
    // emit volumeValue(position);
}

