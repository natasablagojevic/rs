#include "sourcethread.h"
#include <QRandomGenerator>
#include <QMutex>
#include <QMutexLocker>

SourceThread::SourceThread(QVector<Source *> sources, QMutex *mutex, QObject *parent)
    : QThread{parent},
    m_sources(sources),
    m_mutex(mutex)
{}

void SourceThread::run()
{
    // obratiti paznju gde se vrsi zakljucavanje!
    // obaveno zakljucavanje nakon spavanja niti

    // kada zakljucavamo, gledamo da zakljucamo sto manje koda!

    while (true) {
        const auto ms = 100u * (QRandomGenerator::global()->generate() % 6) + 500u;
        msleep(ms);

        QMutexLocker lock(m_mutex);

        const auto index = QRandomGenerator::global()->generate() % m_sources.size();
        const auto fluidLeft = m_sources[index]->getVolume(); // max value

        if (fluidLeft == 0u) {
            continue;
        }

        const auto fluidLost = qMin(fluidLeft, QRandomGenerator::global()->generate() % 100 + 100u);
        m_sources[index]->runOut(fluidLost);

        emit sourceLostFluid(fluidLost);

        if (m_sources[index] == 0)
            break;
    }
}
