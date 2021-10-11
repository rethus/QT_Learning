/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *name_label;
    QLabel *sex_label;
    QLabel *age_label;
    QLabel *mail_label;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *name_lineedit;
    QComboBox *sex_comboBox;
    QSpinBox *age_spinBox;
    QLineEdit *mail_lineedit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QFontComboBox *fontComboBox;
    QPushButton *save_button;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *show_lineedit;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pre_button;
    QPushButton *next_button;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(464, 234);
        verticalLayout_3 = new QVBoxLayout(Widget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        name_label = new QLabel(Widget);
        name_label->setObjectName(QString::fromUtf8("name_label"));

        verticalLayout->addWidget(name_label);

        sex_label = new QLabel(Widget);
        sex_label->setObjectName(QString::fromUtf8("sex_label"));

        verticalLayout->addWidget(sex_label);

        age_label = new QLabel(Widget);
        age_label->setObjectName(QString::fromUtf8("age_label"));

        verticalLayout->addWidget(age_label);

        mail_label = new QLabel(Widget);
        mail_label->setObjectName(QString::fromUtf8("mail_label"));

        verticalLayout->addWidget(mail_label);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        name_lineedit = new QLineEdit(Widget);
        name_lineedit->setObjectName(QString::fromUtf8("name_lineedit"));

        verticalLayout_2->addWidget(name_lineedit);

        sex_comboBox = new QComboBox(Widget);
        sex_comboBox->addItem(QString());
        sex_comboBox->addItem(QString());
        sex_comboBox->setObjectName(QString::fromUtf8("sex_comboBox"));

        verticalLayout_2->addWidget(sex_comboBox);

        age_spinBox = new QSpinBox(Widget);
        age_spinBox->setObjectName(QString::fromUtf8("age_spinBox"));
        age_spinBox->setMinimum(10);
        age_spinBox->setMaximum(60);

        verticalLayout_2->addWidget(age_spinBox);

        mail_lineedit = new QLineEdit(Widget);
        mail_lineedit->setObjectName(QString::fromUtf8("mail_lineedit"));

        verticalLayout_2->addWidget(mail_lineedit);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 23, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        fontComboBox = new QFontComboBox(Widget);
        fontComboBox->setObjectName(QString::fromUtf8("fontComboBox"));

        horizontalLayout_2->addWidget(fontComboBox);

        save_button = new QPushButton(Widget);
        save_button->setObjectName(QString::fromUtf8("save_button"));

        horizontalLayout_2->addWidget(save_button);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        show_lineedit = new QLineEdit(Widget);
        show_lineedit->setObjectName(QString::fromUtf8("show_lineedit"));

        horizontalLayout_4->addWidget(show_lineedit);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pre_button = new QPushButton(Widget);
        pre_button->setObjectName(QString::fromUtf8("pre_button"));

        horizontalLayout_3->addWidget(pre_button);

        next_button = new QPushButton(Widget);
        next_button->setObjectName(QString::fromUtf8("next_button"));

        horizontalLayout_3->addWidget(next_button);


        verticalLayout_3->addLayout(horizontalLayout_3);

#if QT_CONFIG(shortcut)
        name_label->setBuddy(name_lineedit);
        sex_label->setBuddy(sex_comboBox);
        age_label->setBuddy(age_spinBox);
        mail_label->setBuddy(mail_lineedit);
#endif // QT_CONFIG(shortcut)

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        name_label->setText(QCoreApplication::translate("Widget", "\345\247\223\345\220\215(&N)", nullptr));
        sex_label->setText(QCoreApplication::translate("Widget", "\346\200\247\345\210\253(&S)", nullptr));
        age_label->setText(QCoreApplication::translate("Widget", "\345\271\264\351\276\204(&A)", nullptr));
        mail_label->setText(QCoreApplication::translate("Widget", "\351\202\256\347\256\261(&M)", nullptr));
        sex_comboBox->setItemText(0, QCoreApplication::translate("Widget", "\347\224\267", nullptr));
        sex_comboBox->setItemText(1, QCoreApplication::translate("Widget", "\345\245\263", nullptr));

        save_button->setText(QCoreApplication::translate("Widget", "\344\277\235\345\255\230", nullptr));
        label->setText(QCoreApplication::translate("Widget", "List:", nullptr));
        pre_button->setText(QCoreApplication::translate("Widget", "Pre", nullptr));
        next_button->setText(QCoreApplication::translate("Widget", "Next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
