#include "bassplayer.h"

BassPlayer::BassPlayer(QObject *parent) : QObject(parent)
    //stream(0),
    //StreamState(BASS_ACTIVE_STOPPED)
{
    Init();

}

void BassPlayer::Init()
{
    if(BASS_Init(-1, 44100, 0, NULL, NULL))
    {
        qDebug() << "Sucess";
    }else{
        qDebug() << "Error";
    }
}
