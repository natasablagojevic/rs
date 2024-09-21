#include "Widget.h"
#include "./ui_Widget.h"

#include <QFileDialog>
#include <QFile>
#include <QVector>
#include <QString>
#include <QJsonDocument>
#include "./CityThread.h"
#include <QMutexLocker>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget),
    m_cities()
{
    ui->setupUi(this);

    connect(ui->pbUcitajGradove, &QPushButton::clicked, this, &Widget::onPbLoadData);
    connect(ui->pbZapocniPosete, &QPushButton::clicked, this, &Widget::onPbStartVisits);
}

Widget::~Widget()
{
    delete ui;
    qDeleteAll(m_cities);
}

void Widget::onPbLoadData()
{
    const auto filepaths = QFileDialog::getOpenFileNames(this, "Umite fajlove", "../../..", "JSON (*.json)");

    qDeleteAll(m_cities);
    m_cities.clear();

    for (const auto &filepath : filepaths) {
        loadJson(filepath);
    }


    printCities(m_cities);
}

void Widget::onPbStartVisits()
{
    if (m_cities.isEmpty())
        return ;

    bool parsed;
    const auto numVisitors = ui->leBrojPosetilaca->text().toInt(&parsed);

    if (!parsed || numVisitors <= 0)
        return ;


    ui->pbUcitajGradove->setEnabled(false);
    ui->pbZapocniPosete->setEnabled(false);

    ui->lePredjeniPut->clear();
    ui->lwArtikli->clear();

    // pokretanje onoliko niti koliko ima posetilaca ...

    for (auto i = 0; i < numVisitors; i++) {
        auto thread = new CityThread(m_cities, this);

        connect(thread, &CityThread::takenArticle, this, &Widget::takenArticle);
        connect(thread, &CityThread::distance, this, &Widget::distance);
        connect(thread, &CityThread::finished, thread, &CityThread::deleteLater);

        thread->start();
    }


}

void Widget::takenArticle(QString article)
{
    if (m_articles.contains(article)) {
        m_articles[article] += 1;
    } else {
        m_articles[article] = 1;
    }

    QMutexLocker locker(&m_mutex);
    ui->lwArtikli->clear();
    for (const auto &item : m_articles.toStdMap()){
        const auto text = item.first + ": " + QString::number(item.second);
        ui->lwArtikli->addItem(text);
    }
}

void Widget::distance(uint dis)
{
    QMutexLocker locker(&m_mutex);
    auto put = ui->lePredjeniPut->text().toUInt();
    ui->lePredjeniPut->setText(QString::number(put + dis));
}

void Widget::loadJson(const QString &filepath)
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

void Widget::printCities(QVector<City *> cities)
{
    ui->lwGradovi->clear();

    for (const auto &city : cities)
        ui->lwGradovi->addItem(city->toQString());
}
