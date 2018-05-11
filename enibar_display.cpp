//-------------------------
//
// file created by phycelot
// 20/03/2018
// enibar_display.cpp
//
//-------------------------

#include "enibar_display.h"
#include "ui_enibar_display.h"
#include "dialogevent.h"
#include "dialogconso.h"
#include "dialogmessage.h"
#include "startup_config.h"
#include <QMessageBox>
#include <QDebug>
#include <QObject>
#include <QGroupBox>
#include <QJsonArray>
#include <QStandardItem>
#include <QJsonDocument>
#include <QJsonObject>
#include "display_bdd_management.h"
#include "enibar_bdd_management.h"
#include "event_bdd_management.h"
#include "usefull.h"


enibar_display::enibar_display(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::enibar_display)
{
    ui->setupUi(this);
    qInstallMessageHandler(usefull::myMessageOutput); // Install the handler
    this->setWindowTitle("Enibar display config");
    init();
    refresh();
    QObject::connect(ui->actionRefresh,SIGNAL(triggered()),this,SLOT(refresh()));

}

enibar_display::~enibar_display()
{
    delete ui;
    display_bdd_management();
}

bool enibar_display::connect(){
    return true;
}
void enibar_display::init(){
    qInfo() << __func__ << "()";
    ui->bar_name_show->setText(startupConfig::getBarName());
    ui->scrolling_message_show->setText(startupConfig::getScrollingMessage());
    ui->conso_group->setChecked(startupConfig::isGroupBoxChecked("conso"));
    ui->event_group->setChecked(startupConfig::isGroupBoxChecked("event"));
    ui->message_group->setChecked(startupConfig::isGroupBoxChecked("message"));
    ui->event_list->verticalHeader()->setVisible(false);
    ui->event_list->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->event_list->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->event_list->horizontalHeader()->setStretchLastSection(true);
}
void enibar_display::refresh(){
    //refresh from startupconfig
    qInfo() << __func__ << "()";
    ui->bar_name_show->setText(startupConfig::getBarName());
    ui->scrolling_message_show->setText(startupConfig::getScrollingMessage());
    startupConfig::setGroupBoxChecked("conso",ui->conso_group->isChecked());
    startupConfig::setGroupBoxChecked("event",ui->event_group->isChecked());
    startupConfig::setGroupBoxChecked("message",ui->message_group->isChecked());

    //refresh bdd
//    display_bdd.update();
//    enibar_bdd.update();

    //refresh conso & event
    QJsonArray eventList = event_bdd_management::getListEvent("",1,0);
    int modelNbrofRow=eventList.size();
    int modelNbrofColumn=2;
    auto *model = new QStandardItemModel(modelNbrofRow,modelNbrofColumn,this);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("name"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("startDateTime"));
    ui->event_list->setModel(model);
    for(int i=0;i<modelNbrofRow; i++)
    {
        QStandardItem *item=new QStandardItem;
        item->setText(eventList[i].toObject().value("name").toString());
        model->setItem(i,0,item);
        QStandardItem *item1=new QStandardItem;
        item1->setText(eventList[i].toObject().value("startDateTime").toString());
        model->setItem(i,1,item1);
    }
}

void enibar_display::on_conso_button_clicked()
{
    if(enibar_display::connect()){
        qInfo() << "open dialogConso";
        DialogConso dialogConso;
        dialogConso.setModal(true);
        if (dialogConso.exec()){qCritical() << "can't run dialogConso";} else {qInfo() << "can run dialogConso";}
    }
}

void enibar_display::on_event_button_clicked()
{
    if(enibar_display::connect()){
        qInfo() << "open dialogEvent";
        DialogEvent dialogEvent;
        dialogEvent.setModal(true);
        if (dialogEvent.exec()){qCritical() << "can't run dialogEvent";} else {qInfo() << "can run dialogEvent";}
    }
}

void enibar_display::on_message_button_clicked()
{
    if(enibar_display::connect()){
        qInfo() << "open dialogMessage";
        DialogMessage dialogMessage;
        dialogMessage.setModal(true);
        if (dialogMessage.exec()){qCritical() << "can't run dialogMessage";} else {qInfo() << "can run dialogMessage";}
    }
}

void enibar_display::changeEvent(QEvent * e) {
    if(e->type() == QEvent::ActivationChange && this->isActiveWindow()) {
       qDebug() << "change event";
       refresh();
    }
}
