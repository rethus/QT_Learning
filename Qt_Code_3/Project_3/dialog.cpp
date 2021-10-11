#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}


Dialog::~Dialog()
{
    delete ui;
}

void Dialog::accept()
{
    if(ui->username_lineEdit->text() == "KiloFish" && (ui->password_lineEdit->text() == "520" || ui->password_lineEdit->text() == "123")) {
        emit get_text(ui->username_lineEdit->text() + tr("登陆成功!"));
    } else {
        doit = 1;
        emit get_text(tr("用户输入错误，请重新输入"));
    }
    ui->username_lineEdit->setText("");
    ui->password_lineEdit->setText("");
    close();
}
