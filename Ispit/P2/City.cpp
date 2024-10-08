#include "City.h"

#include <QRandomGenerator>

City::City()
    : m_name(),
    m_x(),
    m_y(),
    m_articles()
{}

void City::fromQVariant(const QVariant &variant)
{
    const auto map = variant.toMap();

    m_name = map.value("name").toString();
    const auto coords = map.value("coordinates").toList();
    m_x = coords[0].toUInt();
    m_y = coords[1].toUInt();

    const auto articles = map.value("articles").toList();
    m_articles.clear();

    for (const auto &article : articles)
        m_articles.push_back(article.toString());
}

QString City::toQString() const
{
    return m_name + " (" + QString::number(m_x) + ", " + QString::number(m_y) + "): Broj artikala = " + QString::number(m_articles.size());
}

QString City::getRandomArticle()
{
    const auto index = QRandomGenerator::global()->generate() % m_articles.size();
    const auto article = m_articles[index];

    m_articles.remove(index);

    return article;
}

uint City::distance(City *other)
{
    return qAbs(m_x - other->getX()) + qAbs(m_y - other->getY());
}
