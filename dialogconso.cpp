//-------------------------
//
// file created by phycelot
// 20/03/2018
// dialogconso.cpp
//
//-------------------------

#include "dialogconso.h"
#include "ui_dialogconso.h"
#include "display_bdd_management.h"
#include "usefull.h"
#include <QDebug>


DialogConso::DialogConso(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogConso)
{
    ui->setupUi(this);
    qInstallMessageHandler(usefull::myMessageOutput); // Install the handler
    this->setWindowTitle("Conso");
    qInfo() << "run DialogConso";
}

DialogConso::~DialogConso()
{
    qInfo() << "end DialogConso";
    delete ui;
}
