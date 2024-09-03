#ifndef SOURCE_H
#define SOURCE_H

#include <QString>
#include <QVariant>

class Source
{
public:
    Source();

    void fromVariant(const QVariant &variant);

    QString toQString() const ;
    uint getVolume() {return m_volume;};
    void runOut(uint fluidLost);

private :
    QString m_name;
    unsigned m_volume;
};

#endif // SOURCE_H
