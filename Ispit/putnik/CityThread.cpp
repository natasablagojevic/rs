#include "CityThread.h"
#include <QMutexLocker>
#include <QRandomGenerator>

#include <iostream>

CityThread::CityThread(QVector<City *> cities, QObject *parent)
    : QThread{parent},
    m_cities(cities)
{}

void CityThread::run()
{
    const auto iterNum = QRandomGenerator::global()->bounded(3, 7);
    uint index;

    auto predjeni_put = 0u;

    for (auto i = 0; i < iterNum; i++) {
        const auto msleepTime = QRandomGenerator::global()->bounded(2, 10);
        sleep(msleepTime);


        if (i == 0) {
            index = QRandomGenerator::global()->generate() % m_cities.size();
        } else {
            auto new_index = QRandomGenerator::global()->generate() % (m_cities.size() - 1);

            if (new_index >= index)
                new_index++;

            {
                QMutexLocker locker1(&m_cities[index]->m_mutex);
                predjeni_put += m_cities[index]->distance(m_cities[new_index]);
            }

            std::cout << predjeni_put << std::endl;

            index = new_index;
        }


        QMutexLocker locker(&m_cities[index]->m_mutex);
        QString article = m_cities[index]->getRandomArticle();

        if (!article.isEmpty())
            emit takenArticle(article);


    }

    emit distance(predjeni_put);
}
