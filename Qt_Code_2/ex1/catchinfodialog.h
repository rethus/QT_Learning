#ifndef CATCHINFODIALOG_H
#define CATCHINFODIALOG_H

#include <QDialog>
#include <QDebug>
namespace Ui {
class catchinfodialog;
}

class catchinfodialog : public QDialog
{
    Q_OBJECT

public:
    QString name, sex;
    explicit catchinfodialog(QWidget *parent = nullptr);
    void accept() override;
    ~catchinfodialog();

private:
    Ui::catchinfodialog *ui;
};

#endif // CATCHINFODIALOG_H
