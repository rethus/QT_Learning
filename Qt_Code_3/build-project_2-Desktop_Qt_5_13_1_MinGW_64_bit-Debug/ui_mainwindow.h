/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *bigger_actions;
    QAction *smaller_actions;
    QAction *normal_actions;
    QWidget *centralWidget;
    QFormLayout *formLayout;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QMenu *menus;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(440, 346);
        bigger_actions = new QAction(MainWindow);
        bigger_actions->setObjectName(QString::fromUtf8("bigger_actions"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/bigger-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        bigger_actions->setIcon(icon);
        smaller_actions = new QAction(MainWindow);
        smaller_actions->setObjectName(QString::fromUtf8("smaller_actions"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/smaller-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        smaller_actions->setIcon(icon1);
        normal_actions = new QAction(MainWindow);
        normal_actions->setObjectName(QString::fromUtf8("normal_actions"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/normal-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        normal_actions->setIcon(icon2);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        formLayout = new QFormLayout(centralWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        formLayout->setWidget(0, QFormLayout::LabelRole, pushButton);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 440, 23));
        menus = new QMenu(menuBar);
        menus->setObjectName(QString::fromUtf8("menus"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menus->menuAction());
        menus->addAction(bigger_actions);
        menus->addAction(smaller_actions);
        menus->addAction(normal_actions);
        mainToolBar->addAction(bigger_actions);
        mainToolBar->addAction(smaller_actions);
        mainToolBar->addAction(normal_actions);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        bigger_actions->setText(QCoreApplication::translate("MainWindow", "\346\234\200\345\244\247(&M)", nullptr));
#if QT_CONFIG(shortcut)
        bigger_actions->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+M", nullptr));
#endif // QT_CONFIG(shortcut)
        smaller_actions->setText(QCoreApplication::translate("MainWindow", "\346\234\200\345\260\217", nullptr));
        normal_actions->setText(QCoreApplication::translate("MainWindow", "\346\231\256\351\200\232", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "button", nullptr));
        menus->setTitle(QCoreApplication::translate("MainWindow", "\347\252\227\345\217\243", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
