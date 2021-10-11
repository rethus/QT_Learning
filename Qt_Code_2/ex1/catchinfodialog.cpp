#include "catchinfodialog.h"
#include "ui_catchinfodialog.h"

catchinfodialog::catchinfodialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::catchinfodialog)
{
    ui->setupUi(this);

    name = ui->name_lineEdit->text();
    sex = ui->sex_lineEdit->text();
}

void catchinfodialog::accept() {
    name = ui->name_lineEdit->text();
    sex = ui->sex_lineEdit->text();
    qDebug()<<name<<endl;
    qDebug()<<sex<<endl;
    close();
}

catchinfodialog::~catchinfodialog()
{
    delete ui;
}
