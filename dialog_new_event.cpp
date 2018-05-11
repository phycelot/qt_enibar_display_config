//-------------------------
//
// file created by phycelot
// 16/04/2018
// dialog_new_event.cpp
//
//-------------------------

#include "dialog_new_event.h"
#include "ui_dialog_new_event.h"
#include "event_bdd_management.h"
#include "usefull.h"
#include <QDebug>
#include <QMessageBox>
#include <QTextEdit>
#include <QLineEdit>

Dialog_new_event::Dialog_new_event(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_new_event)
{
    ui->setupUi(this);
    qInstallMessageHandler(usefull::myMessageOutput); // Install the handler
    this->setWindowTitle("New Event");
    qInfo() << "run Dialog_new_event";
    ui->startDateTimeEdit->setDateTime(QDateTime::currentDateTime());
    ui->endDateTimeEdit->setDateTime(QDateTime::currentDateTime());

    QObject::connect(ui->startDateTimeEdit,SIGNAL(editingFinished()),this,SLOT(startDateTimeEditEditingFinished()));
    QObject::connect(ui->endDateTimeEdit,SIGNAL(editingFinished()),this,SLOT(endDateTimeEditEditingFinished()));
    QObject::connect(ui->okPushButton,SIGNAL(clicked(bool)),this,SLOT(newEventAdd()));
}

void Dialog_new_event::startDateTimeEditEditingFinished()
{
    qInfo() << __func__;

    if ((ui->startDateTimeEdit->dateTime()<QDateTime::currentDateTime()))
    {
        qInfo() << "in the past";
        ui->startDateTimeEdit->setStyleSheet("border: 1px solid red");
        QMessageBox msgBox;
        msgBox.setWindowTitle("OUPS");
        msgBox.setText("This event is in the past,\nwe can't for the moment sorry");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.exec();
    }
    else
    {
       ui->endDateTimeEdit->setStyleSheet("border: 1px solid green");
    }
}

void Dialog_new_event::endDateTimeEditEditingFinished()
{
    qInfo() << __func__;

    if ((ui->endDateTimeEdit->dateTime()<ui->startDateTimeEdit->dateTime()))
    {
        qInfo() << "event negative duration time";
        ui->endDateTimeEdit->setStyleSheet("border: 1px solid red");
        QMessageBox msgBox;
        msgBox.setWindowTitle("OUPS");
        msgBox.setText("This has a neagtive duration,\nplease stop looking forward");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.exec();
    }
    else
    {
       ui->endDateTimeEdit->setStyleSheet("border: 1px solid green");
    }
}

void Dialog_new_event::newEventAdd(){
    qInfo() << __func__;
    if (ui->nameLineEdit->text().length()==0)
    {
        qInfo() << "no name";
        QMessageBox msgBox;
        msgBox.setWindowTitle("OUPS");
        msgBox.setText("This event as no name");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.exec();
    }
     else if ((ui->startDateTimeEdit->dateTime()<QDateTime::currentDateTime()))
    {
        qInfo() << "in the past";
        ui->startDateTimeEdit->setStyleSheet("border: 1px solid red");
        QMessageBox msgBox;
        msgBox.setWindowTitle("OUPS");
        msgBox.setText("This event is in the past,\nwe can't for the moment sorry");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.exec();
    }
    else if ((ui->endDateTimeEdit->dateTime()<ui->startDateTimeEdit->dateTime()))
    {
        qInfo() << "event negative duration time";
        ui->endDateTimeEdit->setStyleSheet("border: 1px solid red");
        QMessageBox msgBox;
        msgBox.setWindowTitle("OUPS");
        msgBox.setText("This has a neagtive duration,\nplease stop looking forward");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.exec();
    }
    else
    {
        if (event_bdd_management::addEvent(ui->nameLineEdit->text(),ui->startDateTimeEdit->dateTime(),ui->endDateTimeEdit->dateTime(),ui->visibleCheckBox->isChecked(),ui->detailTextEdit->toPlainText()))
        {
            qInfo() << "succeed to add an event";
            close();
        }
        else
        {
            qWarning() << "fail to add an event";
            QMessageBox msgBox;
            msgBox.setWindowTitle("OUPS");
            msgBox.setText("fail to add this event");
            msgBox.setStandardButtons(QMessageBox::Ok);
            msgBox.exec();
        }

    }
}

Dialog_new_event::~Dialog_new_event()
{
    qInfo() << "end Dialog_new_event";
    delete ui;
}
