#include "transactions.h"
#include "mainwindow.h"

transactions::transactions(){

}

transactions::transactions(QString n, double val, QString notes){
    type = n;
    amount = val;
    note = notes;

}
