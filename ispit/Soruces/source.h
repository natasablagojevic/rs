#ifndef SOURCE_H
#define SOURCE_H

#include <QString>
#include <QVariant>

class Source
{
public:
    Source();

    void fromVariant(const QVariant &variant);
    QString toQString() const;

    uint getValue() const;
    void runOut(uint volume);

private:
    QString m_nazivIzvora;
    uint m_pocetnaZapremina;
};

#endif // SOURCE_H
