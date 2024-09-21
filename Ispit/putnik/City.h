#ifndef CITY_H
#define CITY_H

#include <QString>
#include <QVector>
#include <QVariant>
#include <QMutex>

class City
{
public:
    City();

    void fromQVariant(const QVariant &variant);
    QString toQString() const;
    QString getRandomArticle();
    uint distance(City *other);

    inline uint x() const {return m_x;}
    inline uint y() const {return m_y;}

    QMutex m_mutex;

private:
    QString m_name;
    uint m_x;
    uint m_y;
    QVector<QString> m_articles;
};

#endif // CITY_H
