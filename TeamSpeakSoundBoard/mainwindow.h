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
#include "settings.h"
#include "bass.h"
#include "bass_fx.h"
#include "extra_button.h"

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

public slots:

    void on_Button_Clicked();

private:
    Ui::MainWindow *ui;

    QWidget *widget;
    QVBoxLayout *layout;
    QMediaPlayer player;

    QString OutputDevice;
    QString OutputDevice1;
    QString OutputDevice2;
    HSTREAM stream;
    HSTREAM stream1;
    HSTREAM stream2;

    int noblemove = 0;
    int num_Button = -1;
    int device = 1;
    int device1 = 2;
    int device2 = 3;
    int Samplerate = 44100;
    int current_song_number = -1;
    int Mode = 0; // 0 = Soundboard, 1 = Playlist

    double volume = 0.5;

    bool ifpause = false;
    bool ifremove = false;
    bool ifpress = false;
    bool ifrepeat = false;
    bool ifplaylist = false;
    bool ifedit = false;

    QPushButton *current;
    QPushButton *editcurrent;
    QList<QPushButton*> buttons;

    DWORD StreamState;
    QTimer *timer;
    Extra_Button *E_Button;

    static void CALLBACK EndSyncProc(HSYNC handle, DWORD channel, DWORD data, void *user);
};

#endif // MAINWINDOW_H
