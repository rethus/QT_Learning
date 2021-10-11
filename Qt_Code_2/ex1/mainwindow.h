#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDialog>
#include <QPushButton>
#include <QLineEdit>
#include <QInputDialog>
#include <QLabel>
#include <QDebug>
#include <QDialogButtonBox>
#include "catchinfodialog.h"
#include "showinfodialog.h"
#include <QMouseEvent>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    catchinfodialog* catch_dialog;
    showinfoDialog* show_dialog;
    void mousePressEvent(QMouseEvent *event);
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void Catch_Info_Click();
    void Show_Info_Click();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
