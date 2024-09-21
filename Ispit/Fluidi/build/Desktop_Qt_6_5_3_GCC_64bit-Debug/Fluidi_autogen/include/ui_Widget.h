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
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *pbPopuniIzvore;
    QLabel *label;
    QListWidget *lwIzvori;
    QLabel *label_2;
    QLineEdit *leUkZapreminaIzvora;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pbZapocniTransfer;
    QLabel *label_3;
    QLineEdit *leUkZapreminaRezervoara;
    QLabel *label_4;
    QLineEdit *leTekZapRezervoara;
    QLabel *label_5;
    QLineEdit *leGubitak;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        horizontalLayout = new QHBoxLayout(Widget);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        pbPopuniIzvore = new QPushButton(Widget);
        pbPopuniIzvore->setObjectName("pbPopuniIzvore");

        verticalLayout->addWidget(pbPopuniIzvore);

        label = new QLabel(Widget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        lwIzvori = new QListWidget(Widget);
        lwIzvori->setObjectName("lwIzvori");

        verticalLayout->addWidget(lwIzvori);

        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        leUkZapreminaIzvora = new QLineEdit(Widget);
        leUkZapreminaIzvora->setObjectName("leUkZapreminaIzvora");
        leUkZapreminaIzvora->setEnabled(false);

        verticalLayout->addWidget(leUkZapreminaIzvora);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        pbZapocniTransfer = new QPushButton(Widget);
        pbZapocniTransfer->setObjectName("pbZapocniTransfer");

        verticalLayout_2->addWidget(pbZapocniTransfer);

        label_3 = new QLabel(Widget);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        leUkZapreminaRezervoara = new QLineEdit(Widget);
        leUkZapreminaRezervoara->setObjectName("leUkZapreminaRezervoara");

        verticalLayout_2->addWidget(leUkZapreminaRezervoara);

        label_4 = new QLabel(Widget);
        label_4->setObjectName("label_4");

        verticalLayout_2->addWidget(label_4);

        leTekZapRezervoara = new QLineEdit(Widget);
        leTekZapRezervoara->setObjectName("leTekZapRezervoara");
        leTekZapRezervoara->setEnabled(false);
        leTekZapRezervoara->setDragEnabled(false);

        verticalLayout_2->addWidget(leTekZapRezervoara);

        label_5 = new QLabel(Widget);
        label_5->setObjectName("label_5");

        verticalLayout_2->addWidget(label_5);

        leGubitak = new QLineEdit(Widget);
        leGubitak->setObjectName("leGubitak");
        leGubitak->setEnabled(false);

        verticalLayout_2->addWidget(leGubitak);

        verticalSpacer = new QSpacerItem(20, 450, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pbPopuniIzvore->setText(QCoreApplication::translate("Widget", "Popuni izvore", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Izvori:", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Ukupna zapremina izvora:", nullptr));
        pbZapocniTransfer->setText(QCoreApplication::translate("Widget", "Zapocni transfer", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "Ukupna zapremina rezervoara:", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "Tekuca zapremina rezervoara:", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "Gubitak:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
