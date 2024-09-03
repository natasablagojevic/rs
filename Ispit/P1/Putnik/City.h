#ifndef CITY_H
#define CITY_H

#include <QString>
#include <QVector>
#include <QVariant>
#include <QMutex>

class City
{
public:
    City() = default;

    void fromQVariant(const QVariant &variant);
    QString toQString();
    QString getRandomArticle();
    unsigned distance(const City &city);

    unsigned getX() const;
    unsigned getY() const;

    QMutex m_mutex;


private:
    QString m_name;
    unsigned m_x;
    unsigned m_y;
    QVector<QString> m_articles;

};

#endif // CITY_H
