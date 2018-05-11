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
    enibar_bdd_management enibar_bdd;
    if (!enibar_bdd.connect()) {//connect to enibar bdd
        qCritical() << "fail to connect to enibar bdd";
            QMessageBox msgBox;
            msgBox.setWindowTitle("OUPS");
            msgBox.setText("fail to connect to enibar bdd, continue ?\n");
            msgBox.setStandardButtons(QMessageBox::Yes);
            msgBox.addButton(QMessageBox::No);
        msgBox.setDefaultButton(QMessageBox::No);
        if (!(msgBox.exec() == QMessageBox::Yes)){return 1;}
    }
    display_bdd_management local_bdd;
    if (!event_bdd_management::try_connect()) { // local connect
        qCritical() << "fail to connect to local bdd";
        QMessageBox msgBox;
        msgBox.setWindowTitle("OUPS");
        msgBox.setText("fail to connect to local bdd, continue ?\n");
        msgBox.setStandardButtons(QMessageBox::Yes);
        msgBox.addButton(QMessageBox::No);
        msgBox.setDefaultButton(QMessageBox::No);
        if (!(msgBox.exec() == QMessageBox::Yes)){
            return 2;
        }
    }
    if (system("ping -c1 -s1 www.google.com")) {//connect to internet
        qCritical() << "no internet";
        QMessageBox msgBox;
        msgBox.setWindowTitle("OUPS");
        msgBox.setText("No internet, continue ?\n");
        msgBox.setStandardButtons(QMessageBox::Yes);
        msgBox.addButton(QMessageBox::No);
        msgBox.setDefaultButton(QMessageBox::No);
        if (!(msgBox.exec() == QMessageBox::Yes))
        {return 3;}
    }
    //get the config file
    if (startupConfig::tryGetFile()) //get json
    {
        qInfo() <<  "config file found";
    } else { //no config file
        qCritical() <<  "no config file";
        QMessageBox msgBox;
        msgBox.setWindowTitle("OUPS");
        msgBox.setText("Can't access to config file, create new ?\n");
        msgBox.setStandardButtons(QMessageBox::Yes);
        msgBox.addButton(QMessageBox::No);
        msgBox.setDefaultButton(QMessageBox::Yes);
        if (!(msgBox.exec() == QMessageBox::Yes)){
            return 4;
        } else {
            startupConfig::createConfigFile();
        }
    }
    qInfo() << "run";
    w.show();
    int app=a.exec();
    qInfo() << "\e[91m~~~~~~~~~~~~FERMETURE DE L'APPLICATION()~~~~~~~~~~~~\033[0m";
    return app;

}
