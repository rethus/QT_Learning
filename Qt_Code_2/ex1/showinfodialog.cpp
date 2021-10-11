#include "showinfodialog.h"
#include "ui_showinfodialog.h"

showinfoDialog::showinfoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::showinfoDialog)
{
    ui->setupUi(this);
}

void showinfoDialog::show_info()
{
    ui->name_label->setText("姓名：" + name);
    ui->sex_label->setText("性别：" + sex);
    return ;
}

showinfoDialog::~showinfoDialog()
{
    delete ui;
}
