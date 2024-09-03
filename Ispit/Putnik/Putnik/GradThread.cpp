#include "GradThread.h"

#include <QRandomGenerator>
#include <QMutexLocker>

GradThread::GradThread(QVector<Grad *> *gradovi, QObject *parent)
    : m_gradovi(gradovi)
    {}

void GradThread::run()
{
    const auto iter = QRandomGenerator::global()->bounded(3, 7);

    auto predjeni_put = 0u;
    auto index = 0;

    for (auto i = 0; i < iter; i++) {
        const auto msleep = QRandomGenerator::global()->bounded(250, 500);

        sleep(msleep);

        if (i == 0) {
            index = QRandomGenerator::global()->generate() % m_gradovi->size();
        } else {
            auto novi_grad_i = QRandomGenerator::global()->generate() % (m_gradovi->size() - 1);

            if (novi_grad_i >= index)
                novi_grad_i++;

            predjeni_put += (*m_gradovi)[index]->distance(*(*m_gradovi)[novi_grad_i]);

            index = novi_grad_i;
        }

        QMutexLocker lock(&(*m_gradovi)[index]->m_mutex);

        QString proizvod = (*m_gradovi)[index]->getRandomArticle();

        if (!proizvod.isEmpty())
            emit UzetiProizvod(proizvod);

    }

    emit predjeniPut(predjeni_put);
}
