#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include "mainwindow.h"


QT_BEGIN_NAMESPACE
namespace Ui { class Login; }
QT_END_NAMESPACE

class Login : public QMainWindow
{
    Q_OBJECT

public:
    Login(QWidget *parent = nullptr);
    ~Login();
    QString username();
    QString password();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Login *ui;
    MainWindow *mainwindow;
};

#endif // LOGIN_H
