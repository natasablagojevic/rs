#ifndef SOURCE_H
#define SOURCE_H

#include <QString>
#include <QVariant>
#include <QMutex>

class Source
{
public:
    Source() = default;

    void fromQVariant(const QVariant &variant);
    QString toQString() const ;
    uint getZapremina() const {return m_zapremina;}
    void setZapremina(uint zapremina) {m_zapremina -= zapremina;}
    QMutex *m_mutex;

private:
    QString m_naziv;
    uint m_zapremina;
};

#endif // SOURCE_H
