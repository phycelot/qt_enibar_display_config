//-------------------------
//
// file created by phycelot
// 16/04/2018
// dialog_new_event.h
//
//-------------------------

#ifndef DIALOG_NEW_EVENT_H
#define DIALOG_NEW_EVENT_H

#include <QDialog>

namespace Ui {
class Dialog_new_event;
}

class Dialog_new_event : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_new_event(QWidget *parent = 0);
    ~Dialog_new_event();

private:
    Ui::Dialog_new_event *ui;
private slots :
    void startDateTimeEditEditingFinished();
    void endDateTimeEditEditingFinished();
    void newEventAdd();
};

#endif // DIALOG_NEW_EVENT_H
