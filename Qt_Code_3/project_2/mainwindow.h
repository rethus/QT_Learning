#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMainWindow>
#include <QLabel>
#include <QStatusBar>
#include <QMouseEvent>
#include <QPushButton>
#include <QAction>
#include <QIcon>
namespace Ui {
class MainWindow;

}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    int nowx = 400, nowy = 400;
    int nowwidth = 400, nowheight = 400;
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QLabel *statusLabel;
    QLabel *MousePosLabel;

private slots:
    void bigger_action();
    void normal_action();
    void smaller_action();


protected:
    int doit = 0;
    void mousePressEvent(QMouseEvent*e);
    void mouseMoveEvent(QMouseEvent*e);
    void mouseReleaseEvent(QMouseEvent*e);
    void mouseDoubleClickEvent(QMouseEvent *e);
};

#endif // MAINWINDOW_H
