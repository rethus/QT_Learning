#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    statusLabel = new QLabel;
    statusLabel->setText("");
    statusLabel->setFixedWidth(100);
    MousePosLabel = new QLabel;
    MousePosLabel->setText(tr(""));
    MousePosLabel->setFixedWidth(100);
    ui->pushButton->setText(tr("button"));
    statusBar()->addPermanentWidget(statusLabel);
    statusBar()->addPermanentWidget(MousePosLabel);
    this->setMouseTracking(true);

    connect(ui->bigger_actions, SIGNAL(triggered()), this, SLOT(bigger_action()));
    connect(ui->smaller_actions, SIGNAL(triggered()), this, SLOT(smaller_action()));
    connect(ui->normal_actions, SIGNAL(triggered()), this, SLOT(normal_action()));

}

void MainWindow::bigger_action()
{
    nowwidth = this->frameGeometry().width();
    nowheight = this->frameGeometry().height();
    nowx = this->frameGeometry().x();
    nowy = this->frameGeometry().y();
    setWindowState(Qt::WindowMaximized);
}

void MainWindow::normal_action()
{
    this->move(nowx, nowy);
    this->resize(nowwidth, nowheight);
}

void MainWindow::smaller_action()
{
    setWindowState(Qt::WindowMinimized);
}

void MainWindow::mousePressEvent(QMouseEvent *e)
{
    doit = 1;
}

void MainWindow::mouseMoveEvent(QMouseEvent *e)
{
    if(doit == 1) {
        QString str="("+QString::number(e->x())+","+QString::number(e->y())+")";
        statusBar()->showMessage("当前坐标" + str);
        ui->pushButton->move(e->pos().x(), e->pos().y() - 50);
    }
}

void MainWindow::mouseReleaseEvent(QMouseEvent *e)
{
    doit = 0;
//    statusBar()->showMessage("");
}

void MainWindow::mouseDoubleClickEvent(QMouseEvent* e)
{
    if(e->button()==Qt::LeftButton)
        bigger_action();
    if(e->button()==Qt::RightButton)
        normal_action();
}



MainWindow::~MainWindow()
{
    delete ui;
}
