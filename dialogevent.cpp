//-------------------------
//
// file created by phycelot
// 20/03/2018
// dialogevent.cpp
//
//-------------------------

#include "dialogevent.h"
#include "ui_dialogevent.h"
#include <QDebug>
#include "display_bdd_management.h"
#include "event_bdd_management.h"
#include "usefull.h"
#include <QAbstractItemModel>
#include <QStandardItemModel>
#include <QList>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include "dialog_new_event.h"
#include <QMessageBox>
#include <QStandardItem>

DialogEvent::DialogEvent(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogEvent)
{
    ui->setupUi(this);
    ui->searchEventLineEdit->setFocus();
    qInstallMessageHandler(usefull::myMessageOutput); // Install the handler
    this->setWindowTitle("Event");
    qInfo() << "run DialogEvent";
    ui->progressBar->setValue(100);

    //set properties
    ui->listEvent->verticalHeader()->setVisible(false);
    ui->listEvent->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->listEvent->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->listEvent->horizontalHeader()->setStretchLastSection(true);
    QObject::connect(ui->listEvent,SIGNAL(clicked(QModelIndex)),this,SLOT(listEventClicked()));
    QObject::connect(ui->cancelPushButton,SIGNAL(clicked()),this,SLOT(loadInfoForModification()));

    //detect click event
    installEventFilter(this);
    //refresh show
    refresh();

}

void DialogEvent::init(){

}

void DialogEvent::refresh(){
    qInfo() << __func__;
    //get list of event
    //for the moment it's a json to emulate
    QJsonArray eventList = event_bdd_management::getListEvent(ui->searchEventLineEdit->text(),ui->allowInvisibleSearchCheckBox->isChecked(),ui->allowPastSearchCheckBox->isChecked());
    //init list model
    int modelNbrofRow=eventList.size();
    int modelNbrofColumn=5;
    auto *model = new QStandardItemModel(modelNbrofRow,modelNbrofColumn,this);
    //set header
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Name"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("StartDateTime"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("EndDateTime"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Visible ?"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Detail"));
    //set
    ui->listEvent->setModel(model);
    //fill
    for(int i=0;i<modelNbrofRow; i++)
    {
        QStandardItem *item=new QStandardItem;
        item->setText(eventList[i].toObject().value("name").toString());
        model->setItem(i,0,item);
        QStandardItem *item1=new QStandardItem;
        item1->setText(eventList[i].toObject().value("startDateTime").toString());
        model->setItem(i,1,item1);
        QStandardItem *item2=new QStandardItem;
        item2->setText(eventList[i].toObject().value("endDateTime").toString());
        model->setItem(i,2,item2);
        QStandardItem *item3=new QStandardItem;
        item3->setText(eventList[i].toObject().value("visible").toString());
        model->setItem(i,3,item3);
        QStandardItem *item4=new QStandardItem;
        item4->setText(eventList[i].toObject().value("details").toString());
        model->setItem(i,4,item4);
    }
}

void DialogEvent::keyPressEvent(QKeyEvent *event) //check when a key is pressed
{
    switch (event->key())
    {
    case Qt::Key_Return:
    case Qt::Key_Enter:
        qDebug() << "Enter";
        break;
    case Qt::Key_Escape:
        qDebug() << "Escape";
        close();
        break;
    case Qt::Key_Insert:
        qDebug() << "Insert";
        break;
    case Qt::Key_Delete:
        qDebug() << "Delete";
        break;
    default:
        qDebug() << "other" << event->key();
        break;
    }
}

bool DialogEvent::eventFilter(QObject* object, QEvent* event) //used to delete selected row when delete key is pressed
{
    if (event->type()==QEvent::KeyPress)
    {
        QKeyEvent* pKeyEvent=static_cast<QKeyEvent*>(event);
        if (pKeyEvent->key() == Qt::Key_Delete)
        {
            if (ui->listEvent->hasFocus())
            {
                int selectedRow = ui->listEvent->selectionModel()->selectedRows()[0].row();
                qInfo() <<selectedRow;
                qDebug() << "Event filter: Focus yes, Delete key pressed";
                qInfo() << "user wants to delete element " << selectedRow;
                bool success;
                QString val;
                QFile file;
                file.setFileName("./config_file/testListEvent.json");
                success=file.open(QIODevice::Text | QIODevice::ReadOnly);
                val = file.readAll();
                file.close();
                if (!success){
                    qWarning() << "can't access to file";
                }
                QJsonDocument d = QJsonDocument::fromJson(val.toUtf8());
                QJsonArray sett2 = d.object()["eventList"].toArray();
                QJsonObject selectedRowObject=sett2[selectedRow].toObject();
                qDebug() << selectedRowObject;
                QMessageBox msgBox;
                msgBox.setWindowTitle("Delete");
                QString message = "Delete "+selectedRowObject.value("name").toString()+" ?\n";  //wip add nameOfEvent
                msgBox.setText(message);
                msgBox.setStandardButtons(QMessageBox::Yes);
                msgBox.addButton(QMessageBox::No);
                msgBox.setDefaultButton(QMessageBox::No);
                if (!(msgBox.exec() == QMessageBox::Yes))
                {
                    qInfo() << "try to delete element " << selectedRow;
                }
            }
            else
            {
                qDebug() << "Event filter: Focus NO, Delete key pressed";
            }
            return true;
        }
        qDebug() << "Event filter: other key pressed";
    }
    return QWidget::eventFilter(object, event);
}

void DialogEvent::on_new_event_clicked()
{
    qInfo() << "open dialog_new_event";
    Dialog_new_event dialog_new_event;
    dialog_new_event.setModal(true);
    if (dialog_new_event.exec()){
        qCritical() << "can't run dialog_new_event";
    }
    else
    {
        qInfo() << "can run dialog_new_event";
    }
}

void DialogEvent::listEventClicked()
{
    ui->eventEditorGroupBox->setEnabled(true);
//    QItemSelectionModel *select = ui->listEvent->selectionModel();
    if(ui->listEvent->hasFocus()) {
        loadInfoForModification();
    } else {
        ui->eventEditorGroupBox->setEnabled(false);
    }

}

void DialogEvent::loadInfoForModification()
{
    QItemSelectionModel *select = ui->listEvent->selectionModel();
    int selectedRow = select->selectedRows()[0].row();
    qInfo() <<selectedRow;
    bool success;
    QString val;
    QFile file;
    file.setFileName("./config_file/testListEvent.json");
    success=file.open(QIODevice::Text | QIODevice::ReadOnly);
    val = file.readAll();
    file.close();
    if (!success){
        qWarning() << "can't access to file";
    }
    QJsonDocument d = QJsonDocument::fromJson(val.toUtf8());
    QJsonArray sett2 = d.object()["eventList"].toArray();
    QJsonObject selectedRowObject=sett2[selectedRow].toObject();
    qDebug() << selectedRowObject;
    ui->eventNameLineEdit->setText(selectedRowObject.value("name").toString());
    ui->detailsTextEdit->setText(selectedRowObject.value("details").toString());
    if(selectedRowObject.value("visible").toString()=="1")
    {
        ui->visibleCheckBox->setChecked(true);
    }
    else
    {
        ui->visibleCheckBox->setChecked(false);
    }
    QDateTime startDateTime;
    QString strStartDateTime =selectedRowObject.value("startDateTime").toString();
    startDateTime =startDateTime.fromString(strStartDateTime,"yyyy-MM-ddThh:mm");
    if(startDateTime.isValid())
    {
        ui->startDateTimeEdit->setDateTime(startDateTime);
    }
    else
    {
        qWarning() << "startDateTime is not a datetime";
    }
    QDateTime endDateTime;
    QString strEndDateTime =selectedRowObject.value("endDateTime").toString();
    endDateTime = endDateTime.fromString(strEndDateTime,"yyyy-MM-ddThh:mm");
    if(endDateTime.isValid())
    {
        ui->endDateTimeEdit->setDateTime(endDateTime);
    }
    else
    {
        qWarning() << "endDateTime is not a datetime";
    }
}
void DialogEvent::changeEvent(QEvent * e) {
    if(e->type() == QEvent::ActivationChange && this->isActiveWindow()) {
        qInfo() << "change event";
        refresh();
    }
}

DialogEvent::~DialogEvent()
{
    qInfo() << "end DialogEvent";
    delete ui;
}
