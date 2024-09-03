#include "MainWindow.h"
#include "./ui_MainWindow.h"

#include <QString>
#include <QPushButton>
#include <QJsonDocument>
#include <QFileDialog>
#include <QFile>
#include <iostream>

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
    const auto filepaths = QFileDialog::getOpenFileNames(this, "Ucitaj fajlove", "../../..", "JSON (*.json)");

    qDeleteAll(m_cities);
    m_cities.clear();

    for (const auto &filepath : filepaths) {
        ucitajJson(filepath);
    }

    ui->lwPodaci->clear();

    for (const auto &city : m_cities) {
        ui->lwPodaci->addItem(city->toQString());
    }
}

void MainWindow::onUpisiPodatke()
{
    auto i = 0u;

    for (const auto &city : m_cities) {
        auto filepath = "../../" + city->getName() + ".json";
        i++;

        std::cout << filepath.toStdString() << std::endl;

        upisiJson(filepath, city);
    }
}

void MainWindow::ucitajJson(const QString &filepath)
{
    QFile file(filepath);

    if (file.open(QFile::ReadOnly)) {
        auto doc = QJsonDocument::fromJson(file.readAll());
        const auto var = doc.toVariant();

        auto city = new City();
        city->fromQVariant(var);
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






