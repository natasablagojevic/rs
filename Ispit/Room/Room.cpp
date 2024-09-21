#include "Room.h"
#include <QRandomGenerator>

Room::Room(int n, QObject *parent)
    : QObject{parent}
{
    for (auto i = 0; i < n; i++) {
        QVector<double> row;

        for (auto j = 0; j < n; j++) {
            const auto randTemp = QRandomGenerator::global()->bounded(15, 30);
            row.push_back(randTemp);
        }

        m_matrix.push_back(row);
    }
}

double Room::getTemperatureDiffFromCellAbove(int i, int j) const
{
    if (i <= 0)
        return 0.0;

    return TEMP_COEF * (m_matrix[i-1][j] - m_matrix[i][j]);
}

double Room::getTemperatureDiffFromCellBelow(int i, int j) const
{
    if (i >= m_matrix.size() - 1)
        return 0.0;
    return TEMP_COEF * (m_matrix[i+1][j] - m_matrix[i][j]);
}

double Room::getTemperatureDiffFromCellLeft(int i, int j) const
{
    if (j <= 0)
        return 0.0;

    return TEMP_COEF * (m_matrix[i][j-1] - m_matrix[i][j]);
}

double Room::getTemperatureDiffFromCellRight(int i, int j) const
{
    if (j >= m_matrix.size() - 1)
        return 0.0;

    return TEMP_COEF * (m_matrix[i][j+1] - m_matrix[i][j]);
}

void Room::updateNewTemperatureForCell(uint i, uint j, double tempDiff)
{
    m_matrix[i][j] += tempDiff;
}
