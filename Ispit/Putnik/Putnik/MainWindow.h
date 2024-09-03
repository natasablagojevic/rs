#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QVector>
#include "./Grad.h"
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
    void onUcitajGradove();
    void onZapocniPosete();
    void azurirajPodatke(QString artikal);
    void zavrsenaPoseta(unsigned udaljenost);

private:
    Ui::MainWindow *ui;
    QVector<Grad *> m_gradovi;
    QMap<QString, unsigned> m_artikli;

    unsigned active_threads;
};
#endif // MAINWINDOW_H
