#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include "login.h"
#include "accountdialog.h"
#include "transactions.h"


#include <QFile>
#include <QDataStream>
#include <QObject>
#include <QMessageBox>
#include <QVector>
#include <QString>
#include <QTextStream>
#include <QStringList>




MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QStringList titles;
    setWindowTitle("Simple Finances");
    ui->tableWidget->setColumnCount(3);
    titles << "Type"<<"Amount"<<"Notes";
    ui->tableWidget->setHorizontalHeaderLabels(titles);
    Transaction_table();
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::Transaction_table(){
    QString type;
    QString note;
    double amt=0.0;

    int number_transactions=0;
    double starter_balance=0.0;


    //Reading transactions to data stream output to ui
    QFile t_file("Transaction.txt");
    if(t_file.open(QIODevice::ReadWrite)){
        QTextStream in(&t_file);
        while(!in.atEnd()){
            number_transactions++;
            QString line = in.readLine();
            QStringList l = line.split('-');
            if (l.size()>=2){
                type = l.at(0);
                amt = l.at(1).toDouble();
                if (number_transactions==1){
                    starter_balance =amt;
                }
            }
            if (l.size()==3){
                note = l.at(2);
            }
            transactions t= transactions(type,amt,note);
            addTransaction(t);
        }
    }
    t_file.close();
    if (number_transactions==1){
        balance = starter_balance;
        ui->lcdNumber_2->display(balance);
        trans_vec.clear();
    }else{
        balance = collect_saved_balance();
        ui->lcdNumber_2->display(balance);
        trans_vec.clear();
    }
}


void MainWindow::addTransaction(transactions t){
    trans_vec.append(t);

    ui->tableWidget->insertRow(ui->tableWidget->rowCount());
    ui->tableWidget->setItem(ui->tableWidget->rowCount() -1, TYPE, new QTableWidgetItem(t.type));
    ui->tableWidget->setItem(ui->tableWidget->rowCount() -1, AMOUNT, new QTableWidgetItem(QString::number(t.amount)));
    ui->tableWidget->setItem(ui->tableWidget->rowCount() -1, NOTE, new QTableWidgetItem(QString(t.note)));

}




void MainWindow::updateBalance(transactions t){
    QString exp = "Expense";
    QString dep = "Deposit";


    if (t.type==exp){
        balance = balance - t.amount;
    }else if(t.type==dep){
        balance = balance+t.amount;
    }

    ui->lcdNumber_2->display(balance);
}
double MainWindow::collect_saved_balance(){
    balance = trans_vec.at(0).amount;
    QString exp = "Expense";
    QString dep = "Deposit";


    for (int i=1; i<trans_vec.size(); ++i){
        transactions t =trans_vec.at(i);
        if (t.type==exp){
            balance = balance - t.amount;
        }else if(t.type==dep){
            balance = balance+t.amount;
        }
     }
    return balance;
}


void MainWindow::on_actionSave_triggered()
{
        //Save transactions from vector
        QFile t_file("Transaction.txt");
        if(t_file.open(QIODevice::Append)){
            QTextStream out(&t_file);
            for (int i=0; i<trans_vec.size(); ++i){
              out<<trans_vec.at(i).type<<"-"<<trans_vec.at(i).amount<<"-"<<trans_vec.at(i).note<<endl;
             }
         }
        t_file.close();

}


void MainWindow::on_actionDelete_triggered()
{

    QFile u_file("UserCred.txt");
    u_file.remove();

    QFile t_file("Transaction.txt");
    t_file.remove();

    qApp->exit();

}

void MainWindow::on_pushButton_addTransaction_clicked()
{
    //add transaction

    int response;
    Dialog dialog(this);
    dialog.setWindowTitle("Add Transaction");
    response = dialog.exec();
    if (response == QDialog::Rejected){
        return;
    }
    const QString type = dialog.type();
    const double amount = dialog.amount();
    const QString note = dialog.note();

    transactions t(type,amount,note);
    addTransaction(t);
    updateBalance(t);
}

void MainWindow::on_pushButton_NewAccount_clicked()
{
    int response;

    AccountDialog Accountdialog(this);
    response = Accountdialog.exec();
    if (response == QDialog::Rejected){
        return;
    }

    balance = Accountdialog.setBalance();

    QFile t_file("Transaction.txt");
    t_file.remove();
    trans_vec.clear();

    transactions first_t("Deposit",balance,"Starting Balance");
    ui->tableWidget->setRowCount(0);
    addTransaction(first_t);

    ui->lcdNumber_2->display(balance);
}
