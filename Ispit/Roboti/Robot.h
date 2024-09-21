#ifndef ROBOT_H
#define ROBOT_H

#include <QString>
#include <QVariant>
#include <QMutex>

class Robot
{
public:
    Robot();

    void fromQVariant(const QVariant &variant);
    QString toQString() const;
    bool attack(Robot *other);

    void umanjiSnagu(uint snaga) {m_trenutniPoeni -= snaga;}
    uint trenutniPoeni() {return m_trenutniPoeni;}
    void setTrenutniPoeni(uint poeni) {m_trenutniPoeni = poeni;}
    void resetujPoene() {m_trenutniPoeni = m_maxPoeni;}
    QString ime() const {return m_ime;}

    QMutex m_mutex;

private:
    QString m_ime;
    uint m_minSnaga;
    uint m_maxSnaga;
    uint m_maxPoeni;
    uint m_trenutniPoeni;

    // uint rbr = 0u;
};

#endif // ROBOT_H
