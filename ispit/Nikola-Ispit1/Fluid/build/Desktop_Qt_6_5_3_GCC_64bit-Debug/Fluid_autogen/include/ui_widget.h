/********************************************************************************
** Form generated from reading UI file 'widget.ui'
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
    QPushButton *pbFillSources;
    QLabel *label;
    QListWidget *lwSources;
    QLabel *label_2;
    QLineEdit *leSources;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pbStartTransfer;
    QLabel *label_3;
    QLineEdit *leTotalTenk;
    QLabel *label_4;
    QLineEdit *leCurrTenk;
    QLabel *label_5;
    QLineEdit *leLoss;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(885, 629);
        horizontalLayout = new QHBoxLayout(Widget);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        pbFillSources = new QPushButton(Widget);
        pbFillSources->setObjectName("pbFillSources");

        verticalLayout->addWidget(pbFillSources);

        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label);

        lwSources = new QListWidget(Widget);
        lwSources->setObjectName("lwSources");

        verticalLayout->addWidget(lwSources);

        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_2);

        leSources = new QLineEdit(Widget);
        leSources->setObjectName("leSources");
        leSources->setEnabled(false);

        verticalLayout->addWidget(leSources);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        pbStartTransfer = new QPushButton(Widget);
        pbStartTransfer->setObjectName("pbStartTransfer");

        verticalLayout_2->addWidget(pbStartTransfer);

        label_3 = new QLabel(Widget);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        leTotalTenk = new QLineEdit(Widget);
        leTotalTenk->setObjectName("leTotalTenk");

        verticalLayout_2->addWidget(leTotalTenk);

        label_4 = new QLabel(Widget);
        label_4->setObjectName("label_4");

        verticalLayout_2->addWidget(label_4);

        leCurrTenk = new QLineEdit(Widget);
        leCurrTenk->setObjectName("leCurrTenk");
        leCurrTenk->setEnabled(false);

        verticalLayout_2->addWidget(leCurrTenk);

        label_5 = new QLabel(Widget);
        label_5->setObjectName("label_5");

        verticalLayout_2->addWidget(label_5);

        leLoss = new QLineEdit(Widget);
        leLoss->setObjectName("leLoss");
        leLoss->setEnabled(false);

        verticalLayout_2->addWidget(leLoss);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pbFillSources->setText(QCoreApplication::translate("Widget", "Popuni izvore", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Izvori", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Ukupna zapremina izvora", nullptr));
        pbStartTransfer->setText(QCoreApplication::translate("Widget", "Zapocni transfer", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "Ukupna zapremina rezervoara:", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "Tekuca zapremina rezervoara", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "Gubitak", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
