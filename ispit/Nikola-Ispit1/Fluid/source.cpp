#include "source.h"

Source::Source() {}

void Source::fromVariant(const QVariant &variant)
{
    const auto map = variant.toMap();

    m_name = map.value("name").toString();
    m_volume = map.value("volume").toUInt();
}

QString Source::toQString() const
{
    return m_name + " - " + (m_volume == 0u ? "izvor je iscrpljen" : QString::number(m_volume));
}

void Source::runOut(uint fluidLost)
{
    m_volume -= fluidLost;
}
