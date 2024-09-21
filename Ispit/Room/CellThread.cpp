#include "CellThread.h"
#include <QMutexLocker>

CellThread::CellThread(Room *room, uint i, uint j, QMutex *mutex, QObject *parent)
    : QThread{parent},
    m_i(i),
    m_j(j),
    m_room(room),
    m_mutex(mutex)
{}

void CellThread::run()
{
    msleep(1000);

    {
        QMutexLocker locker(m_mutex);
        auto tempDiff = 0.0;

        tempDiff += m_room->getTemperatureDiffFromCellAbove(m_i, m_j);
        tempDiff += m_room->getTemperatureDiffFromCellBelow(m_i, m_j);
        tempDiff += m_room->getTemperatureDiffFromCellLeft(m_i, m_j);
        tempDiff += m_room->getTemperatureDiffFromCellRight(m_i, m_j);

        m_room->updateNewTemperatureForCell(m_i, m_j, tempDiff);

    }
    emit temperatureCalculated(m_i, m_j);
}


