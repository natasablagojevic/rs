#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "fraction.h"

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWindow) // kreira se instanca te jedne klase
{
    ui->setupUi(this); // prilikom instaciranja
    // da se ovo ne pozove, ne bismo imali ovaj prozor koji iskoci
    // kada se on instancira imacemo sve elemente u prozoru koje smo naveli
    // to sve radi u pozadini za nas

    /**
     * ako kao peti argument navedemo Qt::DirectConnection
     * onda ce slot biti pozvan onog trenutka, kada bude bio
     * pozvan signal (kada se emituje signal)
     */
    QObject::connect(ui->pbIncFirst, &QPushButton::clicked, this, &MainWindow::onIncrementFirst);
}

MainWindow::~MainWindow()
{
    delete ui; // ove se unistava
}

void MainWindow::onIncrementFirst()
{
    const auto fracText = ui->leFirstFraction->text();
    const auto fracElements = fracText.split("/");
    if (fracElements.length() != 2) {
        ui->leResult->setText("Prvi razlomak nije ispravnog formata");
    }

    bool isParsed;
    const auto num = fracElements[0].toInt(&isParsed);

    if (!isParsed) {
        ui->leResult->setText("Brojilac nije ceo broj");
        return ;
    }


    const auto denum = fracElements[1].toUInt(&isParsed);

    if (!isParsed) {
        ui->leResult->setText("Imenilac nije neoznacen ceo broj");
        return ;
    }

    if (denum == 0u) {
        ui->leResult->setText("Zabranjeno je deljenje nulom!");
        return ;
    }

    Fraction f(num, denum);
    ++f;

    ui->leFirstFraction->setText(f);
    ui->leResult->setText("");

}

