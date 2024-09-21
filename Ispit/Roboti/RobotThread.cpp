#include "RobotThread.h"
#include <QMutexLocker>
#include <QRandomGenerator>

RobotThread::RobotThread(Robot *r1, Robot *r2, uint i, uint j, QObject *parent)
    : QThread{parent},
    m_robot1(r1), m_robot2(r2), m_i(i), m_j(j)
{}

void RobotThread::run()
{
    QMutexLocker lock1(&m_robot1->m_mutex);
    QMutexLocker lock2(&m_robot2->m_mutex);

    while (1) {
        sleep(1000);

        auto napadac = QRandomGenerator::global()->bounded(1, 2 + 1);

        if (napadac == 1 && m_robot1->attack(m_robot2))  {
            emit zavrseno(m_i, m_j);
        } else if (napadac == 2 && m_robot2->attack(m_robot1)) {
            emit zavrseno(m_j, m_i);
            break;
        }
    }
}
