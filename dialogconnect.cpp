#include "dialogconnect.h"
#include "ui_dialogconnect.h"
#include "enibar_display.h"
#include <QDebug>
#include <QCloseEvent>
#include <QMessageBox>
#include <QObject>


DialogConnect::DialogConnect(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogConnect)
{
    ui->setupUi(this);
    this->setWindowTitle("Connect");
}

DialogConnect::~DialogConnect()
{
    delete ui;
}

void DialogConnect::on_buttonBox_accepted()
{
    qDebug() << "try to connect";
    QString pseudo = ui->lineEdit_pseudo->text();
    QString password = ui->lineEdit_password->text();
    if(pseudo == "slt" && password== "slt") {
        qDebug() << "good";
        DialogConnect::close();
    }
}

void DialogConnect::on_buttonBox_rejected()
{
    DialogConnect::close();
}
