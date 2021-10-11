#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QDialog* dlg = new QDialog();
    dlg->setWindowTitle(QObject::tr("I'm a dialog"));
//    dlg->show();
    dlg->exec();
}

Widget::~Widget()
{
    delete ui;
}

