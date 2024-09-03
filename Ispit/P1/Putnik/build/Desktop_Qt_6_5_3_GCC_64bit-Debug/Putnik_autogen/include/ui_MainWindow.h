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
#include <QtWidgets/QGridLayout>
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
    QGridLayout *gridLayout;
    QPushButton *pbZapocniPosete;
    QLineEdit *leBrojPosetilaca;
    QLabel *label_4;
    QPushButton *pbUcitajGradove;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListWidget *lwGradovi;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QListWidget *lwArtikli;
    QSpacerItem *verticalSpacer;
    QLabel *label_3;
    QLineEdit *lePredjeniPut;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(964, 641);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        pbZapocniPosete = new QPushButton(centralwidget);
        pbZapocniPosete->setObjectName("pbZapocniPosete");

        gridLayout->addWidget(pbZapocniPosete, 2, 0, 1, 2);

        leBrojPosetilaca = new QLineEdit(centralwidget);
        leBrojPosetilaca->setObjectName("leBrojPosetilaca");

        gridLayout->addWidget(leBrojPosetilaca, 1, 1, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        pbUcitajGradove = new QPushButton(centralwidget);
        pbUcitajGradove->setObjectName("pbUcitajGradove");

        gridLayout->addWidget(pbUcitajGradove, 0, 0, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        lwGradovi = new QListWidget(centralwidget);
        lwGradovi->setObjectName("lwGradovi");

        verticalLayout->addWidget(lwGradovi);


        gridLayout->addLayout(verticalLayout, 3, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        lwArtikli = new QListWidget(centralwidget);
        lwArtikli->setObjectName("lwArtikli");

        verticalLayout_2->addWidget(lwArtikli);

        verticalSpacer = new QSpacerItem(20, 250, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(verticalSpacer);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        lePredjeniPut = new QLineEdit(centralwidget);
        lePredjeniPut->setObjectName("lePredjeniPut");
        lePredjeniPut->setEnabled(false);

        verticalLayout_2->addWidget(lePredjeniPut);


        gridLayout->addLayout(verticalLayout_2, 3, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 964, 22));
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
        pbZapocniPosete->setText(QCoreApplication::translate("MainWindow", "Zapocni posete", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Broj posetilaca", nullptr));
        pbUcitajGradove->setText(QCoreApplication::translate("MainWindow", "Ucitaj gradove", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Gradovi", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Pokupljeni artikli", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Predjen put", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
