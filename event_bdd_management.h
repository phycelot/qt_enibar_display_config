//-------------------------
//
// file created by phycelot
// 23/04/2018
// event_bdd_management.h
//
//-------------------------

#ifndef EVENT_BDD_MANAGEMENT_H
#define EVENT_BDD_MANAGEMENT_H
#include <QJsonArray>
#include <QDateTime>
#include <QSqlDatabase>

namespace event_bdd_management {

bool try_connect();
QSqlDatabase connect();
QJsonArray getListEvent(QString search, bool visible, bool past);
bool addEvent(QString name, QDateTime startDateTime, QDateTime endDateTime,bool visible, QString details);

}

#endif // EVENT_BDD_MANAGEMENT_H
