//-------------------------
//
// file created by phycelot
// 23/04/2018
// event_bdd_management.cpp
//
//-------------------------
#include "event_bdd_management.h"
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QFile>
#include <QDebug>
#include <QDateTime>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlRecord>

namespace event_bdd_management {

bool try_connect() {
    qDebug() << "try to connect";
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE","eventDataBase");
    db.setHostName("192.168.1.15");
    db.setDatabaseName("enibar_display");
    db.setUserName("root");
    db.setPassword("sev");
    bool ok =db.open();
    QSqlQuery query = QSqlQuery (db);
    qInfo() << query.isValid();
    if (!query.exec("SHOW TABLES;"))
    {
        qWarning() << "fail query";
        qInfo() << query.lastError();
    }
    db.close();
    return ok;
}
QSqlDatabase connect() {
    qDebug() << "try to connect";
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE","eventDataBase");
    db.setHostName("192.168.1.15");
    db.setDatabaseName("enibar_display");
    db.setUserName("root");
    db.setPassword("sev");
    bool ok = db.open();

    //    if(ok)
    //    {
    //        qInfo() << "connected " << db.hostName();
    //        qInfo() << db.connectOptions();
    //        qInfo() << db.connectionNames();
    //        qInfo() << db.databaseName();
    //        qInfo() << db.drivers();
    //        qInfo() << db.tables();
    //    }else{
    //        qWarning() << "Connection FAILED.";
    //        qWarning() << "La connexion a échouée, désolé :(" << db.lastError().text();

    //    }
    //    QSqlQuery query;
    //    qInfo() << query.isValid();
    //    if (!query.exec("SHOW TABLES;"))
    //    {
    //        qWarning() << "fail query";
    //    }
    //    QSqlQuery quer("SELECT * FROM event",db);
    //    QSqlRecord record = quer.record();
    //    while (quer.next()) {
    //        qInfo() << record;
    //    }

    return db;
}


QJsonArray getListEvent(QString search="", bool visible=true, bool past=false){
    qInfo() << __func__;
    //    QSqlDatabase db = connect();
    //    QSqlQuery query(db);
    //    if (!query.exec("SELECT * FROM event;"))
    //    {
    //        qWarning() << "fail query";
    //    }
    //    if (query.next())
    //    {
    //        qInfo() << query.value(1);
    //    }
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
    return sett2;
}

bool addEvent(QString name, QDateTime startDateTime, QDateTime endDateTime,bool visible, QString details)
{
    qInfo() << __func__;
    int ivisible;
    qDebug() << visible;
    if(visible)
    {
        ivisible=1;
    }
    else
    {
        ivisible=0;
    };
    qDebug() << ivisible;
    QString j = "{\"name\":\""+name+"\",\"startDateTime\":\""+startDateTime.toString("yyyy-MM-ddThh:mm:ss")+"\",\"endDateTime\":\""+endDateTime.toString("yyyy-MM-ddThh:mm:ss")+"\",\"visible\":\""+QString::number(ivisible)+"\",\"details\":\""+details+"\"}";
    QJsonDocument f =  QJsonDocument::fromJson(j.toUtf8());
    QJsonValue r= f.object();
    qDebug() << r;
    QString val;
    QFile file;
    file.setFileName("./config_file/testListEvent.json");
    if (!file.open(QIODevice::Text | QIODevice::ReadOnly)){
        qWarning() << "can't access to file";
        file.close();
        return false;
    }
    val = file.readAll();
    file.close();
    QJsonDocument d = QJsonDocument::fromJson(val.toUtf8());
    QJsonArray e = d.object()["eventList"].toArray();
    QJsonObject h=d.object();
    e.append(r);
    h["eventList"]=e;
    d=QJsonDocument(h);
    if (!file.open(QIODevice::Text | QIODevice::WriteOnly)){
        qWarning() << "can't access to file";
        file.close();
        return false;
    }
    if (!file.write(QJsonDocument(d).toJson())) {
        qWarning() << "can't write the file";
        file.close();
        return false;
    }
    file.close();
    return true;
}
}
