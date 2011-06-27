#include <QtGui/QApplication>
#include "vfo.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    vfo w;
    w.show();

    return a.exec();
}
