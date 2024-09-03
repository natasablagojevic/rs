#include "Grad.h"
#include <QRandomGenerator>

// Grad::Grad() {}

Grad::Grad(const QVariant &variant)
{
    fromVariant(variant);
}

void Grad::fromVariant(const QVariant &variant)
{
    const auto map = variant.toMap();

    m_ime = map.value("name").toString();
    const auto coords = map.value("coordinates").toList();
    m_x = coords[0].toUInt();
    m_y = coords[1].toUInt();

    const auto artikli = map.value("articles").toList();

    for (const auto &a : artikli) {
        m_proizvodi.push_back(a.toString());
    }

}

QString Grad::toQString() const
{
    return m_ime + " (" + QString::number(m_x) + ", " + QString::number(m_y)
           + "): Broj artikala = " + QString::number(m_proizvodi.size());
}

QString Grad::getRandomArticle()
{
    if (m_proizvodi.empty()) {
        return "";
    }

    const auto index = QRandomGenerator::global()->generate()  % m_proizvodi.size();
    const auto proizvod = m_proizvodi[index];

    m_proizvodi.remove(index);

    return proizvod;
}

uint Grad::distance(const Grad &g)
{
    return qAbs(m_x - g.getX()) + qAbs(m_y - g.getY());
}

uint Grad::getX() const
{
    return m_x;
}

uint Grad::getY() const
{
    return m_y;
}
