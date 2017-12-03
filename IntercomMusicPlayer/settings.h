#ifndef SETTINGS_H
#define SETTINGS_H

#include <QDialog>
#include <QTimer>
#include <QAudioDeviceInfo>
#include <QDebug>
#include "bass.h"

namespace Ui {
class Settings;
}

class Settings : public QDialog
{
    Q_OBJECT

public:
    explicit Settings(QWidget *parent = 0);
    ~Settings();

    void setDevice(int devices);

    void setDevice1(int devices);

    void setDevice2(int devices);

    QString getDevice();

    QString getDevice1();

    QString getDevice2();

    void setVolume(double volume);

    double getVolume();

    void setPress(bool boolean);

    bool getPress();

    void setPlaylist(bool boolean);

    bool getPlaylist();

    void setSampleRate(int rate);

    int getSampleRate();

    void setRandom(bool boolean);

    bool getRandom();

    void setFade(int value);

    int getFade();

private slots:
    void on_Volume_Slider_sliderMoved(int position);

    void Volume_Label();

    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::Settings *ui;
    int device;
};

#endif // SETTINGS_H
