#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
namespace Ui {
class Mainwindow;
}

class Mainwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit Mainwindow(QWidget *parent = nullptr);
    void showDlg();
    ~Mainwindow();

private slots:
    void changeLabelText();

private:
    Ui::Mainwindow *ui;
};

#endif // MAINWINDOW_H
