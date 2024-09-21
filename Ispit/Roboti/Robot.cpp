#include "Robot.h"
#include <QRandomGenerator>

Robot::Robot()
    : m_ime(), m_minSnaga(), m_maxSnaga(), m_maxPoeni(), m_trenutniPoeni()
{
    // rbr++;
}

void Robot::fromQVariant(const QVariant &variant)
{
    const auto map = variant.toMap();

    m_ime = map.value("name").toString();
    m_maxPoeni = map.value("hp").toUInt();
    m_trenutniPoeni = m_maxPoeni;

    const auto interval = map.value("atk").toList();
    m_minSnaga = interval[0].toUInt();
    m_maxSnaga = interval[1].toUInt();
}

QString Robot::toQString() const
{
    return ": " + m_ime + ": hp= " + QString::number(m_maxPoeni) + ", atk=[" + QString::number(m_minSnaga) + "," + QString::number(m_maxSnaga) + "]";
}

bool Robot::attack(Robot *other)
{
    auto snagaNapada = QRandomGenerator::global()->bounded(m_minSnaga, m_maxSnaga + 1);
    auto izgubljeno = qMax(0.5, double(m_trenutniPoeni) / double(m_maxPoeni));
    auto smanjenaSnaga = snagaNapada * izgubljeno;

    if (izgubljeno >= other->trenutniPoeni()) {
        other->setTrenutniPoeni(0u);
        return true; // robot je ubijen
    } else {
        other->setTrenutniPoeni(smanjenaSnaga);
        return false; // robot je preziveo
    }
}
