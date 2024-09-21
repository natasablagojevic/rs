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
    QString toQString() const;
    QString getRandomArticle();
    uint distance(City *other);

    uint getX() const {return m_x;}
    uint getY() const {return m_y;}

private:
    QString m_name;
    uint m_x;
    uint m_y;
    QVector<QString> m_articles;
};

#endif // CITY_H
