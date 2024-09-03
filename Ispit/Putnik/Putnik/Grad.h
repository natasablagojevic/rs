#ifndef GRAD_H
#define GRAD_H

#include <QString>
#include <QVector>
#include <QVariant>
#include <QMutex>


class Grad
{
public:
    Grad() = default;

    Grad(const QVariant &variant);

    void fromVariant(const QVariant &variant);
    QString toQString() const;
    QString getRandomArticle();
    uint distance(const Grad &g);

    uint getX() const;
    uint getY() const;

    QMutex m_mutex;

private:
    QString m_ime;
    uint m_x;
    uint m_y;
    QVector<QString> m_proizvodi;
};

#endif // GRAD_H
