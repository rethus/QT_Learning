#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    void showDlg();
    ~Form();

private slots:
    void changeLabelText();

private:
    Ui::Form *ui;
};

#endif // FORM_H
