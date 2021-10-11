#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.setWindowTitle(QObject::tr("I'm the main window"));
    w.show();
    return a.exec();
}
