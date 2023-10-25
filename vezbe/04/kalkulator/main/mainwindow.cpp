#include "mainwindow.h"
#include <QApplication>

/**
 * Sistem vodjen dogadjajima 
*/

int main(int argc, char **argv)
{
    QApplication a(argc, argv);
    MainWindow w;

    w.show();  // event loop

    return a.exec();
}