#include "addtime.h"
#include "addtime.h"
#include "ui_addtime.h"

addTime::addTime(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addTime)
{
    ui->setupUi(this);
}

addTime::~addTime()
{
    delete ui;
}

QString addTime::getName()
{
    return ui->name_LineEdit->text();
}

QTime addTime::getStartTime()
{
    return ui->start_timeEdit->time();
}

QTime addTime::getEndTime()
{
    return ui->end_timeEdit->time();
}

int addTime::getVolume()
{
    return ui->volume_Slider->value();
}

bool addTime::getFadeInOut()
{
    return ui->fade_checkBox->isChecked();
}

QString addTime::setName(QString string)
{
    ui->name_LineEdit->setText(string);
}

QTime addTime::setStartTime(QTime time)
{
    ui->start_timeEdit->setTime(time);
}

QTime addTime::setEndTime(QTime time)
{
    ui->start_timeEdit->setTime(time);
}

int addTime::setVolume(int value)
{
    ui->volume_Slider->setValue(value);
}

bool addTime::setFadeInOut(bool boolean)
{
    ui->fade_checkBox->setChecked(boolean);
}

void addTime::on_volume_Slider_sliderMoved(int position)
{
    ui->volume_Label->setText("Volume: " + QString::number(position) + "%");
    QTimer::singleShot(5000, this, SLOT(resetLabel()));
}

void addTime::resetLabel()
{
    ui->volume_Label->setText("Volume");
}

void addTime::on_buttonBox_accepted()
{

}

void addTime::on_buttonBox_rejected()
{

}
