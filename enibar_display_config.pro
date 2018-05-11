#-------------------------------------------------
#
# Project created by phycelot 2017-12-26T19:30:03
#
#-------------------------------------------------

QT += core gui widgets sql

QTPLUGIN += QSQLMYSQL


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = enibar_display_config
TEMPLATE = app
CONFIG   += console
CONFIG -= app_bundle

RC_ICONS = icon.ico
SOURCES += main.cpp\
            enibar_display.cpp \
            dialogevent.cpp \
            dialogconso.cpp \
            dialogmessage.cpp \
            startup_config.cpp \
            display_bdd_management.cpp \
            enibar_bdd_management.cpp \
            usefull.cpp \
            dialog_new_event.cpp \
            event_bdd_management.cpp

HEADERS  += enibar_display.h \
            dialogevent.h \
            dialogconso.h \
            dialogmessage.h \
            startup_config.h \
            display_bdd_management.h \
            enibar_bdd_management.h \
            usefull.h \
            dialog_new_event.h \
            event_bdd_management.h

FORMS    += enibar_display.ui \
            dialogevent.ui \
            dialogconso.ui \
            dialogmessage.ui \
            dialog_new_event.ui
