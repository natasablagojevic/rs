#ifndef CITYTHREAD_H
#define CITYTHREAD_H

#include <QThread>
#include "./City.h"
#include <QVector>
#include <QMutex>
#include <QMutexLocker>

class CityThread : public QThread
{
    Q_OBJECT
public:
    explicit CityThread(QVector<City *> *cities, QObject *parent = nullptr);

protected:
    void run() override;

signals:
    void takenArticle(QString article);
    void predjeniPut(uint predjeniPut);

private:
    QVector<City *> *m_cities;

};

#endif // CITYTHREAD_H
