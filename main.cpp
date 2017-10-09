#include "lagrange.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LaGrange w;
    w.show();

    return a.exec();
}
