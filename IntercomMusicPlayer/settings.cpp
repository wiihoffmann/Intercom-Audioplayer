#include "settings.h"
#include "ui_settings.h"

Settings::Settings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Settings)
{
    ui->setupUi(this);
    this->setWindowTitle("Settings");
    this->setWindowFlag(Qt::WindowContextHelpButtonHint, false);

    BASS_DEVICEINFO *info = new BASS_DEVICEINFO();
    for(int a = 0; BASS_GetDeviceInfo(a, info); a++)
    {
        ui->OutputList_ComboBox->addItem(info->name, info->name);
        ui->OutputList2_ComboBox->addItem(info->name, info->name);
        ui->OutputList3_ComboBox->addItem(info->name, info->name);
    }

    ui->HZ_ComboBox->addItem("44.1kHz");
    ui->HZ_ComboBox->addItem("48kHz");

    ui->OutputList_ComboBox->setCurrentIndex(device);

}

Settings::~Settings()
{
    delete ui;
}

void Settings::on_Volume_Slider_sliderMoved(int position)
{
    ui->Volume_Label->setText(QString("Volume: %1%").arg(QString::number(position)));
    QTimer::singleShot(5000, this, SLOT(Volume_Label()));
}

void Settings::setDevice(int devices)
{
    ui->OutputList_ComboBox->setCurrentIndex(devices);
    this->device = devices;
}

void Settings::setDevice1(int devices)
{
    ui->OutputList2_ComboBox->setCurrentIndex(devices);
}

void Settings::setDevice2(int devices)
{
    ui->OutputList3_ComboBox->setCurrentIndex(devices);
}

void Settings::Volume_Label()
{
    ui->Volume_Label->setText("Volume");
}

QString Settings::getDevice()
{
    return QString::number(ui->OutputList_ComboBox->currentIndex());
}

void Settings::setVolume(double volume)
{
    ui->Volume_Slider->setValue(volume);
}

double Settings::getVolume()
{
    return ui->Volume_Slider->value();
}

void Settings::on_buttonBox_accepted()
{

}

void Settings::on_buttonBox_rejected()
{

}

QString Settings::getDevice1()
{
    return QString::number(ui->OutputList2_ComboBox->currentIndex());
}

QString Settings::getDevice2()
{
    return QString::number(ui->OutputList3_ComboBox->currentIndex());
}

bool Settings::getPress()
{
    return ui->Button_Checkbox->isChecked();
}

void Settings::setPress(bool boolean)
{
    ui->Button_Checkbox->setChecked(boolean);
}

void Settings::setPlaylist(bool boolean)
{
    ui->Playlist_Checkbox->setChecked(boolean);
}

bool Settings::getPlaylist()
{
    return ui->Playlist_Checkbox->isChecked();
}

void Settings::setSampleRate(int rate)
{
    if(rate == 44100)
    {
        ui->HZ_ComboBox->setCurrentIndex(0);
    }else if(rate == 48000){
        ui->HZ_ComboBox->setCurrentIndex(1);
    }
}

int Settings::getSampleRate()
{
    if(ui->HZ_ComboBox->currentIndex() == 0)
    {
        return 44100;
    }else if(ui->HZ_ComboBox->currentIndex() == 1){
        return 48000;
    }
}

void Settings::setRandom(bool boolean)
{
    ui->Random_Checkbox->setChecked(boolean);
}

bool Settings::getRandom()
{
    return ui->Random_Checkbox->isChecked();
}

void Settings::setFade(int value)
{
    ui->fade_Slider->setValue(value);
}

int Settings::getFade()
{
    return ui->fade_Slider->value();
}


void Settings::on_fade_CheckBox_clicked(bool checked)
{
    if(checked == false)
    {
        ui->fade_Slider->setEnabled(false);
    }else{
        ui->fade_Slider->setEnabled(true);
    }
}

void Settings::setNoDial(bool boolean)
{
    ui->noDialTone_Checkbox->setChecked(boolean);
}

bool Settings::getNoDial()
{
    return ui->noDialTone_Checkbox->isChecked();
}
