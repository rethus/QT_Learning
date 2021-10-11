#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialog.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    Dialog* dlg = new Dialog();
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void sign_action_click();
    void update_action_click();
    void change_text(QString s);

protected:
    void mouseDoubleClickEvent(QMouseEvent* e);
    void mouseMoveEvent(QMouseEvent *e);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
