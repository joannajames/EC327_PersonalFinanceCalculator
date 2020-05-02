/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSave;
    QAction *actionDelete;
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QTableWidget *tableWidget;
    QPushButton *pushButton_addTransaction;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLCDNumber *lcdNumber_2;
    QPushButton *pushButton_NewAccount;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(929, 469);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 381, 411));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        tableWidget = new QTableWidget(layoutWidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout_2->addWidget(tableWidget, 0, 0, 1, 1);

        pushButton_addTransaction = new QPushButton(layoutWidget);
        pushButton_addTransaction->setObjectName(QString::fromUtf8("pushButton_addTransaction"));

        gridLayout_2->addWidget(pushButton_addTransaction, 1, 0, 1, 1);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(400, 10, 511, 411));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("Bahnschrift SemiLight"));
        font.setPointSize(48);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        lcdNumber_2 = new QLCDNumber(widget);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Bahnschrift SemiLight"));
        font1.setPointSize(36);
        lcdNumber_2->setFont(font1);

        gridLayout->addWidget(lcdNumber_2, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        pushButton_NewAccount = new QPushButton(widget);
        pushButton_NewAccount->setObjectName(QString::fromUtf8("pushButton_NewAccount"));

        gridLayout_3->addWidget(pushButton_NewAccount, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 929, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionSave);
        menuFile->addAction(actionDelete);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionDelete->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        pushButton_addTransaction->setText(QCoreApplication::translate("MainWindow", "Add Transaction", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Account Balance", nullptr));
        pushButton_NewAccount->setText(QCoreApplication::translate("MainWindow", "New Account", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
