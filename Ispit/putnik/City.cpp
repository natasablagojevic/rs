#include "City.h"
#include <QRandomGenerator>
#include <QVariant>
#include <QVector>
// #include <iostream>

City::City()
    : m_name(),
    m_x(), m_y(), m_articles()
{}

void City::fromQVariant(const QVariant &variant)
{
    const auto map = variant.toMap();
    m_name = map.value("name").toString();

    const auto coords = map.value("coordinates").toList();
    m_x = coords[0].toUInt();
    m_y = coords[1].toUInt();

    m_articles.clear();

    const auto articles = map.value("articles").toList();
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
    // std::cout << (qAbs(m_x - other->x()) + qAbs(m_y - other->y())) << std::endl;
    return qAbs(m_x - other->x()) + qAbs(m_y - other->y());
}
