/********************************************************************************
** Form generated from reading UI file 'accountdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTDIALOG_H
#define UI_ACCOUNTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AccountDialog
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AccountDialog)
    {
        if (AccountDialog->objectName().isEmpty())
            AccountDialog->setObjectName(QString::fromUtf8("AccountDialog"));
        AccountDialog->resize(400, 91);
        layoutWidget = new QWidget(AccountDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 0, 351, 81));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Bahnschrift SemiLight"));
        font.setPointSize(12);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        doubleSpinBox = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        QFont font1;
        font1.setPointSize(12);
        doubleSpinBox->setFont(font1);
        doubleSpinBox->setMaximum(1000000000.000000000000000);

        horizontalLayout->addWidget(doubleSpinBox);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(layoutWidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(AccountDialog);

        QMetaObject::connectSlotsByName(AccountDialog);
    } // setupUi

    void retranslateUi(QDialog *AccountDialog)
    {
        AccountDialog->setWindowTitle(QCoreApplication::translate("AccountDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AccountDialog", "Starting Balance:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AccountDialog: public Ui_AccountDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTDIALOG_H
