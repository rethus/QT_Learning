#include "form.h"
#include "ui_form.h"

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
    QPushButton* pushbutton = new QPushButton(this);
    pushbutton->resize(100, 50);
    pushbutton->move(20, 180);
    pushbutton->setText(QObject::tr("Click me!"));
    ui->label->move(20, 50);
    ui->label->setText(QObject::tr("access from code"));

    connect(pushbutton, SIGNAL(clicked()), this, SLOT(changeLabelText()));
}

void Form::changeLabelText()
{
    QString s = ui->label->text();
    if(s == "access from code") ui->label->setText(QObject::tr("I'm a label"));
    else if(s == "I'm a label") ui->label->setText(QObject::tr("access from code"));
}

void Form::showDlg() {
    QString s = ui->label->text();
    if(s == "access from code") ui->label->setText(QObject::tr("I'm a label"));
    else if(s == "I'm a label") ui->label->setText(QObject::tr("access from code"));
}


Form::~Form()
{
    delete ui;
}
