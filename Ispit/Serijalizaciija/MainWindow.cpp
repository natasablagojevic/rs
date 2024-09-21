#include "MainWindow.h"
#include "./ui_MainWindow.h"

#include <QString>
#include <QPushButton>
#include <QJsonDocument>
#include <QFileDialog>
#include <QFile>
#include <iostream>
#include <QDataStream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pbUcitajPodatke, &QPushButton::clicked, this, &MainWindow::onUcitajPodatke);
    connect(ui->pbUpisiPodatke, &QPushButton::clicked, this, &MainWindow::onUpisiPodatke);
}

MainWindow::~MainWindow()
{
    delete ui;
    qDeleteAll(m_cities);
}

void MainWindow::onUcitajPodatke()
{
    const auto filepaths = QFileDialog::getOpenFileNames(this, "Otvori fajlove", "../../..", "JSON (*.json)");

    qDeleteAll(m_cities);
    m_cities.clear();

    for (const auto &filepath : filepaths) {
        ucitajJson(filepath);
    }

    ui->lwPodaci->clear();

    for (const auto &city : m_cities)
        ui->lwPodaci->addItem(city->toQString());

}

void MainWindow::onUpisiPodatke()
{
    for (const auto &city : m_cities) {
        auto filepath = "../../ " + city->getName() + ".json";

        upisiJson(filepath, city);
    }
}

void MainWindow::ucitajJson(const QString &filepath)
{
    QFile file(filepath);

    if (file.open(QFile::ReadOnly)) {

        auto doc = QJsonDocument::fromJson(file.readAll());
        const auto variant = doc.toVariant();

        auto city = new City();
        city->fromQVariant(variant);
        m_cities.push_back(city);

        file.close();
    }
}

void MainWindow::upisiJson(const QString &filepath, City *city)
{
    QFile file(filepath);

    if (file.open(QFile::WriteOnly)) {

        auto doc = QJsonDocument::fromVariant(city->toQVariant());
        file.write(doc.toJson(QJsonDocument::JsonFormat::Indented));

        file.close();
    }
}

void MainWindow::ucitajBin(const QString &filepath)
{
    QFile file(filepath);

    if (file.open(QFile::ReadOnly)) {

        QDataStream stream(&file);
        QVariant variant;

        stream >> variant;

        auto city = new City();
        city->fromQVariant(variant);
        m_cities.push_back(city);

        file.close();
    }

}

void MainWindow::upisiBin(const QString &filepath, City *city)
{
    QFile file(filepath);

    if (file.open(QFile::WriteOnly)) {

        QDataStream stream(&file);

        stream << city->toQVariant();

        file.close();
    }
}








