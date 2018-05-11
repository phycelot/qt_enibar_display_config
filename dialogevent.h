//-------------------------
//
// file created by phycelot
// 20/03/2018
// dialogevent.h
//
//-------------------------

#ifndef DIALOGEVENT_H
#define DIALOGEVENT_H

#include <QDialog>

namespace Ui {
class DialogEvent;
}

class DialogEvent : public QDialog
{
    Q_OBJECT

public:
    explicit DialogEvent(QWidget *parent = 0);
    ~DialogEvent();
    void keyPressEvent(QKeyEvent *event);
    bool eventFilter(QObject* object, QEvent* event);
    void refresh();
    void init();
    void changeEvent(QEvent * e);

private:
    Ui::DialogEvent *ui;
private slots :
    void on_new_event_clicked();
    void listEventClicked();
};

#endif // DIALOGEVENT_H
