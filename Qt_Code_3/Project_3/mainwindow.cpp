#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->sign_action, SIGNAL(triggered()), this, SLOT(sign_action_click()));
//    connect(dlg, SIGNAL(Dialog::get_text()), this, SLOT(change_text()));
    connect(dlg, &Dialog::get_text, this, &MainWindow::change_text);
}

void MainWindow::change_text(QString s)
{
    ui->main_textEdit->setText(s);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::sign_action_click()
{
    dlg->show();
}

void MainWindow::update_action_click()
{

}

void MainWindow::mouseDoubleClickEvent(QMouseEvent* e)
{
    if(dlg->doit == 1) {
        dlg->show();
    }
}

void MainWindow::mouseMoveEvent(QMouseEvent *e)
{

}
