#include "Widget.h"
#include "./ui_Widget.h"

#include <QFile>
#include <QFileDialog>
#include <QVector>
#include <QString>
#include <QVariant>
#include <QJsonDocument>
#include <QTableWidgetItem>
#include <QTableWidget>
#include "./RobotThread.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->pbUcitajRobote, &QPushButton::clicked, this, &Widget::onPbUcitajPodatke);
    connect(ui->pbZapocniBorbu, &QPushButton::clicked, this, &Widget::onPbZapocniBorbe);
}

Widget::~Widget()
{
    delete ui;
    qDeleteAll(m_robots);
}

void Widget::onPbUcitajPodatke()
{
    const auto filename = QFileDialog::getOpenFileName(this, "Otvori fajl", "../../", "JSON (*.json)");

    QFile file(filename);

    if (!file.open(QFile::ReadOnly))
        return;

    auto doc = QJsonDocument::fromJson(file.readAll());
    const auto variant = doc.toVariant();

    qDeleteAll(m_robots);
    m_robots.clear();

    for (const auto &var : variant.toList()) {
        auto robot = new Robot();
        robot->fromQVariant(var);

        m_robots.push_back(robot);
    }

    file.close();

    ui->lwRoboti->clear();

    for (auto i = 0; i < m_robots.size(); i++) {
        auto text = QString::number(i+1) + m_robots[i]->toQString();
        ui->lwRoboti->addItem(text);
    }

    ui->leBrojRobota->setText(QString::number(m_robots.size()));
}

void Widget::onPbZapocniBorbe()
{
    if (m_robots.isEmpty())
        return ;

    ui->pbUcitajRobote->setEnabled(false);
    ui->pbZapocniBorbu->setEnabled(false);
    ui->leRobotSaNajvisePobeda->clear();

    const auto n = m_robots.size();

    inicijalizacijaTable(n);

    // pookrecu se niti, za svaku borbu po jedna

    for (auto i = 0; i < n; i++) {
        for (auto j = 0; j < n; j++) {
            if (i == j)
                continue;

            auto thread = new RobotThread(m_robots[i], m_robots[j], i, j, this);

            connect(thread, &RobotThread::zavrseno, this, &Widget::zavrseno);
            connect(thread, &RobotThread::finished, thread, &RobotThread::deleteLater);

            thread->start();

            num++;
        }
    }
}

void Widget::zavrseno(uint i, uint j)
{
    ui->twBorbe->item(i, j)->setText("Pobedio");
    ui->twBorbe->item(j, i)->setText("Izgubio");
    num--;

    if (num == 0) {
        setWinner();

        ui->pbUcitajRobote->setEnabled(true);
        ui->pbZapocniBorbu->setEnabled(true);
    }
}

void Widget::setWinner()
{
    auto n = m_robots.size();

    auto bestIdx = 0, mostWins = 0;

    for (auto i = 0; i < n; i++) {
        int num_wins = 0;

        for (auto j = 0; j < n; j++) {
            if (ui->twBorbe->item(i, j)->text() == "Pobedio")
                num_wins++;
        }

        if (num_wins > mostWins) {
            mostWins = num_wins;
            bestIdx = i;
        }
    }

    ui->leRobotSaNajvisePobeda->setText(m_robots[bestIdx]->ime());
}

void Widget::inicijalizacijaTable(uint n)
{
    ui->twBorbe->setRowCount(n);
    ui->twBorbe->setColumnCount(n);

    for (auto i = 0; i < n; i++) {
        for (auto j = 0; j < n; j++) {
            auto item = new QTableWidgetItem();
            if (i == j) {
                item->setText("\\");
            } else {
                item->setText("");
            }

            ui->twBorbe->setItem(i, j, item);
        }
    }
}
