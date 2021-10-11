#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->save_button, SIGNAL(clicked()), this, SLOT(save_info()));
    connect(ui->pre_button, SIGNAL(clicked()), this, SLOT(pre_list()));
    connect(ui->next_button, SIGNAL(clicked()), this, SLOT(next_list()));
}

void Widget::save_info()
{
    if(ui->name_lineedit->text() == "" && ui->mail_lineedit->text() == "") {
        QDialog* dlg = new QDialog();
        QLineEdit* led = new QLineEdit(dlg);
        led->setText("未填写姓名和邮箱！");
        dlg->show();
    } else if(ui->name_lineedit->text() == "") {
        QDialog* dlg = new QDialog();
        QLineEdit* led = new QLineEdit(dlg);
        led->setText("未填写姓名！");
        dlg->show();
    } else if(ui->mail_lineedit->text() == "") {
        QDialog* dlg = new QDialog();
        QLineEdit* led = new QLineEdit(dlg);
        led->setText("未填写邮箱！");
        dlg->show();
    } else {
        pos = lis.begin();
        lis.push_back(Node(ui->name_lineedit->text(), ui->sex_comboBox->currentText(), ui->age_spinBox->text(), ui->mail_lineedit->text()));
        qDebug()<<ui->name_lineedit->text()<<ui->sex_comboBox->currentText()<<ui->age_spinBox->value()<<ui->mail_lineedit->text();
    }
}

void Widget::pre_list()
{
    if(pos != lis.begin()) pos --;
    ui->show_lineedit->setText("姓名：" + (*pos).name + ", 性别：" + (*pos).sex + ", 年龄：" + (*pos).age + ", 邮箱：" + (*pos).mail);
}

void Widget::next_list()
{
    if(pos != lis.end()) pos ++;
    ui->show_lineedit->setText("姓名：" + (*pos).name + ", 性别：" + (*pos).sex + ", 年龄：" + (*pos).age + ", 邮箱：" + (*pos).mail);
}



Widget::~Widget()
{
    delete ui;
}

