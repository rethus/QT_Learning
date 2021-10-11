/********************************************************************************
** Form generated from reading UI file 'showinfodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWINFODIALOG_H
#define UI_SHOWINFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_showinfoDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *name_label;
    QLabel *sex_label;

    void setupUi(QDialog *showinfoDialog)
    {
        if (showinfoDialog->objectName().isEmpty())
            showinfoDialog->setObjectName(QString::fromUtf8("showinfoDialog"));
        showinfoDialog->resize(400, 119);
        verticalLayout = new QVBoxLayout(showinfoDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        name_label = new QLabel(showinfoDialog);
        name_label->setObjectName(QString::fromUtf8("name_label"));

        verticalLayout->addWidget(name_label);

        sex_label = new QLabel(showinfoDialog);
        sex_label->setObjectName(QString::fromUtf8("sex_label"));

        verticalLayout->addWidget(sex_label);


        retranslateUi(showinfoDialog);

        QMetaObject::connectSlotsByName(showinfoDialog);
    } // setupUi

    void retranslateUi(QDialog *showinfoDialog)
    {
        showinfoDialog->setWindowTitle(QCoreApplication::translate("showinfoDialog", "Dialog", nullptr));
        name_label->setText(QCoreApplication::translate("showinfoDialog", "\345\247\223\345\220\215\357\274\232", nullptr));
        sex_label->setText(QCoreApplication::translate("showinfoDialog", "\346\200\247\345\210\253\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class showinfoDialog: public Ui_showinfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWINFODIALOG_H
