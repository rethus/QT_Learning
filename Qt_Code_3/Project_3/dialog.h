#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QMessageBox>
namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    int doit = 0;
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

signals:
    void get_text(QString s);

protected:
    void accept() override;

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
