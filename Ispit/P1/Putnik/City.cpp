#include "City.h"
#include <QRandomGenerator>

// City::City() {}

void City::fromQVariant(const QVariant &variant)
{
    const auto map = variant.toMap();

    m_name = map.value("name").toString();
    const auto coords = map.value("coordinates").toList();
    m_x = coords[0].toUInt();
    m_y = coords[1].toUInt();

    const auto articles = map.value("articles").toList();
    for (const auto &article : articles)
        m_articles.push_back(article.toString());
}

QString City::toQString()
{
    return m_name + " (" + QString::number(m_x) + ", " + QString::number(m_y) + "): Broj artikala: " + QString::number(m_articles.size());
}

QString City::getRandomArticle()
{
    const auto index = QRandomGenerator::global()->generate() % m_articles.size();
    const auto random_artile = m_articles[index];

    m_articles.remove(index);

    return random_artile;
}

unsigned int City::distance(const City &city)
{
    return qAbs(m_x - city.getX()) + qAbs(m_y - city.getY());
}

unsigned int City::getX() const
{
    return m_x;
}

unsigned int City::getY() const
{
    return m_y;
}
