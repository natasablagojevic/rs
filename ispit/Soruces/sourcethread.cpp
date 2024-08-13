#include "sourcethread.h"
#include <QRandomGenerator>
#include <QMutexLocker>
#include "./source.h"

SourceThread::SourceThread(QVector<Source *> sources, QMutex *mutex, QObject *parent)
    : QThread(parent), m_sources(sources), m_mutex(mutex)
{}

void SourceThread::run()
{
    while (true) {
        const auto sleepTime = 100u * (QRandomGenerator::global()->generate() % 6 ) + 500u;
        msleep(sleepTime);

        QMutexLocker locker(m_mutex);

        const auto index = QRandomGenerator::global()->generate() % m_sources.size();
        const auto fluidLeft = m_sources[index]->getValue();

        if (fluidLeft == 0u)
            continue;

        const auto fluidLost = qMin((QRandomGenerator::global()->generate() % 100 ) + 100u, fluidLeft);
        // const auto fluidLost = QRandomGenerator::global()->bounded(100, 201);

        m_sources[index]->runOut(fluidLost);

        emit sourceLostFluid(fluidLost);

        if (m_sources[index]->getValue() == 0u)
            break;
    }
}
