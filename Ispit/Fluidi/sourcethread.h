#ifndef SOURCETHREAD_H
#define SOURCETHREAD_H

#include <QThread>

class SourceThread : public QThread
{
    Q_OBJECT
public:
    SourceThread();
};

#endif // SOURCETHREAD_H
