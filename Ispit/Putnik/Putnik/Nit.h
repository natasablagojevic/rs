#ifndef NIT_H
#define NIT_H

#include <QThread>

class Nit : public QThread
{
    Q_OBJECT
public:
    explicit Nit(QObject *parent = nullptr);
};

#endif // NIT_H
