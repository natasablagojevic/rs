#ifndef CELLTHREAD_H
#define CELLTHREAD_H

#include <QObject>
#include <QThread>
#include "./Room.h"
#include <QMutex>

class CellThread : public QThread
{
    Q_OBJECT
public:
    explicit CellThread(Room *room, uint i, uint j, QMutex *mutex,QObject *parent = nullptr);

protected:
    void run() override;

signals:
    void temperatureCalculated(uint i, uint j);

private:
    uint m_i;
    uint m_j;
    Room *m_room;
    QMutex *m_mutex;

};

#endif // CELLTHREAD_H
