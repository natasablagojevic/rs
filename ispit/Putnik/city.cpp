#include "city.h"
#include <QRandomGenerator>

City::City(QVariant &variant)
{
    City::formVariant(variant);
}

QString City::toString() const
{
    const auto position = QString("(") + QString::number(m_x) + QString(", ") + QString::number(m_y) + QString(")");

    return m_name + " " + position + ": Broj artikla = " + QString::number(m_products.size());
}

uint City::distance(const City &other) const
{
    return qAbs(m_x - other.getX()) + qAbs(m_y - other.getY());

}

void City::formVariant(QVariant &variant)
{
    const auto map = variant.toMap();

    m_name = map.value("name").toString();
    const auto pair = map.value("coordinates").toList();
    m_x = pair[0].toUInt();
    m_y = pair[1].toUInt();

    const auto products = map.value("articles").toList();

    m_products.clear();

    for (const auto &product: products)
        m_products.push_back(product.toString());
}

QString City::getRandomArticle()
{
    if (m_products.size() == 0)
        return "";

    const auto index = QRandomGenerator::global()->generate() % m_products.size();
    const auto product = m_products[index];

    m_products.remove(index);

    return product;

}

uint City::getX() const
{
    return m_x;
}

uint City::getY() const
{
    return m_y;
}
