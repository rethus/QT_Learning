#include "form.h"
#include "ui_form.h"
Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(on_pushbutton_colordialog()));
    connect(ui->pushButton_5, SIGNAL(clicked()), this, SLOT(on_pushbutton_filedialog()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(on_pushbutton_fontdialog()));
    connect(ui->pushButton_6, SIGNAL(clicked()), this, SLOT(on_pushbutton_inputdialog()));
    connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(on_pushbutton_messagebox()));
    connect(ui->pushButton_7, SIGNAL(clicked()), this, SLOT(on_pushbutton_progressdialog()));
    connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(on_pushbutton_errormessage()));
    connect(ui->pushButton_8, SIGNAL(clicked()), this, SLOT(on_pushbutton_wizard()));

}

void Form::on_pushbutton_colordialog() {
    QColorDialog* colordialog = new QColorDialog();
    colordialog->show();
}

void Form::on_pushbutton_filedialog() {
    QFileDialog* filedialog = new QFileDialog();
    filedialog->show();
}
void Form::on_pushbutton_fontdialog() {
    QFontDialog* fontdialog = new QFontDialog();
    fontdialog->show();
}
void Form::on_pushbutton_inputdialog() {
    QInputDialog* inputdialog = new QInputDialog();
    inputdialog->show();
}
void Form::on_pushbutton_messagebox() {
    QMessageBox* messagebox = new QMessageBox();
    messagebox->show();
}
void Form::on_pushbutton_progressdialog() {
    QProgressDialog* progressdialog = new QProgressDialog();
    progressdialog->show();
}
void Form::on_pushbutton_errormessage() {
    QErrorMessage* errormessage = new QErrorMessage();
    errormessage->show();
}
void Form::on_pushbutton_wizard() {
    QWizard* wizard = new QWizard();
    wizard->show();
}

Form::~Form()
{
    delete ui;
}
