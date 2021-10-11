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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *Catch_Info;
    QAction *Show_Info;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menus;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        Catch_Info = new QAction(MainWindow);
        Catch_Info->setObjectName(QString::fromUtf8("Catch_Info"));
        Show_Info = new QAction(MainWindow);
        Show_Info->setObjectName(QString::fromUtf8("Show_Info"));
        Show_Info->setEnabled(false);
        Show_Info->setVisible(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        menus = new QMenu(menubar);
        menus->setObjectName(QString::fromUtf8("menus"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menus->menuAction());
        menus->addAction(Catch_Info);
        menus->addAction(Show_Info);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Catch_Info->setText(QCoreApplication::translate("MainWindow", "\345\275\225\345\205\245", nullptr));
        Show_Info->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272", nullptr));
        menus->setTitle(QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
