#include "nit.h"
#include <QRandomGenerator>
#include <QMutexLocker>

Nit::Nit(QVector<City *> *cities, QObject *parent)
    : QThread(parent), m_cities(cities)
{

}

void Nit::run()
{
    auto ponavljanja = QRandomGenerator::global()->bounded(3, 7);
    uint predjeni_put = 0;
    uint city_index = 0;

    for (int i = 0; i != ponavljanja; i++) {
        const auto sleepTime = QRandomGenerator::global()->bounded(250, 500);
        msleep(sleepTime);

        if (i == 0)
            city_index = QRandomGenerator::global()->generate() % m_cities->size();
        else {
            auto new_city_index = QRandomGenerator::global()->generate() % (m_cities->size() - 1);

            if (new_city_index >= city_index)
                new_city_index++;

            predjeni_put += (*m_cities)[city_index]->distance(*(*m_cities)[new_city_index]);

            city_index = new_city_index;
        }

        QMutexLocker locker(&(*m_cities)[city_index]->m_mutex);

        QString product = (*m_cities)[city_index]->getRandomArticle();

        if (!product.isEmpty())
            emit collected(product);
    }

    emit distance(predjeni_put);
}
