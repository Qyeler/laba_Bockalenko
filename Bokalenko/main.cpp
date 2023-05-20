#include "Bokalenko.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Bokalenko w;
    w.show();
    return a.exec();
}
