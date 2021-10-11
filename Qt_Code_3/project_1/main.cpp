#include "widget.h"
#include <QApplication>
#include "dialog.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    Widget w;
//    w.show();
    Dialog* dlg = new Dialog();
    dlg->show();
    return a.exec();
}
