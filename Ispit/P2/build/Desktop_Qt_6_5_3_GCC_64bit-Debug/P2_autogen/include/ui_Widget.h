/********************************************************************************
** Form generated from reading UI file 'Widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *pbZapocniPosete;
    QLineEdit *leBrojPosetilaca;
    QPushButton *pbUcitajGradove;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QListWidget *lwGradovi;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QListWidget *lwArtikli;
    QSpacerItem *verticalSpacer;
    QLabel *label_4;
    QLineEdit *lePredjeniPut;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        verticalLayout_3 = new QVBoxLayout(Widget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(Widget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 0, 1, 1);

        pbZapocniPosete = new QPushButton(Widget);
        pbZapocniPosete->setObjectName("pbZapocniPosete");

        gridLayout->addWidget(pbZapocniPosete, 2, 0, 1, 2);

        leBrojPosetilaca = new QLineEdit(Widget);
        leBrojPosetilaca->setObjectName("leBrojPosetilaca");

        gridLayout->addWidget(leBrojPosetilaca, 1, 1, 1, 1);

        pbUcitajGradove = new QPushButton(Widget);
        pbUcitajGradove->setObjectName("pbUcitajGradove");

        gridLayout->addWidget(pbUcitajGradove, 0, 0, 1, 2);


        verticalLayout_3->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        lwGradovi = new QListWidget(Widget);
        lwGradovi->setObjectName("lwGradovi");

        verticalLayout->addWidget(lwGradovi);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_3 = new QLabel(Widget);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        lwArtikli = new QListWidget(Widget);
        lwArtikli->setObjectName("lwArtikli");

        verticalLayout_2->addWidget(lwArtikli);

        verticalSpacer = new QSpacerItem(20, 260, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(verticalSpacer);

        label_4 = new QLabel(Widget);
        label_4->setObjectName("label_4");

        verticalLayout_2->addWidget(label_4);

        lePredjeniPut = new QLineEdit(Widget);
        lePredjeniPut->setObjectName("lePredjeniPut");
        lePredjeniPut->setEnabled(false);

        verticalLayout_2->addWidget(lePredjeniPut);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Broj posetilaca: ", nullptr));
        pbZapocniPosete->setText(QCoreApplication::translate("Widget", "Zapocni posete", nullptr));
        pbUcitajGradove->setText(QCoreApplication::translate("Widget", "Ucitaj gradove", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Gradovi:", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "Pokupljeni artikli:", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "Predjeni put:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
