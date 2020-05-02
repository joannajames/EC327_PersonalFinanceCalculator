#include "accountdialog.h"
#include "ui_accountdialog.h"
#include <QFile>
#include <QMessageBox>
#include <QDataStream>

AccountDialog::AccountDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AccountDialog)
{
    ui->setupUi(this);
    setWindowTitle("Add Account");
}

AccountDialog::~AccountDialog()
{
    delete ui;
}

void AccountDialog::on_buttonBox_accepted()
{
    accept();
}

void AccountDialog::on_buttonBox_rejected()
{
    reject();
}

double AccountDialog::setBalance(){
    return ui->doubleSpinBox->value();
}


