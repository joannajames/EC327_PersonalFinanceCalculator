#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

QString Dialog::type(){
    QString t;
    t=ui->type->currentText();
    return t;
}
double Dialog::amount (){
    double a =ui->amount->value();
    return a;
}

QString Dialog::note(){
    QString n;
    n=ui->notes->toPlainText();
    return n;
}

void Dialog::on_buttonBox_accepted()
{
    accept();
}

void Dialog::on_buttonBox_rejected()
{
    reject();
}
