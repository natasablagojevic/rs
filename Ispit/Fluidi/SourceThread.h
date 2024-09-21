#ifndef SOURCETHREAD_H
#define SOURCETHREAD_H

#include <QObject>
#include <QThread>
#include "./source.h"
#include <QVector>
#include <QMutex>

class SourceThread : public QThread
{
    Q_OBJECT
public:
    explicit SourceThread(QVector<Source *> sources, QMutex *mutex, QObject *parent = nullptr);

protected:
    void run() override;

signals:
    void isticanje(uint zapremina);

private:
    QVector<Source *> m_sources;
    QMutex *m_mutex;
};

#endif // SOURCETHREAD_H
