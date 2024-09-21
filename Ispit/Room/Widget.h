#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "./Room.h"
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
    void onPbSatrtReading();
    void onTemperatureCalculated(uint i, uint j);

private:
    Ui::Widget *ui;

    Room *m_room;
    void populateTableWidget();
    void startThreads();
    inline QMutex *getMutexForRoom() {return &m_mutex;}

    QMutex m_mutex;

};
#endif // WIDGET_H
