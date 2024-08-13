#ifndef CITY_H
#define CITY_H

#include <QObject>
#include <QString>
#include <QVector>
#include <QVariant>
#include <QMutex>

class City
{
public:
    // explicit City(QObject *parent = nullptr);
    City() = default;
    City(QVariant &variant);

    QString toString() const;
    uint distance(const City &other) const;
    void formVariant(QVariant &variant);
    QString getRandomArticle();

    uint getX() const;
    uint getY() const;

    QMutex m_mutex;

private:
    QString m_name;
    uint m_x;
    uint m_y;
    QVector<QString> m_products;
};

#endif // CITY_H
