//-------------------------
//
// file created by phycelot
// 20/03/2018
// dialogmessage.h
//
//-------------------------

#ifndef DIALOGMESSAGE_H
#define DIALOGMESSAGE_H

#include <QDialog>

namespace Ui {
class DialogMessage;
}

class DialogMessage : public QDialog
{
    Q_OBJECT

public:
    explicit DialogMessage(QWidget *parent = 0);
    ~DialogMessage();

private:
    Ui::DialogMessage *ui;

    void end();

private slots:
    void on_save_button_clicked();

    void on_cancel_button_clicked();

    void on_alert_creater_button_clicked();
};



#endif // DIALOGMESSAGE_H
