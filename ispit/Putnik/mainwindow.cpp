#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QFile>
#include <QFileDialog>
#include <QJsonDocument>
#include "./nit.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pbUcitajGradove, &QPushButton::clicked, this, &MainWindow::loadCities);
    connect(ui->pbZaponiPosete, &QPushButton::clicked, this, &MainWindow::startVisits);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::startVisits()
{
    if (m_cities.empty())
        return ;

    bool ispravan;
    const auto broj_posetilaca = ui->leBroj->text().toUInt(&ispravan);

    if (!ispravan || broj_posetilaca == 0)
        return ;

    ui->pbUcitajGradove->setDisabled(true);
    ui->pbZaponiPosete->setEnabled(false);

    ui->lePoslednjiPut->clear();
    ui->lwArtikli->clear();

    m_activeThreads = broj_posetilaca;

    for (auto i = 0; i != broj_posetilaca; i++) {
        auto thread = new Nit(&m_cities, this);
        connect(thread, &QThread::finished, thread, &QThread::deleteLater);
        connect(thread, &Nit::distance, this, &MainWindow::finishedVist);
        connect(thread, &Nit::collected, this, &MainWindow::addProduct);

        thread->start();
    }
}

void MainWindow::finishedVist(uint distance)
{
    auto currentDistance = ui->lePoslednjiPut->text().toUInt();
    ui->lePoslednjiPut->setText(QString::number(currentDistance + distance));

    m_activeThreads--;

    if (m_activeThreads == 0) {
        ui->pbUcitajGradove->setDisabled(false);
        ui->pbZaponiPosete->setEnabled(true);
    }
}

void MainWindow::addProduct(QString product)
{
    if (m_collectedProducts.contains(product))
        m_collectedProducts[product] += 1;
    else
        m_collectedProducts[product] = 1;

    ui->lwArtikli->clear();

    for (auto item: m_collectedProducts.toStdMap()) {
        const auto text = item.first + ": " + QString::number(item.second);
        ui->lwArtikli->addItem(text);
    }
}

void MainWindow::loadCitiesFromDialog()
{
    const auto filePaths = QFileDialog::getOpenFileNames(this, "Select JSON file", "", "JSON files (*.json)");

    qDeleteAll(m_cities);
    m_cities.clear();

    for (auto &path: filePaths) {
        QFile file(path);

        if (file.open(QFile::ReadOnly)) {
            const auto content = file.readAll();

            const auto doc = QJsonDocument::fromJson(content);
            auto variant = doc.toVariant();

            m_cities.push_back(new City(variant));

            /*
                const auto city = new City();
                city->fromVariant(variant);
                m_cities.push_back(city);
            */
        }
    }
}

void MainWindow::showCities()
{
    ui->lwgradovi->clear();

    for (const auto &city: m_cities) {
        ui->lwgradovi->addItem(city->toString());
    }
}

void MainWindow::loadCities()
{
    loadCitiesFromDialog();
    showCities();
}
