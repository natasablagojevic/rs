#include "CityThread.h"
#include <QRandomGenerator>
#include <QMutex>
#include <QMutexLocker>

CityThread::CityThread(QVector<City *> *cities, QObject *parent)
    : QThread{parent},
    m_cities(cities)
{}

void CityThread::run()
{
    const auto iterations = QRandomGenerator::global()->bounded(3, 7);
    auto predjeni_put = 0u;
    auto index = 0;

    for (auto i = 0; i < iterations; i++) {
        const auto msleep = QRandomGenerator::global()->bounded(2, 30);

        sleep(msleep);

        if (i == 0) {
            index = QRandomGenerator::global()->generate() % m_cities->size();
        } else {
            auto new_index = QRandomGenerator::global()->generate() % (m_cities->size() - 1);

            if (new_index >= index)
                new_index++;

            predjeni_put += (*m_cities)[index]->distance(*(*m_cities)[i]);

            index = new_index;
        }

        QMutexLocker locker(&(*m_cities)[index]->m_mutex);

        const auto randomArticle = (*m_cities)[index]->getRandomArticle();

        if (!randomArticle.isEmpty())
            emit takenArticle(randomArticle);
    }

    emit predjeniPut(predjeni_put);
}
