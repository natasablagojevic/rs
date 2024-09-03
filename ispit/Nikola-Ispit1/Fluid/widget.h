#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QVector>
#include "./source.h"
#include <QMutexLocker>
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
    void onFillSources();
    void onStartTransfer();
    void onSourceLostFluid(unsigned lostFluid);

private:
    Ui::Widget *ui;
    QVector<Source *> m_sources;
    QMutex m_mutex;

    bool deserializeSources();
    void showSources();
    void showTotalVolume();
};
#endif // WIDGET_H
