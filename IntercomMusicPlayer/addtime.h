#ifndef ADDTIME_H
#define ADDTIME_H

#include <QDialog>
#include <QTime>
#include <QTimer>
#include <QMessageBox>

namespace Ui {
class addTime;
}

class addTime : public QDialog
{
    Q_OBJECT

public:
    explicit addTime(QWidget *parent = 0);
    ~addTime();

    QString getName();

    QTime getStartTime();

    QTime getEndTime();

    int getVolume();

    bool getFadeInOut();


    QString setName(QString string);

    QTime setStartTime(QTime time);

    QTime setEndTime(QTime time);

    int setVolume(int value);

    bool setFadeInOut(bool boolean);

private slots:
    void on_volume_Slider_sliderMoved(int position);

    void resetLabel();

    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::addTime *ui;
};

#endif // ADDTIME_H
