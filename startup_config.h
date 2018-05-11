//-------------------------
//
// file created by phycelot
// 20/03/2018
// startup_config.h
//
//-------------------------

#ifndef TEST_FUNCTION_H
#define TEST_FUNCTION_H
#include <QString>
#include <QDebug>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>

namespace startupConfig {

    bool tryGetFile();
    QJsonObject getStartupConfig();
    QString getBarName();
    QString getScrollingMessage();
    bool setStartupConfig(QJsonObject j);
    bool setBarName(QString s);
    bool setScrollingMessage(QString s);
    bool createConfigFile();
    bool isGroupBoxChecked(QString s);
    bool setGroupBoxChecked(const QString s, bool b);
}


#endif // TEST_FUNCTION_H
