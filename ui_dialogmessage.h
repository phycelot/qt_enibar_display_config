/********************************************************************************
** Form generated from reading UI file 'dialogmessage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMESSAGE_H
#define UI_DIALOGMESSAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogMessage
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout_2;
    QLabel *label;
    QLineEdit *scrolling_message;
    QLabel *label_2;
    QLineEdit *bar_name;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *save_button;
    QPushButton *cancel_button;
    QPushButton *alert_creater_button;

    void setupUi(QDialog *DialogMessage)
    {
        if (DialogMessage->objectName().isEmpty())
            DialogMessage->setObjectName(QStringLiteral("DialogMessage"));
        DialogMessage->resize(445, 106);
        DialogMessage->setMaximumSize(QSize(445, 16777215));
        verticalLayout = new QVBoxLayout(DialogMessage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label = new QLabel(DialogMessage);
        label->setObjectName(QStringLiteral("label"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label);

        scrolling_message = new QLineEdit(DialogMessage);
        scrolling_message->setObjectName(QStringLiteral("scrolling_message"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, scrolling_message);

        label_2 = new QLabel(DialogMessage);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_2);

        bar_name = new QLineEdit(DialogMessage);
        bar_name->setObjectName(QStringLiteral("bar_name"));
        bar_name->setEnabled(true);
        bar_name->setEchoMode(QLineEdit::Normal);
        bar_name->setReadOnly(false);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, bar_name);


        verticalLayout->addLayout(formLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        save_button = new QPushButton(DialogMessage);
        save_button->setObjectName(QStringLiteral("save_button"));

        horizontalLayout->addWidget(save_button);

        cancel_button = new QPushButton(DialogMessage);
        cancel_button->setObjectName(QStringLiteral("cancel_button"));

        horizontalLayout->addWidget(cancel_button);

        alert_creater_button = new QPushButton(DialogMessage);
        alert_creater_button->setObjectName(QStringLiteral("alert_creater_button"));

        horizontalLayout->addWidget(alert_creater_button);


        verticalLayout->addLayout(horizontalLayout);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(scrolling_message);
        label_2->setBuddy(bar_name);
#endif // QT_NO_SHORTCUT

        retranslateUi(DialogMessage);

        QMetaObject::connectSlotsByName(DialogMessage);
    } // setupUi

    void retranslateUi(QDialog *DialogMessage)
    {
        DialogMessage->setWindowTitle(QApplication::translate("DialogMessage", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("DialogMessage", "Message defilant", Q_NULLPTR));
        scrolling_message->setText(QString());
        label_2->setText(QApplication::translate("DialogMessage", "Nom du bar", Q_NULLPTR));
        bar_name->setText(QString());
        save_button->setText(QApplication::translate("DialogMessage", "Save", Q_NULLPTR));
        cancel_button->setText(QApplication::translate("DialogMessage", "Cancel", Q_NULLPTR));
        alert_creater_button->setText(QApplication::translate("DialogMessage", "Create &Alert", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogMessage: public Ui_DialogMessage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMESSAGE_H
