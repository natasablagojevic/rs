#ifndef ROOM_H
#define ROOM_H

#include <QObject>
#include <QVector>

class Room : public QObject
{
    Q_OBJECT
public:
    explicit Room(int n, QObject *parent = nullptr);

    uint getSize() const {return m_matrix.size();}
    double cellValue(uint i, uint j) const {return m_matrix[i][j];}

    double getTemperatureDiffFromCellAbove(int i, int j) const;
    double getTemperatureDiffFromCellBelow(int i, int j) const;
    double getTemperatureDiffFromCellLeft(int i, int j) const;
    double getTemperatureDiffFromCellRight(int i, int j) const;

    void updateNewTemperatureForCell(uint i, uint j, double tempDiff);


private:
    QVector<QVector<double>> m_matrix;

    static inline const double TEMP_COEF = 0.1;
};

#endif // ROOM_H
