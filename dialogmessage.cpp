//-------------------------
//
// file created by phycelot
// 20/03/2018
// dialogmessage.cpp
//
//-------------------------

#include "dialogmessage.h"
#include "ui_dialogmessage.h"
#include "startup_config.h"
#include "enibar_display.h"
#include <QDebug>
#include <QDir>
#include <QInputDialog>
#include "display_bdd_management.h"
#include "usefull.h"

DialogMessage::DialogMessage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogMessage)
{
    ui->setupUi(this);
    qInstallMessageHandler(usefull::myMessageOutput); // Install the handler
    this->setWindowTitle("Message");
    qInfo() << "run DialogMessage";
    ui->bar_name->setText(startupConfig::getBarName());
    ui->scrolling_message->setText(startupConfig::getScrollingMessage());

}

DialogMessage::~DialogMessage()
{
    qInfo() << "end DialogMessage";
    delete ui;
}


void DialogMessage::on_save_button_clicked(){
    qInfo() << "save bar_name as "+ui->bar_name->text()+" and scrolling_message as "+ui->scrolling_message->text();
    startupConfig::setBarName(ui->bar_name->text());
    startupConfig::setScrollingMessage(ui->scrolling_message->text());
    end();
}

void DialogMessage::on_cancel_button_clicked(){
    end();
}

void DialogMessage::on_alert_creater_button_clicked(){
    qInfo() << __func__ << "()";
    // make the dialog here
    qInfo() << QInputDialog::getText(this, tr("alert_creater"),tr("Alert Message:"), QLineEdit::Normal);
    // end of alert creator script
    end();
}

void DialogMessage::end(){
    close();
}
