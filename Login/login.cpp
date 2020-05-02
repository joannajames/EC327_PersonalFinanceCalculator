#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"
#include "signupdialog.h"
#include "transactions.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
    setWindowTitle("Login");
}

Login::~Login()
{
    delete ui;
}

QString Login::username(){
    return ui->Username->text();
}
QString Login::password(){
    return ui->Password->text();
}
void Login::on_pushButton_clicked()
{
    int response;
    SignUpDialog signdialog(this);
    signdialog.setWindowTitle("Add Account");
    response = signdialog.exec();
    if (response == QDialog::Rejected){
        return;
    }

    QString username = signdialog.getuser();
    QString password =signdialog.getpass();

    //Create credentials
    QString UserCred = "UserCred.txt";
    QFile credfile(UserCred);
    if (credfile.open(QIODevice::ReadWrite)) {
        QTextStream stream(&credfile);
        stream << username << " " << password << endl;
    }
    credfile.close();

    double b = signdialog.getBalance();
    QString t_filename = "transaction.txt";
    QFile t_file(t_filename);
    if (t_file.open(QIODevice::ReadWrite)) {
        QTextStream stream(&t_file);
        stream<<"Deposit"<<"-"<<b<<"-"<<"Starting Balance"<<endl;
    }
    t_file.close();
}

void Login::on_pushButton_2_clicked()
{
    QString username = ui->Username->text();
    QString password = ui -> Password->text();
    QStringList credentials;

    //file io to compare

    QFile file("UserCred.txt");
    if(!file.open(QIODevice::ReadOnly)) {
        QMessageBox::information(0, "error", file.errorString());
    }

    QTextStream in(&file);

    while(!in.atEnd()) {
        QString line = in.readLine();
        credentials = line.split(" ");
    }


    if (username == credentials.at(0) && password == credentials.at(1)){
        hide();
        mainwindow = new MainWindow(this);
        mainwindow->show();


    }else{
        QMessageBox::warning(this,"Login", "Username and password is not correct");
    }
}


