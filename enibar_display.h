//-------------------------
//
// file created by phycelot
// 20/03/2018
// enibar_display.h
//
//-------------------------

#ifndef ENIBAR_DISPLAY_H
#define ENIBAR_DISPLAY_H

#include <QMainWindow>
#include "display_bdd_management.h"
#include "enibar_bdd_management.h"

namespace Ui {
class enibar_display;
}

class enibar_display : public QMainWindow
{
    Q_OBJECT

public:
    explicit enibar_display(QWidget *parent = 0);
    ~enibar_display();

//    void refresh();

    void changeEvent(QEvent * e);

    void init();

private slots:
    bool connect();

//    void isLoggedIn(bool);

    void on_conso_button_clicked();

    void on_event_button_clicked();

    void on_message_button_clicked();
    void refresh();



private:
    Ui::enibar_display *ui;
};
#endif // ENIBAR_DISPLAY_H
