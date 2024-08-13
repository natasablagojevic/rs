#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include "./city.h"
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

private slots:
    void loadCities();
    void startVisits();
    void finishedVist(uint);
    void addProduct(QString);

private:
    Ui::MainWindow *ui;

    QVector<City *> m_cities;
    uint m_activeThreads;
    QMap<QString, uint> m_collectedProducts;

    void loadCitiesFromDialog();
    void showCities();



};
#endif // MAINWINDOW_H
