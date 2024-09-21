#include "Widget.h"
#include "./ui_Widget.h"

#include <QFileDialog>
#include <QFile>
#include <QJsonDocument>
#include <QMutex>
#include "./CityThread.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->pbUcitajGradove, &QPushButton::clicked, this, &Widget::onUcitajPodatke);
    connect(ui->pbZapocniPosete, &QPushButton::clicked, this, &Widget::onZapocniPosete);
}

Widget::~Widget()
{
    delete ui;
    qDeleteAll(m_cities);
}

void Widget::onUcitajPodatke()
{
    const auto filepaths = QFileDialog::getOpenFileNames(this, "Ucitajte JSON fajlove", "../..", "JSON (*.json)");

    qDeleteAll(m_cities);
    m_cities.clear();

    for (const auto &filepath: filepaths) {
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

    ui->lwGradovi->clear();

    for (const auto &city : m_cities)
        ui->lwGradovi->addItem(city->toQString());
}

void Widget::onZapocniPosete()
{
    if (m_cities.empty()) {
        return;
    }

    bool parsed;
    const auto numPosetioci = ui->leBrojPosetilaca->text().toInt(&parsed);

    if (!parsed || numPosetioci <= 0)
        return ;

    ui->pbUcitajGradove->setEnabled(false);
    ui->pbZapocniPosete->setEnabled(false);
    ui->lePredjeniPut->clear();
    ui->lwArtikli->clear();

    // kreiranje niti ....
    for (auto i = 0; i < numPosetioci; i++) {
        auto thread = new CityThread(m_cities, &m_mutex, this);

        connect(thread, &CityThread::artikal, this, &Widget::uhvatiArtikal);
        connect(thread, &CityThread::predjeniPut, this, &Widget::uhavitPredjeniPut);
        connect(thread, &CityThread::finished, thread, &CityThread::deleteLater);

        thread->start();
    }

    ui->pbUcitajGradove->setEnabled(true);
    ui->pbZapocniPosete->setEnabled(true);
}

void Widget::uhvatiArtikal(QString artikal)
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

void Widget::uhavitPredjeniPut(uint put)
{
    auto tr_udaljenost = ui->lePredjeniPut->text().toUInt();
    ui->lePredjeniPut->setText(QString::number(tr_udaljenost + put));
}
