#include "widget.h"
#include "mainwindow.h"
#include "form.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Form* form = new Form();
    form->resize(150, 300);
    form->show();
    return a.exec();
}
