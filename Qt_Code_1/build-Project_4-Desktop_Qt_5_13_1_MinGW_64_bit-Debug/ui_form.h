/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(373, 279);
        widget = new QWidget(Form);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(60, 60, 253, 137));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);


        horizontalLayout->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout->addItem(verticalSpacer);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout->addItem(verticalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        verticalLayout_2->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        verticalLayout_2->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        verticalLayout_2->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(widget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        verticalLayout_2->addWidget(pushButton_8);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Form", "\351\242\234\350\211\262\345\257\271\350\257\235\346\241\206", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Form", "\345\255\227\344\275\223\345\257\271\350\257\235\346\241\206", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Form", "\346\266\210\346\201\257\345\257\271\350\257\235\346\241\206", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Form", "\351\224\231\350\257\257\346\266\210\346\201\257\345\257\271\350\257\235\346\241\206", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Form", "\346\226\207\344\273\266\345\257\271\350\257\235\346\241\206", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Form", "\350\276\223\345\205\245\345\257\271\350\257\235\346\241\206", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Form", "\350\277\233\345\272\246\345\257\271\350\257\235\346\241\206", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Form", "\345\220\221\345\257\274\345\257\271\350\257\235\346\241\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
