#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <QColorDialog>
#include <QFileDialog>
#include <QFontDialog>
#include <QInputDialog>
#include <QMessageBox>
#include <QProgressDialog>
#include <QErrorMessage>
#include <QWizard>
namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();

private slots:
    void on_pushbutton_colordialog();
    void on_pushbutton_filedialog();
    void on_pushbutton_fontdialog();
    void on_pushbutton_inputdialog();
    void on_pushbutton_messagebox();
    void on_pushbutton_progressdialog();
    void on_pushbutton_errormessage();
    void on_pushbutton_wizard();

private:
    Ui::Form *ui;
};

#endif // FORM_H
