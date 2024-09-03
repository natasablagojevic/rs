#include "widget.h"
#include "./ui_widget.h"

#include <QFile>
#include <QString>
#include <QPushButton>
#include <QLineEdit>
#include <QFileDialog>
#include <QXmlStreamReader>
#include "./source.h"
#include "./sourcethread.h"
#include <QMutexLocker>
#include <QMutex>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);


    connect(ui->pbFillSources, &QPushButton::clicked, this, &Widget::onFillSources);
    connect(ui->pbStartTransfer, &QPushButton::clicked, this, &Widget::onStartTransfer);
}

Widget::~Widget()
{
    delete ui;
    qDeleteAll(m_sources); // obavezno jer imamo QVector<Source *>
}

void Widget::onFillSources()
{
    const auto success = deserializeSources();
    if (!success) {
        return ;
    }

    showSources();
    showTotalVolume();
}

void Widget::onStartTransfer()
{
    ui->leCurrTenk->setText(QString::number(0));
    ui->leLoss->setText("0");

    for (const auto source : m_sources) {
        Q_UNUSED(source);

        auto thread = new SourceThread(m_sources, &m_mutex, this);

        connect(thread, &SourceThread::sourceLostFluid, this, &Widget::onSourceLostFluid);
        connect(thread, &SourceThread::finished, thread, &SourceThread::deleteLater);
        thread->start();
    }
}

void Widget::onSourceLostFluid(unsigned int lostFluid)
{
    const auto fullTankVolume = ui->leTotalTenk->text().toUInt();
    auto currentTankVolume = ui->leCurrTenk->text().toUInt();
    auto currentLostVolume = ui->leLoss->text().toUInt();

    if (fullTankVolume > currentTankVolume + lostFluid) {
        // nije prepunjen rezervoar
        currentTankVolume += lostFluid;
        ui->leCurrTenk->setText(QString::number(currentTankVolume));
    } else {
        ui->leCurrTenk->setText(QString::number(fullTankVolume));

        const auto loss = lostFluid - (fullTankVolume - currentLostVolume);
        currentLostVolume += loss;
        ui->leLoss->setText(QString::number(currentLostVolume));
    }

    QMutexLocker lock(&m_mutex);

    for (auto i = 0; i < m_sources.size(); i++) {
        ui->lwSources->item(i)->setText(m_sources[i]->toQString());
    }
}

bool Widget::deserializeSources()
{
    const auto fileName = QFileDialog::getOpenFileName(this, "Select XML file with Sources", "", "XML files (*.xml)");

    QFile input(fileName);

    if (input.open(QFile::ReadOnly)) {
        return false;
    }

    // obavezno mora da se navede, jer hocemo kada ponovo ucitavamo\
    // da na vec postojece podatke prilepimo nove
    m_sources.clear();
    qDeleteAll(m_sources);


    // brisanje starih informacija
    QXmlStreamReader xmlStream(&input);
    xmlStream.readNextStartElement(); // <sources>

    while (xmlStream.readNextStartElement()) { // <source>
        auto source = new Source();
        QVariantMap map;

        while (xmlStream.readNextStartElement()) { // <name>, <volume>
            const auto elemName = xmlStream.name().toString();
            const auto elemValue = xmlStream.readElementText();

            if (elemName == "name") {
                map.insert("name", elemValue);
            } else if (elemName == "volume") {
                map.insert("volume", elemValue.toUInt());
            }
        }

        source->fromVariant(map);
        m_sources.push_back(source);
    }

    return true;
}

void Widget::showSources()
{
    ui->lwSources->clear();

    for (const auto source : m_sources) {
        ui->lwSources->addItem(source->toQString());
    }
}

void Widget::showTotalVolume()
{
    auto totalVolume = 0u;
    for (const auto source : m_sources) {
        totalVolume += source->getVolume();
    }

    ui->leSources->setText(QString::number(totalVolume));
}
