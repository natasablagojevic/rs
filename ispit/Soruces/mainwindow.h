#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include "./source.h"
#include <QMutex>

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
    void onPopuniIzvore();
    void onZapocniTransfer();
    void refillSources(unsigned fluidTransfered);

private:
    Ui::MainWindow *ui;

    QVector<Source *> m_sources;
    QMutex m_mutex;
    uint m_totalVolume;

    void loadSources();
    void displaySources();
};
#endif // MAINWINDOW_H
