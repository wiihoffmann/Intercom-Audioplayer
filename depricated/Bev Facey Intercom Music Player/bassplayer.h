#ifndef BASSPLAYER_H
#define BASSPLAYER_H

#include <QObject>
#include <QDebug>
#include "bass.h"

class BassPlayer : public QObject
{
    Q_OBJECT
public:
    explicit BassPlayer(QObject *parent = 0);

signals:

public slots:

private:

    void Init();

    HSTREAM stream;

    DWORD StreamState;
};

#endif // BASSPLAYER_H
