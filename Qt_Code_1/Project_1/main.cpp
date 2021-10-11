#include "widget.h"

#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    Widget w;
    QLabel* label1 = new QLabel(), * Label2 = new QLabel(&w);
    label1->setText(QObject::tr("我是非子部件"));
    Label2->setText(QObject::tr("我是子部件"));
    label1->show();
    w.show();
    return a.exec();
}
