#ifndef NIT_H
#define NIT_H

#include <QThread>
#include "./city.h"
#include <QVector>

class Nit : public QThread
{
    Q_OBJECT
public:
    Nit(QVector<City *> *cities, QObject *parent);

protected:
    void run() final;

signals:
    void collected(QString product);
    void distance(uint);

private:
    QVector<City *> *m_cities;
};

#endif // NIT_H
