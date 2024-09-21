#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QString>
#include <QVector>
#include "./City.h"
#include <QMutex>
#include <QMap>

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
    void onPbLoadData();
    void onPbStartVisits();

    void takenArticle(QString article);
    void distance(uint dis);

private:
    Ui::Widget *ui;

    QVector<City *> m_cities;

    void loadJson(const QString &filepath);
    void printCities(QVector<City *> cities);

    // QVector<QMutex> m_mutexes;
    QMutex m_mutex;

    QMap<QString, uint> m_articles;

};
#endif // WIDGET_H
