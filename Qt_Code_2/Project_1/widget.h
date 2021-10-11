#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QDialog>
#include <QLineEdit>
#include <list>
#include <QDebug>
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE
using namespace std;
struct Node {
    QString name, sex, age, mail;
    Node(QString _name, QString _sex, QString _age, QString _mail) : name(_name), sex(_sex), age(_age), mail(_mail) {}
};

class Widget : public QWidget
{
    Q_OBJECT

public:
    list<Node> lis;
    list<Node>::iterator pos;
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void save_info();
    void pre_list();
    void next_list();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
