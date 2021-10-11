/********************************************************************************
** Form generated from reading UI file 'catchinfodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CATCHINFODIALOG_H
#define UI_CATCHINFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_catchinfodialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *name_label;
    QLabel *sex_label;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *name_lineEdit;
    QLineEdit *sex_lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *catchinfodialog)
    {
        if (catchinfodialog->objectName().isEmpty())
            catchinfodialog->setObjectName(QString::fromUtf8("catchinfodialog"));
        catchinfodialog->resize(400, 300);
        verticalLayout_3 = new QVBoxLayout(catchinfodialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        name_label = new QLabel(catchinfodialog);
        name_label->setObjectName(QString::fromUtf8("name_label"));

        verticalLayout->addWidget(name_label);

        sex_label = new QLabel(catchinfodialog);
        sex_label->setObjectName(QString::fromUtf8("sex_label"));

        verticalLayout->addWidget(sex_label);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        name_lineEdit = new QLineEdit(catchinfodialog);
        name_lineEdit->setObjectName(QString::fromUtf8("name_lineEdit"));

        verticalLayout_2->addWidget(name_lineEdit);

        sex_lineEdit = new QLineEdit(catchinfodialog);
        sex_lineEdit->setObjectName(QString::fromUtf8("sex_lineEdit"));

        verticalLayout_2->addWidget(sex_lineEdit);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(catchinfodialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(catchinfodialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), catchinfodialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), catchinfodialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(catchinfodialog);
    } // setupUi

    void retranslateUi(QDialog *catchinfodialog)
    {
        catchinfodialog->setWindowTitle(QCoreApplication::translate("catchinfodialog", "Dialog", nullptr));
        name_label->setText(QCoreApplication::translate("catchinfodialog", "\345\247\223\345\220\215", nullptr));
        sex_label->setText(QCoreApplication::translate("catchinfodialog", "\346\200\247\345\210\253", nullptr));
    } // retranslateUi

};

namespace Ui {
    class catchinfodialog: public Ui_catchinfodialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATCHINFODIALOG_H
