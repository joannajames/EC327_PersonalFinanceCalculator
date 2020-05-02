#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include "transactions.h"

class transactions;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void Transaction_table();
    void updateBalance(transactions t);
    double collect_saved_balance();
    void addTransaction(transactions t);
    QVector <transactions> trans_vec;
    double balance;

private slots:


    void on_actionSave_triggered();

    void on_actionDelete_triggered();

    void on_pushButton_addTransaction_clicked();

    void on_pushButton_NewAccount_clicked();

private:
    Ui::MainWindow *ui;
    enum Columns{
        TYPE, AMOUNT, NOTE
    };

};
#endif // MAINWINDOW_H
