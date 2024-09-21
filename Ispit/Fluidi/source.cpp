#include "source.h"

// Source::Source() {}


void Source::fromQVariant(const QVariant &variant)
{
    const auto map = variant.toMap();
    m_naziv = map.value("name").toString();
    m_zapremina = map.value("volume").toUInt();
}

QString Source::toQString() const
{
    const auto vrednost = m_zapremina > 0 ? QString::number(m_zapremina) : "izvor je iscrpljen";

    return m_naziv + " - " + vrednost;
}
