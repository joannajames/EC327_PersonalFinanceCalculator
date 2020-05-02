/********************************************************************************
** Form generated from reading UI file 'signupdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPDIALOG_H
#define UI_SIGNUPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignUpDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *sign_username;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *sign_password;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QDoubleSpinBox *start_balance;

    void setupUi(QDialog *SignUpDialog)
    {
        if (SignUpDialog->objectName().isEmpty())
            SignUpDialog->setObjectName(QString::fromUtf8("SignUpDialog"));
        SignUpDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(SignUpDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(100, 200, 156, 23));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        layoutWidget = new QWidget(SignUpDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 60, 261, 131));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        sign_username = new QLineEdit(layoutWidget);
        sign_username->setObjectName(QString::fromUtf8("sign_username"));

        horizontalLayout->addWidget(sign_username);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        sign_password = new QLineEdit(layoutWidget);
        sign_password->setObjectName(QString::fromUtf8("sign_password"));

        horizontalLayout_2->addWidget(sign_password);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        start_balance = new QDoubleSpinBox(layoutWidget);
        start_balance->setObjectName(QString::fromUtf8("start_balance"));
        start_balance->setMaximum(1000000000.000000000000000);

        horizontalLayout_3->addWidget(start_balance);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(SignUpDialog);

        QMetaObject::connectSlotsByName(SignUpDialog);
    } // setupUi

    void retranslateUi(QDialog *SignUpDialog)
    {
        SignUpDialog->setWindowTitle(QCoreApplication::translate("SignUpDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SignUpDialog", "Username", nullptr));
        label_2->setText(QCoreApplication::translate("SignUpDialog", "Password", nullptr));
        label_3->setText(QCoreApplication::translate("SignUpDialog", "Account Balance", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUpDialog: public Ui_SignUpDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPDIALOG_H
