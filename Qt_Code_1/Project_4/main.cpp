#include "widget.h"
#include "form.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Form* form = new Form();
    form->show();
    return a.exec();
}
