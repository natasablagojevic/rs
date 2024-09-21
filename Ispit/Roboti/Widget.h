#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QVector>
#include "./Robot.h"

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
    void onPbUcitajPodatke();
    void onPbZapocniBorbe();
    void zavrseno(uint i, uint j);

private:
    Ui::Widget *ui;

    int num = 0;
    QVector<Robot *> m_robots;

    void setWinner();
    void inicijalizacijaTable(uint n);
};
#endif // WIDGET_H
