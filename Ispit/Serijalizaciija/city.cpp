#include "city.h"

City::City() {}

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

QVariant City::toQVariant() const
{
    QVariantMap map;

    map.insert("name", m_name);

    QVariantList coords;
    coords.append(m_x);
    coords.append(m_y);

    map.insert("coordinates", coords);

    QVariantList articles;
    for (const auto &article : m_articles)
        articles.append(article);

    map.insert("articles", articles);

    return map;
}

QString City::toQString() const
{
    return m_name + " (" + QString::number(m_x) + ", " + QString::number(m_y) + "): Broj artikala: " + QString::number(m_articles.size());
}

QString City::getRandomArticle() const
{

}

uint City::distance(City *other)
{

}
