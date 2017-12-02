#include "settings.h"
#include "ui_settings.h"

Settings::Settings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Settings)
{
    ui->setupUi(this);
    this->setWindowTitle("Settings");
    /*foreach(const QAudioDeviceInfo &info, QAudioDeviceInfo::availableDevices(QAudio::AudioOutput))
    {
        ui->OutputList_ComboBox->addItem(info.deviceName(), info.deviceName());
    }*/
    //auto outputs = MFAudioEndpointControl_Fixed::availableOutputsFriendly();
    //for (auto it = outputs.cbegin(), e = outputs.cend(); it != e; ++it)
    //{
    //    this->ui->OutputList_ComboBox->addItem(it.key(), it.value());
        //this->ui->plainTextEdit->appendPlainText(it.key() + " (" + it.value() + ")");
    //}
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
    //qDebug() << device;

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
