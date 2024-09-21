#ifndef CITYTHREAD_H
#define CITYTHREAD_H

#include <QObject>
#include <QThread>
#include <QVector>
#include "./City.h"
#include <QMutex>

class CityThread : public QThread
{
    Q_OBJECT
public:
    explicit CityThread(QVector<City *> cities, QMutex *mutex, QObject *parent = nullptr);


protected:
    void run() override;

signals:
    void artikal(QString artikal);
    void predjeniPut(uint put);

private:
    QVector<City *> m_cities;
    QMutex *m_mutex;
};

#endif // CITYTHREAD_H
