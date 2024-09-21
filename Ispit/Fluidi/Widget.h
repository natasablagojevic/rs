#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "./source.h"
#include <QVector>
#include <QMutex>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void onUcitajPodatke();
    void onZapocniTransfer();
    void onTekucaZapreminaRezervoara(uint zapremina);

private:
    Ui::Widget *ui;

    QVector<Source *> m_sources;
    QMutex m_mutex;

};
#endif // WIDGET_H
