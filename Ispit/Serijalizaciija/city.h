#ifndef CITY_H
#define CITY_H

#include <QString>
#include <QVector>
#include <QVariant>

class City
{
public:
    City();

    void fromQVariant(const QVariant &variant);
    QVariant toQVariant() const;
    QString toQString() const;

    QString getName() const {return m_name;}

private:
    QString m_name;
    uint m_x;
    uint m_y;
    QVector<QString> m_articles;

};

#endif // CITY_H
