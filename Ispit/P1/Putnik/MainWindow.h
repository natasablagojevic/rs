#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "./City.h"
#include <QVector>
#include <QMap>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void onLoadCities();
    void onStartVisits();
    void updateDistanceCity(uint distance);
    void updateArticle(QString article);

private:
    Ui::MainWindow *ui;
    QVector<City *> m_cities;
    QMap<QString, uint> m_articles;
    uint active_threads;
};
#endif // MAINWINDOW_H
