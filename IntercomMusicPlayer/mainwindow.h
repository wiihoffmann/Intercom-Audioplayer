#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QVBoxLayout>
#include <QMediaPlayer>
#include <QDebug>
#include <QMediaService>
#include <QAudioOutputSelectorControl>
#include <QMediaMetaData>
#include <QTime>
#include <QTimer>
#include <QMessageBox>
#include <QXmlStreamWriter>
#include <QXmlStreamReader>
#include <QList>
#include <ctime>
#include <math.h>
#include <random>
#include <map>
#include "settings.h"
#include "extra_button.h"
#include "addtime.h"
#include "bass.h"
#include "taglib.h"
#include "fileref.h"
#include "tag.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void listChanged();

private slots:
    void on_ISound_Button_clicked();

    void on_Setting_Button_clicked();

    void playList();

    void setStatus();

    void on_Stop_Button_clicked();

    void on_Pause_Button_clicked();

    void on_Remove_Button_clicked();

    void on_Time_Slider_sliderMoved(int position);

    void on_Time_Slider_sliderPressed();

    void on_Time_Slider_sliderReleased();

    void on_actionSave_Preset_triggered();

    void on_actionOpen_Preset_triggered();

    void on_Secret_Button_clicked();

    void on_Speed_Slider_sliderMoved(int position);

    void on_actionPlaylist_Mode_triggered();

    void on_actionSoundBoard_Mode_triggered();

    void on_Next_Button_clicked();

    void on_Previous_Button_clicked();

    void on_EPlaylist_Button_clicked();

    void on_actionInsert_Sound_triggered();

    void on_one_Button_clicked();

    void on_two_Button_clicked();

    void on_three_Button_clicked();

    void on_four_Button_clicked();

    void on_five_Button_clicked();

    void on_six_Button_clicked();

    void on_seven_Button_clicked();

    void on_eight_Button_clicked();

    void on_nine_Button_clicked();

    void on_asterisk_Button_clicked();

    void on_zero_Button_clicked();

    void on_hash_Button_clicked();

    void on_intercomOn_Button_clicked();

    void on_intercomAll_Button_clicked();

    void on_intercomCancel_Button_clicked();

    void on_addTime_Button_clicked();

    void on_random_Button_clicked();

public slots:
    void on_Button_Clicked();

    void playSound(QString string);

    void setVolume(int value);

    void on_timeButton_Clicked();
private:
    Ui::MainWindow *ui;

    QWidget *widget;
    QWidget *widget1;
    QVBoxLayout *layout;
    QVBoxLayout *layout1;
    QMediaPlayer player;

    QString OutputDevice;
    QString OutputDevice1;
    QString OutputDevice2;
    QString currentTime;
    HSTREAM stream;
    HSTREAM stream1;
    HSTREAM stream2;

    int noblemove = 0;
    int num_TimeButton = 0;
    int device = 1;
    int device1 = 2;
    int device2 = 3;
    int Samplerate = 44100;
    int current_song_number = -1;
    int Mode = 0; // 0 = Soundboard, 1 = Playlist

    double volume = 0.5;
    double presetVolume = 0.5;
    double fade = 0.001;
    double fadeChange = 0.001;
    bool ifpause = false;
    bool ifremove = false;
    bool ifpress = false;
    bool ifrepeat = false;
    bool ifplaylist = false;
    bool ifedit = false;
    bool isFade = false;
    bool ifRandom = false;

    QPushButton *current;
    QPushButton *editcurrent;
    QList<QPushButton*> buttons;
    QList<QPushButton*> buttons1;

    DWORD StreamState;
    QTimer *timer;
    Extra_Button *E_Button;

    std::map<QString, QList<QString>>timePreset;

    static void CALLBACK EndSyncProc(HSYNC handle, DWORD channel, DWORD data, void *user);
};

#endif // MAINWINDOW_H
