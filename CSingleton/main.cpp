#include "mainwindow.h"
#include <QApplication>

#include "Sun.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Sun *sun1 = Sun::getInstance();

    Sun *sun2 = Sun::getInstance();

    Sun *sun3 = Sun::getInstance();

//    MainWindow w;
//    w.show();

    return a.exec();
}
