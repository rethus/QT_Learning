#ifndef SHOWINFODIALOG_H
#define SHOWINFODIALOG_H

#include <QDialog>

namespace Ui {
class showinfoDialog;
}

class showinfoDialog : public QDialog
{
    Q_OBJECT

public:
    QString name, sex;
    explicit showinfoDialog(QWidget *parent = nullptr);
    void show_info();
    ~showinfoDialog();

private:
    Ui::showinfoDialog *ui;
};

#endif // SHOWINFODIALOG_H
