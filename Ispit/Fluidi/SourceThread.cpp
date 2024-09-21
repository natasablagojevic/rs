#include "SourceThread.h"
#include <QRandomGenerator>
#include <QMutexLocker>
#include <QtGlobal>

SourceThread::SourceThread(QVector<Source *> sources, QMutex *mutex, QObject *parent)
    : QThread{parent},
    m_sources(sources),
    m_mutex(mutex)
{}

void SourceThread::run()
{

    while (1) {

        auto msleep = (QRandomGenerator::global()->generate() % 6) * 100u + 500u;

        sleep(msleep);

        QMutexLocker locker(m_mutex);

        const auto nasumicna_zapremina = QRandomGenerator::global()->bounded(100,200);
        const auto index = QRandomGenerator::global()->generate() % m_sources.size();


        if (m_sources[index]->getZapremina() == 0u)
            continue;

        const auto isticanje_zapremine = qMin(static_cast<uint>(m_sources[index]->getZapremina()), static_cast<uint>(nasumicna_zapremina));
        m_sources[index]->setZapremina(isticanje_zapremine);

        emit isticanje(isticanje_zapremine);

        if (m_sources[index]->getZapremina() == 0u)
            break;
    }


}
