#ifndef ROBOTTHREAD_H
#define ROBOTTHREAD_H

#include <QObject>
#include <QThread>
#include "./Robot.h"
#include <QVector>

class RobotThread : public QThread
{
    Q_OBJECT
public:
    explicit RobotThread(Robot *r1, Robot *r2, uint i, uint j, QObject *parent = nullptr);

protected:
    void run() override;

signals:
    void zavrseno(uint i, uint j);

private:
    uint m_i;
    uint m_j;
    Robot *m_robot1;
    Robot *m_robot2;
};

#endif // ROBOTTHREAD_H
