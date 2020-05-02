/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QComboBox *type;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *amount;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QPlainTextEdit *notes;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(329, 305);
        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(90, 270, 156, 23));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 300, 256));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Bahnschrift SemiLight"));
        font.setPointSize(10);
        label->setFont(font);

        horizontalLayout_3->addWidget(label);

        type = new QComboBox(layoutWidget);
        type->addItem(QString());
        type->addItem(QString());
        type->setObjectName(QString::fromUtf8("type"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Bahnschrift"));
        font1.setPointSize(10);
        type->setFont(font1);

        horizontalLayout_3->addWidget(type);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        amount = new QDoubleSpinBox(layoutWidget);
        amount->setObjectName(QString::fromUtf8("amount"));
        QFont font2;
        font2.setPointSize(10);
        amount->setFont(font2);
        amount->setMaximum(1000000000.000000000000000);

        horizontalLayout_2->addWidget(amount);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout->addWidget(label_3, 0, Qt::AlignHCenter);

        notes = new QPlainTextEdit(layoutWidget);
        notes->setObjectName(QString::fromUtf8("notes"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Bahnschrift SemiLight"));
        font3.setPointSize(14);
        notes->setFont(font3);

        horizontalLayout->addWidget(notes);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Type", nullptr));
        type->setItemText(0, QCoreApplication::translate("Dialog", "Expense", nullptr));
        type->setItemText(1, QCoreApplication::translate("Dialog", "Deposit", nullptr));

        label_2->setText(QCoreApplication::translate("Dialog", "Amount", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "Notes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
