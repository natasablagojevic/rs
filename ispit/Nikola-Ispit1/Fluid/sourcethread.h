#ifndef SOURCETHREAD_H
#define SOURCETHREAD_H

#include <QThread>
#include <QVector>
#include "./source.h"
#include <QMutexLocker>
#include <QMutex>

class SourceThread : public QThread
{
    Q_OBJECT
public:
    explicit SourceThread(QVector<Source *> m_sources, QObject *parent = nullptr);

protected:
    void run() override;

signals:
    void sourceLostFluid(unsigned fluidLost);


private:
    QVector<Source *> m_sources;
};

#endif // SOURCETHREAD_H
