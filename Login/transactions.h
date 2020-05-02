#ifndef TRANSACTIONS_H
#define TRANSACTIONS_H


#include <QVector>
#include <QDataStream>


class transactions
{

public:
    transactions();
    transactions(QString n,double val,QString notes);
    QString note;
    QString type;
    double amount;
};

#endif // TRANSACTIONS_H
