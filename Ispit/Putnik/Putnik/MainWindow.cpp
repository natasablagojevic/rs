#include "MainWindow.h"
#include "./ui_MainWindow.h"

#include <QFile>
#include <QFileDialog>
#include <QJsonDocument>
#include <QPushButton>

#include "GradThread.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pbUcitajGradove, &QPushButton::clicked, this, &MainWindow::onUcitajGradove);
    connect(ui->pbZapocniPosete, &QPushButton::clicked, this, &MainWindow::onZapocniPosete);
}

MainWindow::~MainWindow()
{
    delete ui;
    m_gradovi.clear();
    qDeleteAll(m_gradovi);
}

void MainWindow::onUcitajGradove()
{
    const auto names = QFileDialog::getOpenFileNames(this, "Ucitaj gradove", "", "JSON (*.json)");

    qDeleteAll(m_gradovi);
    m_gradovi.clear();

    // ucitavanje gradova:
    for (const auto &name : names) {
        QFile input(name);

        if (input.open(QFile::ReadOnly)) {
            const auto content = input.readAll();
            const auto doc = QJsonDocument::fromJson(content);
            const auto var = doc.toVariant();

            m_gradovi.push_back(new Grad(var));
        }
    }

    ui->lwGradovi->clear();

    // prikazivanje gradova:
    for (const auto &grad: m_gradovi) {
        ui->lwGradovi->addItem(grad->toQString());
    }

}

void MainWindow::onZapocniPosete()
{
    if (m_gradovi.empty() || ui->leBrojPosetilaca->text().toInt() <= 0)
        return ;

    ui->pbUcitajGradove->setEnabled(false);
    ui->pbZapocniPosete->setEnabled(false);

    const auto predjeniPut = ui->lePredjeniPut->text().toInt();
    ui->lePredjeniPut->clear();

    ui->lwArtikli->clear();

    // pokrecem onoliko niti koliko ima posetilaca
    // svaka nit predstavlja jednog putnika

    auto broj_posetilaca = ui->leBrojPosetilaca->text().toInt();
    active_threads = broj_posetilaca;

    for (auto i = 0; i < broj_posetilaca; i++) {
        auto thread = new GradThread(&m_gradovi, this);

        connect(thread, &GradThread::UzetiProizvod, this, &MainWindow::azurirajPodatke);
        connect(thread, &GradThread::predjeniPut, this, &MainWindow::zavrsenaPoseta);
        connect(thread, &GradThread::finished, thread, &GradThread::deleteLater);

        thread->start();
    }



}

void MainWindow::azurirajPodatke(QString artikal)
{
    if (m_artikli.contains(artikal)) {
        m_artikli[artikal] += 1;
    } else {
        m_artikli[artikal] = 1;
    }

    ui->lwArtikli->clear();

    for (const auto &item : m_artikli.toStdMap()) {
        const auto text = item.first + ": " + QString::number(item.second);
        ui->lwArtikli->addItem(text);
    }
}

void MainWindow::zavrsenaPoseta(unsigned int udaljenost)
{
    auto trenutna_udaljenost = ui->lePredjeniPut->text().toUInt();
    ui->lePredjeniPut->setText(QString::number(trenutna_udaljenost + udaljenost));

    active_threads--;

    if (active_threads == 0) {
        ui->pbUcitajGradove->setEnabled(true);
        ui->pbZapocniPosete->setEnabled(true);
    }
}
