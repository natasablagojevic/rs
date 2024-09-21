#include "CityThread.h"
#include <QRandomGenerator>

CityThread::CityThread(QVector<City *> cities, QMutex *mutex, QObject *parent)
    : QThread{parent},
    m_cities(cities),
    m_mutex(mutex)
{}

void CityThread::run()
{
    const auto numIterations = QRandomGenerator::global()->bounded(3, 7);
    auto predjeni_put = 0u;
    uint index;


    for (auto i = 0; i < numIterations; i++) {
        const auto msleepTime = QRandomGenerator::global()->bounded(5, 15);

        sleep(msleepTime);

        if (i == 0) {
            index = QRandomGenerator::global()->generate() % (m_cities.size());
        } else {
            auto novi_index = QRandomGenerator::global()->generate() % (m_cities.size() - 1);

            if (novi_index >= index)
                novi_index++;

            predjeni_put += m_cities[novi_index]->distance(m_cities[index]);

            index = novi_index;
        }

        QMutexLocker locker(m_mutex);
        QString article = m_cities[index]->getRandomArticle();

        if (!article.isEmpty())
            emit artikal(article);
    }

    emit predjeniPut(predjeni_put);
}
