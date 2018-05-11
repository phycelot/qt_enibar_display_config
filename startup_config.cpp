//-------------------------
//
// file created by phycelot
// 20/03/2018
// startup_config.cpp
//
//-------------------------

#include "startup_config.h"
#include <QString>
#include <QDebug>
#include <QDir>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>

namespace startupConfig {

QString filePath="./config_file/startupConfig.json"; //path hardcode, while generate bug


bool tryGetFile(){ //try to get the config  startupConfig::tryGetFile()
    bool success;
    QString val;
    QFile file;
    file.setFileName(filePath);
    success=file.open(QIODevice::Text | QIODevice::ReadOnly);
    val = file.readAll();
    file.close();
    if (!success){
        qWarning() << "can't access to file";
    }
    return success;
}

bool createConfigFile(){
    //test if logfile already exist on the right directory
    QString path("./config_file/");
    QDir dir;
    // We create the directory if needed
    if (!dir.exists(path)) {
        qCritical() << "path don't exist";
        if (dir.mkpath(path))
            {
                qInfo() << "config dir created with success";
            }
        else {
            qCritical() << "can't create config dir";
        }
    }
    //open logfile
    return ((setBarName("--_--"))
            &&(setScrollingMessage("--_--"))
            );
}

//-----------------------------ACCESSOR------------------------------------------//

QJsonObject getStartupConfig(){ //return config  startupConfig::getStartupConfig()
    QFile file;
    file.setFileName(filePath);
    if (!file.open(QIODevice::Text | QIODevice::ReadOnly)){
        qDebug() << "can't access to file";
    }
    QString val;
    val = file.readAll();
    file.close();
    QJsonDocument d = QJsonDocument::fromJson(val.toUtf8());
    QJsonObject sett2 = d.object();
    return sett2;
}

QString getBarName(){
    QJsonObject s = getStartupConfig();
    QJsonValue e = s.value("barName");
    QString x = e.toString();
    qDebug() << x;
    return x;
}

QString getScrollingMessage(){
    QJsonObject s = getStartupConfig();
    QJsonValue e = s.value("scrollingMessage");
    QString x = e.toString();
    qDebug() << x;
    return x;
}
bool isGroupBoxChecked(QString str) {
    QJsonObject s = getStartupConfig();
    QJsonObject e = s["GroupBoxChecked"].toObject();
    QJsonValue f = e.value(str);
    int x = f.toInt();
    return x;
}


//-----------------------------MUTATOR------------------------------------------//

bool setStartupConfig(QJsonObject j){
    QFile file;
    file.setFileName(filePath);
    if (!file.open(QIODevice::Text | QIODevice::WriteOnly)){
        qWarning() << "can't access to file";
    }
    if (file.write(QJsonDocument(j).toJson())) {
        return true;
    }
    file.close();
    return false;
}

bool setBarName(QString s){
    qDebug() << s;
    QJsonObject Object = getStartupConfig();
    Object.insert("barName",s);
    return setStartupConfig(Object);
}

bool setScrollingMessage(QString s){
    qDebug() << s;
    QJsonObject Object = getStartupConfig();
    Object.insert("scrollingMessage",s);
    return setStartupConfig(Object);
}

bool setGroupBoxChecked(const QString s, bool b){
    qDebug() << s << b;
    QJsonObject Object = getStartupConfig();
    int i;
    if(b){i=1;}else{i=0;}
    QJsonObject aft = Object["GroupBoxChecked"].toObject();
    aft.insert(s,i);
    Object["GroupBoxChecked"]=aft;
    return setStartupConfig(Object);
}

}
