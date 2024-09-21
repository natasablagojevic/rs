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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *pbUcitajRobote;
    QLabel *label;
    QListWidget *lwRoboti;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QLineEdit *leBrojRobota;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pbZapocniBorbu;
    QLabel *label_3;
    QTableWidget *twBorbe;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_4;
    QLineEdit *leRobotSaNajvisePobeda;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        horizontalLayout = new QHBoxLayout(Widget);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        pbUcitajRobote = new QPushButton(Widget);
        pbUcitajRobote->setObjectName("pbUcitajRobote");

        verticalLayout->addWidget(pbUcitajRobote);

        label = new QLabel(Widget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        lwRoboti = new QListWidget(Widget);
        lwRoboti->setObjectName("lwRoboti");

        verticalLayout->addWidget(lwRoboti);

        verticalSpacer = new QSpacerItem(20, 250, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer);

        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        leBrojRobota = new QLineEdit(Widget);
        leBrojRobota->setObjectName("leBrojRobota");
        leBrojRobota->setEnabled(false);

        verticalLayout->addWidget(leBrojRobota);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        pbZapocniBorbu = new QPushButton(Widget);
        pbZapocniBorbu->setObjectName("pbZapocniBorbu");

        verticalLayout_2->addWidget(pbZapocniBorbu);

        label_3 = new QLabel(Widget);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        twBorbe = new QTableWidget(Widget);
        twBorbe->setObjectName("twBorbe");

        verticalLayout_2->addWidget(twBorbe);

        verticalSpacer_2 = new QSpacerItem(20, 250, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(verticalSpacer_2);

        label_4 = new QLabel(Widget);
        label_4->setObjectName("label_4");

        verticalLayout_2->addWidget(label_4);

        leRobotSaNajvisePobeda = new QLineEdit(Widget);
        leRobotSaNajvisePobeda->setObjectName("leRobotSaNajvisePobeda");
        leRobotSaNajvisePobeda->setEnabled(false);

        verticalLayout_2->addWidget(leRobotSaNajvisePobeda);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Borbe robota", nullptr));
        pbUcitajRobote->setText(QCoreApplication::translate("Widget", "Ucitaj robote", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Roboti:", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Broj robota:", nullptr));
        pbZapocniBorbu->setText(QCoreApplication::translate("Widget", "Zapocni borbu", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "Borbe:", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "Robot sa najvise pobeda:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
