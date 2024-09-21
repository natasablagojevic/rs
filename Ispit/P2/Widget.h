#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QVector>
#include "./City.h"
#include <QMap>
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

public slots:
    void onUcitajPodatke();
    void onZapocniPosete();
    void uhvatiArtikal(QString artikal);
    void uhavitPredjeniPut(uint put);

private:
    Ui::Widget *ui;

    QVector<City *> m_cities;
    QMutex m_mutex;
    QMap<QString, uint> m_artikli;

};
#endif // WIDGET_H
