#include "Widget.h"
#include "./ui_Widget.h"
#include <QMessageBox>
#include "./Room.h"
#include <QTableWidget>
#include <QTableWidgetItem>
#include "./CellThread.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget),
    m_room(nullptr)
{
    ui->setupUi(this);

    connect(ui->pbZapocniMerenje, &QPushButton::clicked, this, &Widget::onPbSatrtReading);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::populateTableWidget()
{
    const auto n = m_room->getSize();

    ui->tableWidget->setRowCount(n);
    ui->tableWidget->setColumnCount(n);

    for (auto i = 0; i < n; i++) {
        for (auto j = 0; j < n; j++) {
            // samo kada prvi put popunjavamo TableWidget
            auto item = new QTableWidgetItem(QString::number(m_room->cellValue(i, j)));
            ui->tableWidget->setItem(i, j, item);
        }
    }
}

void Widget::startThreads()
{
    const auto n = m_room->getSize();

    for (auto i = 0u; i < n; i++) {
        for (auto j = 0u; j < n; j++) {
            auto thread = new CellThread(m_room, i, j, &m_mutex,this);

            connect(thread, &CellThread::temperatureCalculated, this, &Widget::onTemperatureCalculated);
            connect(thread, &CellThread::finished, thread, &CellThread::deleteLater);

            thread->start();
        }
    }
}

void Widget::onPbSatrtReading()
{
    bool parsed;
    const auto n = ui->leRedovi->text().toInt(&parsed);

    if (!parsed || n <= 0) {
        QMessageBox::information(this, "GRESKA!", "Morate uneti pozitivan broj.");
        return ;
    }


    m_room = new Room(n, this);

    populateTableWidget();

    startThreads();

}

void Widget::onTemperatureCalculated(uint i, uint j)
{
    const auto cellValue = m_room->cellValue(i, j);

    // azuriranje

    ui->tableWidget->item(i, j)->setText(QString::number(cellValue));
}
