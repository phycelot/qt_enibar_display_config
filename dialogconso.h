//-------------------------
//
// file created by phycelot
// 20/03/2018
// dialogconso.h
//
//-------------------------

#ifndef DIALOGCONSO_H
#define DIALOGCONSO_H

#include <QDialog>

namespace Ui {
class DialogConso;
}

class DialogConso : public QDialog
{
    Q_OBJECT

public:
    explicit DialogConso(QWidget *parent = 0);
    ~DialogConso();

private:
    Ui::DialogConso *ui;
};

#endif // DIALOGCONSO_H
