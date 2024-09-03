/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *pbPopuniIzvore;
    QLabel *label;
    QListWidget *lwIzvori;
    QLabel *label_2;
    QLineEdit *leZapreminaIzvora;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pbZapocniTransfer;
    QLabel *label_3;
    QLineEdit *leZapreminaRezervoara;
    QLabel *label_4;
    QLineEdit *leTekucaZapRezervoara;
    QLabel *label_5;
    QLineEdit *leGubitak;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(550, 450);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        pbPopuniIzvore = new QPushButton(centralwidget);
        pbPopuniIzvore->setObjectName("pbPopuniIzvore");

        verticalLayout->addWidget(pbPopuniIzvore);

        label = new QLabel(centralwidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        lwIzvori = new QListWidget(centralwidget);
        lwIzvori->setObjectName("lwIzvori");

        verticalLayout->addWidget(lwIzvori);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        leZapreminaIzvora = new QLineEdit(centralwidget);
        leZapreminaIzvora->setObjectName("leZapreminaIzvora");
        leZapreminaIzvora->setEnabled(false);

        verticalLayout->addWidget(leZapreminaIzvora);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        pbZapocniTransfer = new QPushButton(centralwidget);
        pbZapocniTransfer->setObjectName("pbZapocniTransfer");

        verticalLayout_2->addWidget(pbZapocniTransfer);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        leZapreminaRezervoara = new QLineEdit(centralwidget);
        leZapreminaRezervoara->setObjectName("leZapreminaRezervoara");

        verticalLayout_2->addWidget(leZapreminaRezervoara);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");

        verticalLayout_2->addWidget(label_4);

        leTekucaZapRezervoara = new QLineEdit(centralwidget);
        leTekucaZapRezervoara->setObjectName("leTekucaZapRezervoara");
        leTekucaZapRezervoara->setEnabled(false);

        verticalLayout_2->addWidget(leTekucaZapRezervoara);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");

        verticalLayout_2->addWidget(label_5);

        leGubitak = new QLineEdit(centralwidget);
        leGubitak->setObjectName("leGubitak");
        leGubitak->setEnabled(false);

        verticalLayout_2->addWidget(leGubitak);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 550, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pbPopuniIzvore->setText(QCoreApplication::translate("MainWindow", "Popuni izvore", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Izvori", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Ukupna zapremina izvora", nullptr));
        pbZapocniTransfer->setText(QCoreApplication::translate("MainWindow", "Zapocni transfer", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Ukupna zapremina rezervoara", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Tekuza zapremina rezervoara", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Gubitak", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
