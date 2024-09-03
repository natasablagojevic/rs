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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *leVrsta;
    QPushButton *pbUcitajPodatke;
    QListWidget *lwPodaci;
    QPushButton *pbUpisiPodatke;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(845, 621);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 0, 1, 1);

        leVrsta = new QLineEdit(centralwidget);
        leVrsta->setObjectName("leVrsta");

        gridLayout->addWidget(leVrsta, 1, 1, 1, 1);

        pbUcitajPodatke = new QPushButton(centralwidget);
        pbUcitajPodatke->setObjectName("pbUcitajPodatke");

        gridLayout->addWidget(pbUcitajPodatke, 0, 0, 1, 2);

        lwPodaci = new QListWidget(centralwidget);
        lwPodaci->setObjectName("lwPodaci");

        gridLayout->addWidget(lwPodaci, 2, 0, 1, 2);


        verticalLayout->addLayout(gridLayout);

        pbUpisiPodatke = new QPushButton(centralwidget);
        pbUpisiPodatke->setObjectName("pbUpisiPodatke");

        verticalLayout->addWidget(pbUpisiPodatke);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 845, 22));
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
        label->setText(QCoreApplication::translate("MainWindow", "Koja vrsta fajla se ucitava (JSON / bin):", nullptr));
        pbUcitajPodatke->setText(QCoreApplication::translate("MainWindow", "Ucitaj Podatke", nullptr));
        pbUpisiPodatke->setText(QCoreApplication::translate("MainWindow", "Upisi podatke u datoteku", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
