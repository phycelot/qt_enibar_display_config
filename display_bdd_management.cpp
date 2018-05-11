//-------------------------
//
// file created by phycelot
// 20/03/2018
// display_bdd_management.cpp
//
//-------------------------

#include "display_bdd_management.h"
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlError>
display_bdd_management::display_bdd_management()
{
    qDebug() << "create an display_bdd_management object";
}

bool display_bdd_management::connect(){
    qDebug() << "try to connect";
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName("192.168.1.15");
    db.setDatabaseName("event");
    db.setUserName("root");
    db.setPassword("sev");
    bool ok = db.open();

    if(ok)
    {
        qInfo() << "connected " << db.hostName();
    }else{
        qWarning() << "Connection FAILED.";
        qWarning() << "La connexion a échouée, désolé :(" << db.lastError().text();

    }
    return ok;
}

void display_bdd_management::update(){
    qDebug() << "update display_bdd_management";
}
