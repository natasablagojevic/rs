#include "source.h"

Source::Source() {}

void Source::fromVariant(const QVariant &variant)
{
    QVariantMap map = variant.toMap();

    m_nazivIzvora = map.value("name").toString();
    m_pocetnaZapremina = map.value("volume").toUInt();
}

QString Source::toQString() const
{
    const auto vrednost = m_pocetnaZapremina == 0u ? "izvor je iscrpljen" : QString::number(m_pocetnaZapremina);
    return m_nazivIzvora + " - " + vrednost;
}

uint Source::getValue() const
{
    return m_pocetnaZapremina;
}

void Source::runOut(uint volume)
{
    m_pocetnaZapremina -= volume;
}
