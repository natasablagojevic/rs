#include "Widget.h"
#include "./ui_Widget.h"

#include <QJsonDocument>
#include <QVariant>
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <iostream>
#include "./SourceThread.h"


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget),
    m_sources()
{
    ui->setupUi(this);

    connect(ui->pbPopuniIzvore, &QPushButton::clicked, this, &Widget::onUcitajPodatke);
    connect(ui->pbZapocniTransfer, &QPushButton::clicked, this, &Widget::onZapocniTransfer);
}

Widget::~Widget()
{
    delete ui;
    qDeleteAll(m_sources);
}

void Widget::onUcitajPodatke()
{
    const auto filename = QFileDialog::getOpenFileName(this, "Ovtovite JSON", "../../", "JSON (*.json)");

    QFile file(filename);

    qDeleteAll(m_sources);
    m_sources.clear();

    if (file.open(QFile::ReadOnly)) {
        auto doc = QJsonDocument::fromJson(file.readAll());
        const auto vars = doc.toVariant().toList();

        for (const auto &var : vars) {
            auto source = new Source();
            source->fromQVariant(var);
            m_sources.push_back(source);
        }
    }

    auto ukupna_zapremina = 0u;

    ui->lwIzvori->clear();

    for (const auto &source : m_sources) {
        ui->lwIzvori->addItem(source->toQString());
        ukupna_zapremina += source->getZapremina();
    }

    ui->leUkZapreminaIzvora->setText(QString::number(ukupna_zapremina));
}

void Widget::onZapocniTransfer()
{
    bool parsed;
    const auto volume = ui->leUkZapreminaRezervoara->text().toUInt(&parsed);

    if (!parsed || volume <= 0) {

        std::cout << QString::number(volume).toStdString() << std::endl;

        QMessageBox::information(this, "Obavestenje", "Neispravan unos zapremine rezervoara!");

        // auto message = new QMessageBox();
        // message->information(this, "Obavestenje", "Neispravan unos zapremine rezervoara!");
        // message->exec();

        return ;
    }


    ui->leTekZapRezervoara->setText("0");
    ui->leGubitak->setText("0");

    // za svaki izvor pokrenuti jednu nit ....

    const auto n = m_sources.size();
    for (auto i = 0; i < n; i++) {
        auto thread = new SourceThread(m_sources, &m_mutex, this);

        connect(thread, &SourceThread::isticanje, this, &Widget::onTekucaZapreminaRezervoara);
        connect(thread, &SourceThread::finished, thread, &SourceThread::deleteLater);

        thread->start();
    }

}

void Widget::onTekucaZapreminaRezervoara(uint zapremina)
{
    auto ukupnaZapreminaRez = ui->leUkZapreminaRezervoara->text().toUInt();
    auto gubitak = ui->leUkZapreminaIzvora->text().toUInt();
    auto tekZapreminaRez = ui->leTekZapRezervoara->text().toUInt();

    if (ukupnaZapreminaRez - tekZapreminaRez > zapremina) {
        tekZapreminaRez += zapremina;
        ui->leTekZapRezervoara->setText(QString::number(tekZapreminaRez));
    } else {
        ui->leTekZapRezervoara->setText(QString::number(zapremina));
        zapremina -= ukupnaZapreminaRez - tekZapreminaRez;
        gubitak += zapremina;
        ui->leGubitak->setText(QString::number(gubitak));
    }

    QMutexLocker lock(&m_mutex);
    for (auto i = 0; i < m_sources.size(); i++)
        ui->lwIzvori->item(i)->setText(m_sources[i]->toQString());

}
