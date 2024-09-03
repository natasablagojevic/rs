#ifndef GRADTHREAD_H
#define GRADTHREAD_H

#include <QObject>
#include <QThread>
#include "./Grad.h"
#include <QVector>

class GradThread : public QThread
{
    Q_OBJECT

public:
    GradThread(QVector<Grad *> *gradovi, QObject *parent = nullptr);

protected:
    void run() override;

signals:
    void UzetiProizvod(QString grad);
    void predjeniPut(unsigned int predjeni_put);


private:
    QVector<Grad *> *m_gradovi;
};

#endif // GRADTHREAD_H
