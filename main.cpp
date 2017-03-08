#include "keeppass.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    KeepPass w;
    w.show();

    return a.exec();
}
