#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QFile>
#include <QFileDialog>
#include <QJsonDocument>
#include <QVariant>
#include "./source.h"
#include <QThread>
#include "./sourcethread.h"
#include <QMutexLocker>
#include <QDataStream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pbPopuniIzvore, &QPushButton::clicked, this, &MainWindow::onPopuniIzvore);
    connect(ui->pbZapocniTransfer, &QPushButton::clicked, this, &MainWindow::onZapocniTransfer);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onPopuniIzvore()
{
    MainWindow::loadSources();
    MainWindow::displaySources();
}

void MainWindow::onZapocniTransfer()
{
    ui->leTekucaZapreminaRezervoara->setText(QString::number(0u));
    ui->leGubitak->setText(QString::number(0u));

    const auto length = m_sources.size();

    for (auto i = 0; i < length; i++) {
        auto thread = new SourceThread(m_sources, &m_mutex, this);

        connect(thread, &SourceThread::sourceLostFluid, this, &MainWindow::refillSources);
        connect(thread, &QThread::finished, thread, &QThread::deleteLater);

        thread->start();
    }

}

void MainWindow::refillSources(unsigned int fluidTransfered)
{
    const auto totalVolume = ui->leUkupnaZapreminaIzvora->text().toUInt();

    // if (totalVolume <= 0)
    //     return ;

    auto currTankVolume = ui->leTekucaZapreminaRezervoara->text().toUInt();
    auto currLostVolume = ui->leGubitak->text().toUInt();

    if (totalVolume - currTankVolume > currLostVolume) {
        currTankVolume += fluidTransfered;
        ui->leTekucaZapreminaRezervoara->setText(QString::number(currTankVolume));
    } else {
        ui->leTekucaZapreminaRezervoara->setText(QString::number(totalVolume));
        fluidTransfered -= totalVolume - currTankVolume;
        currLostVolume += fluidTransfered;
        ui->leGubitak->setText(QString::number(currLostVolume));
    }

    QMutexLocker locker(&m_mutex);

    for (auto i = 0; i < m_sources.size(); i++) {
        ui->lwIzvori->item(i)->setText(m_sources[i]->toQString());
    }

}

void MainWindow::loadSources()
{
    const auto filesPath = QFileDialog::getOpenFileName(this, "Select JSON file", "", "JSON (*.json)");
/*
    qDeleteAll(m_sources);
    m_sources.clear();

    for (const auto &path: filesPath) {
        QFile file(path);

        if (file.open(QFile::ReadOnly)) {
            const auto content = file.readAll();
            const auto doc = QJsonDocument::fromJson(content);
            QVariant variant = doc.toVariant();

            const auto source = new Source();
            source->fromVariant(variant);
            m_sources.push_back(source);
        }
    }

*/
    QFile file(filesPath);

    if (!file.open(QFile::ReadOnly))
        return ;

    const auto content = file.readAll();
    const auto doc = QJsonDocument::fromJson(content);
    file.close();

    const auto variantList = doc.toVariant().toList();

    for (const auto &variant: variantList) {
        auto *source = new Source();
        source->fromVariant(variant);
        m_sources.push_back(source);
    }


    /*
    const auto fname = QFileDialog::getOpenFileName(this, "Select JSON file", "", "JSON (*.json)");
    QFile f(fname);

    if (!f.open(QFile::ReadOnly))
        return ;

    QDataStream dataStream(&f);

    QVariant variant;

    dataStream >> variant;

    const auto source = new Source();
    source->fromVariant(variant);
    m_sources.push_back(source);
*/
}

void MainWindow::displaySources()
{
    ui->lwIzvori->clear();
    ui->leUkupnaZapreminaIzvora->clear();

    auto sum = 0u;

    for (const auto &source: m_sources) {
        ui->lwIzvori->addItem(source->toQString());
        sum += source->getValue();
    }

    ui->leUkupnaZapreminaIzvora->setText(QString::number(sum));
}
