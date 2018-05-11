/********************************************************************************
** Form generated from reading UI file 'dialogconso.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCONSO_H
#define UI_DIALOGCONSO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_DialogConso
{
public:

    void setupUi(QDialog *DialogConso)
    {
        if (DialogConso->objectName().isEmpty())
            DialogConso->setObjectName(QStringLiteral("DialogConso"));
        DialogConso->resize(400, 300);

        retranslateUi(DialogConso);

        QMetaObject::connectSlotsByName(DialogConso);
    } // setupUi

    void retranslateUi(QDialog *DialogConso)
    {
        DialogConso->setWindowTitle(QApplication::translate("DialogConso", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogConso: public Ui_DialogConso {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCONSO_H
