#include "signupdialog.h"
#include "ui_signupdialog.h"

#include <QTextStream>
#include <QFile>


SignUpDialog::SignUpDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignUpDialog)
{
    ui->setupUi(this);
    setWindowTitle("Sign Up");
}

SignUpDialog::~SignUpDialog()
{
    delete ui;
}

QString SignUpDialog::getuser(){
    QString username = ui->sign_username->text();
    return username;

}
double SignUpDialog::getBalance(){
    double balance = ui->start_balance->value();
    return balance;
}

QString SignUpDialog::getpass(){
    QString password = ui ->sign_password->text();
    return password;
}
void SignUpDialog::on_buttonBox_accepted()
{

    accept();

}

void SignUpDialog::on_buttonBox_rejected()
{
    reject();
}
