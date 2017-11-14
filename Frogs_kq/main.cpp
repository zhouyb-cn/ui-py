#include "kq.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    kq w;
    w.show();

    return a.exec();
}
