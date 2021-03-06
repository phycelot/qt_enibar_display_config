//-------------------------
//
// file created by phycelot
// 20/03/2018
// main.cpp
//
//-------------------------

#include "enibar_display.h"
#include "startup_config.h"
#include "usefull.h"
#include <QtGlobal>
#include <QApplication>
#include <QMessageBox>
#include <QDebug>
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QJsonDocument>
#include <QJsonObject>
#include <stdio.h>
#include <QDate>
#include <QTime>
#include <QDir>
#include <stdlib.h>
#include "display_bdd_management.h"
#include "enibar_bdd_management.h"
#include "event_bdd_management.h"

int main(int argc, char *argv[])
{
    qInstallMessageHandler(usefull::myMessageOutput); // Install the handler
    qInfo() << "\e[92m~~~~~~~~~~~~LANCEMENT DE L'APPLICATION()~~~~~~~~~~~~\033[0m";
    for(int i=0;i<argc;i++)
    {
        qDebug() << argv[i] ;
    }
    QApplication a(argc, argv);
    a.setWindowIcon(QIcon("../enibar_display_config/images/icon.png"));
    enibar_display w;
    qInfo() << "run";
    w.show();
    int app=a.exec();
    qInfo() << "\e[91m~~~~~~~~~~~~FERMETURE DE L'APPLICATION()~~~~~~~~~~~~\033[0m";
    return app;

}
