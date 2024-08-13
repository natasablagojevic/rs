#ifndef SOURCETHREAD_H
#define SOURCETHREAD_H

#include <QThread>
#include <QVector>
#include "./source.h"
#include <QMutex>

class SourceThread : public QThread
{
    Q_OBJECT
public:
    SourceThread(QVector<Source *> sources, QMutex *mutex, QObject *parent);

protected:
    void run() override;

signals:
    void sourceLostFluid(uint);

private:
    QVector<Source *> m_sources;
    QMutex *m_mutex;

};

#endif // SOURCETHREAD_H
