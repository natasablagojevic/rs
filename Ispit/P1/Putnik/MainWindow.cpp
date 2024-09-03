#include "MainWindow.h"
#include "./ui_MainWindow.h"

#include "./City.h"
#include <QPushButton>
#include <QFileDialog>
#include <QFile>
#include <QJsonDocument>
#include "./CityThread.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pbUcitajGradove, &QPushButton::clicked, this, &MainWindow::onLoadCities);
    connect(ui->pbZapocniPosete, &QPushButton::clicked, this, &MainWindow::onStartVisits);
}

MainWindow::~MainWindow()
{
    delete ui;
    qDeleteAll(m_cities);
}

void MainWindow::onLoadCities()
{
    const auto filenames = QFileDialog::getOpenFileNames(this, "Ucitaj Gradove", "", "JSON (*.json)");

    qDeleteAll(m_cities);
    m_cities.clear();

    for (const auto &filename : filenames) {
        QFile file(filename);

        if (file.open(QFile::ReadOnly)) {
            auto doc = QJsonDocument::fromJson(file.readAll());
            auto variant = doc.toVariant();

            City *city = new City();
            city->fromQVariant(variant);
            m_cities.push_back(city);

            file.close();
        }
    }

    ui->lwGradovi->clear();

    for (const auto &city : m_cities) {
        ui->lwGradovi->addItem(city->toQString());
    }
}

void MainWindow::onStartVisits()
{
    bool valid = false;
    const auto visitorNo = ui->leBrojPosetilaca->text().toUInt(&valid);

    if (!valid || m_cities.empty())
        return ;

    ui->pbUcitajGradove->setDisabled(true);
    ui->pbZapocniPosete->setDisabled(true);

    // const auto predjeni_put = ui->lePredjeniPut->text().toUInt();
    ui->lePredjeniPut->clear();
    ui->lwArtikli->clear();

    // pokrecemo visitorNo broj niti
    active_threads = visitorNo;

    for (auto i = 0 ; i < visitorNo; i++) {
        CityThread *thread = new CityThread(&m_cities, this);

        connect(thread, &CityThread::takenArticle, this, &MainWindow::updateArticle);
        connect(thread, &CityThread::predjeniPut, this, &MainWindow::updateDistanceCity);
        connect(thread, &CityThread::finished, thread, &CityThread::deleteLater);

        thread->start();
    }

}

void MainWindow::updateDistanceCity(uint distance)
{
    auto current_distance = ui->lePredjeniPut->text().toUInt();
    ui->lePredjeniPut->setText(QString::number(current_distance + distance));

    active_threads--;

    if (active_threads == 0) {
        ui->pbUcitajGradove->setEnabled(true);
        ui->pbZapocniPosete->setEnabled(true);
    }
}

void MainWindow::updateArticle(QString article)
{
    if (m_articles.contains(article)) {
        m_articles[article] += 1;
    } else {
        m_articles[article] = 1;
    }

    ui->lwArtikli->clear();

    for (const auto &item : m_articles.toStdMap()) {
        const auto text = item.first + ": " + QString::number(item.second);
        ui->lwArtikli->addItem(text);
    }
}
