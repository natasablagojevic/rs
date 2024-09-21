#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVariant>
#include <QVector>
#include "./city.h"
#include <QString>

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

protected slots:
    void onUcitajPodatke();
    void onUpisiPodatke();



private:
    Ui::MainWindow *ui;

    void ucitajJson(const QString &filepath);
    void upisiJson(const QString &filepath, City *city);

    void ucitajBin(const QString &filepath);
    void upisiBin(const QString &filepath, City *city);

    QVector<City *> m_cities;

};
#endif // MAINWINDOW_H
