#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    catch_dialog = new catchinfodialog(); catch_dialog->setWindowTitle("录入");
    show_dialog = new showinfoDialog(); show_dialog->setWindowTitle("显示");

    connect(ui->Catch_Info, SIGNAL(triggered()), this, SLOT(Catch_Info_Click()));
    connect(ui->Show_Info, SIGNAL(triggered()), this, SLOT(Show_Info_Click()));
    connect(ui->centralwidget, SIGNAL(triggered()), this, SLOT(Show_Info_Click()));
}

void MainWindow::Catch_Info_Click()
{
    catch_dialog->show();
    ui->Catch_Info->setEnabled(false);
    ui->Show_Info->setEnabled(true);
    return;
}

void MainWindow::Show_Info_Click()
{
    show_dialog->name = catch_dialog->name;
    show_dialog->sex = catch_dialog->sex;
    show_dialog->show_info();
    show_dialog->show();
    ui->Catch_Info->setEnabled(true);
    ui->Show_Info->setEnabled(false);
    return;
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::RightButton)
    {
       Show_Info_Click();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

