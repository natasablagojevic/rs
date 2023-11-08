/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *leFirstFraction;
    QLineEdit *leSecondFraction;
    QGridLayout *gridLayout;
    QPushButton *pbIncFirst;
    QPushButton *pbAdd;
    QPushButton *pbIncSecond;
    QPushButton *pbSub;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLineEdit *leResult;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(706, 485);
        verticalLayout_2 = new QVBoxLayout(MainWindow);
        verticalLayout_2->setObjectName("verticalLayout_2");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(MainWindow);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(MainWindow);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        leFirstFraction = new QLineEdit(MainWindow);
        leFirstFraction->setObjectName("leFirstFraction");

        formLayout->setWidget(0, QFormLayout::FieldRole, leFirstFraction);

        leSecondFraction = new QLineEdit(MainWindow);
        leSecondFraction->setObjectName("leSecondFraction");

        formLayout->setWidget(1, QFormLayout::FieldRole, leSecondFraction);


        verticalLayout_2->addLayout(formLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        pbIncFirst = new QPushButton(MainWindow);
        pbIncFirst->setObjectName("pbIncFirst");

        gridLayout->addWidget(pbIncFirst, 0, 0, 1, 1);

        pbAdd = new QPushButton(MainWindow);
        pbAdd->setObjectName("pbAdd");

        gridLayout->addWidget(pbAdd, 1, 0, 1, 1);

        pbIncSecond = new QPushButton(MainWindow);
        pbIncSecond->setObjectName("pbIncSecond");

        gridLayout->addWidget(pbIncSecond, 0, 1, 1, 1);

        pbSub = new QPushButton(MainWindow);
        pbSub->setObjectName("pbSub");

        gridLayout->addWidget(pbSub, 1, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_3 = new QLabel(MainWindow);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        leResult = new QLineEdit(MainWindow);
        leResult->setObjectName("leResult");

        verticalLayout->addWidget(leResult);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Prvi razlomak", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Drugi razlomak", nullptr));
        pbIncFirst->setText(QCoreApplication::translate("MainWindow", "++R1", nullptr));
        pbAdd->setText(QCoreApplication::translate("MainWindow", "saberi", nullptr));
        pbIncSecond->setText(QCoreApplication::translate("MainWindow", "++R2", nullptr));
        pbSub->setText(QCoreApplication::translate("MainWindow", "oduzmi", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Rezultat", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
