//-------------------------
//
// file created by phycelot
// 09/04/2018
// usefull.cpp
//
//-------------------------

#include "usefull.h"
#include <QtGlobal>
#include <QTime>
#include <QDate>
#include <QDir>
#include <QDebug>
#include <QDateTime>

namespace usefull {

void myMessageOutput(QtMsgType type, const QMessageLogContext &context, const QString &msg)
{
    //create logfile name
    QString fileName = "enibar_display_log_"+QDate::currentDate().toString("yyyy.MM.dd").replace(".","-")+".log";
    //test if logfile already exist on the right directory
    QString path("./log/");
    QDir dir;
    // We create the directory if needed
    if (!dir.exists(path)) {
        qCritical() << "path don't exist";
        if (dir.mkpath(path))
        {
            qInfo() << "dir created with success";
        }
        else {
            qCritical() << "can't create log dir";
        }
    }
    //open logfile
    FILE * logFIle=fopen((path +fileName).toLatin1().data(),"a");
    //create log entry
    QByteArray localMsg = msg.toLocal8Bit();
    //    QString dateTime = "[Date: " + dStr + "; Time: " + t.toString() +"]";b
    QString dateTime = "[" + QDateTime::currentDateTime().toString("yyyy-MM-ddThh:mm:ss")+"]";
    const char *dateTime2 = dateTime.toLatin1().data();
    switch (type) {
    case QtDebugMsg:
        fprintf(logFIle, "%s \e[94mDebug\033[0m: %s (%s:%u, %s)\n", dateTime2 ,localMsg.constData(), context.file, context.line, context.function);
        break;
    case QtInfoMsg:
        fprintf(logFIle, "%s \e[33mInfo\033[0m: %s (%s:%u, %s)\n",dateTime2 , localMsg.constData(), context.file, context.line, context.function);
        break;
    case QtWarningMsg:
        fprintf(logFIle, "%s \033[0;31mWarning\033[0m: %s (%s:%u, %s)\n",dateTime2 , localMsg.constData(), context.file, context.line, context.function);
        break;
    case QtCriticalMsg:
        fprintf(logFIle, "%s \e[35Critical\033[0m: %s (%s:%u, %s)\n", dateTime2 ,localMsg.constData(), context.file, context.line, context.function);
        break;
    case QtFatalMsg:
        fprintf(logFIle, "%s \e[95mFatal\033[0m: %s (%s:%u, %s)\n", dateTime2 ,localMsg.constData(), context.file, context.line, context.function);
        break;
    }
    fclose(logFIle);
}

}
