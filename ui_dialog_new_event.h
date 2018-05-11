/********************************************************************************
** Form generated from reading UI file 'dialog_new_event.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_NEW_EVENT_H
#define UI_DIALOG_NEW_EVENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog_new_event
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *nameLineEdit;
    QFrame *line;
    QLabel *label_2;
    QDateTimeEdit *startDateTimeEdit;
    QFrame *line_2;
    QLabel *label_3;
    QDateTimeEdit *endDateTimeEdit;
    QFrame *line_3;
    QCheckBox *visibleCheckBox;
    QFrame *line_4;
    QLabel *label_4;
    QTextEdit *detailTextEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *Dialog_new_event)
    {
        if (Dialog_new_event->objectName().isEmpty())
            Dialog_new_event->setObjectName(QStringLiteral("Dialog_new_event"));
        Dialog_new_event->resize(598, 477);
        QIcon icon;
        icon.addFile(QStringLiteral("image/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Dialog_new_event->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(Dialog_new_event);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(Dialog_new_event);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        nameLineEdit = new QLineEdit(Dialog_new_event);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));

        verticalLayout->addWidget(nameLineEdit);

        line = new QFrame(Dialog_new_event);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        label_2 = new QLabel(Dialog_new_event);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        startDateTimeEdit = new QDateTimeEdit(Dialog_new_event);
        startDateTimeEdit->setObjectName(QStringLiteral("startDateTimeEdit"));

        verticalLayout->addWidget(startDateTimeEdit);

        line_2 = new QFrame(Dialog_new_event);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        label_3 = new QLabel(Dialog_new_event);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        endDateTimeEdit = new QDateTimeEdit(Dialog_new_event);
        endDateTimeEdit->setObjectName(QStringLiteral("endDateTimeEdit"));

        verticalLayout->addWidget(endDateTimeEdit);

        line_3 = new QFrame(Dialog_new_event);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);

        visibleCheckBox = new QCheckBox(Dialog_new_event);
        visibleCheckBox->setObjectName(QStringLiteral("visibleCheckBox"));
        visibleCheckBox->setChecked(true);

        verticalLayout->addWidget(visibleCheckBox);

        line_4 = new QFrame(Dialog_new_event);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_4);

        label_4 = new QLabel(Dialog_new_event);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        detailTextEdit = new QTextEdit(Dialog_new_event);
        detailTextEdit->setObjectName(QStringLiteral("detailTextEdit"));

        verticalLayout->addWidget(detailTextEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        okPushButton = new QPushButton(Dialog_new_event);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        horizontalLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(Dialog_new_event);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        horizontalLayout->addWidget(cancelPushButton);


        verticalLayout->addLayout(horizontalLayout);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(nameLineEdit);
        label_2->setBuddy(startDateTimeEdit);
        label_3->setBuddy(endDateTimeEdit);
        label_4->setBuddy(detailTextEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(nameLineEdit, startDateTimeEdit);
        QWidget::setTabOrder(startDateTimeEdit, endDateTimeEdit);
        QWidget::setTabOrder(endDateTimeEdit, detailTextEdit);

        retranslateUi(Dialog_new_event);

        QMetaObject::connectSlotsByName(Dialog_new_event);
    } // setupUi

    void retranslateUi(QDialog *Dialog_new_event)
    {
        Dialog_new_event->setWindowTitle(QApplication::translate("Dialog_new_event", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog_new_event", "Name", Q_NULLPTR));
        label_2->setText(QApplication::translate("Dialog_new_event", "StartDateTime", Q_NULLPTR));
        label_3->setText(QApplication::translate("Dialog_new_event", "EndDateTime", Q_NULLPTR));
        visibleCheckBox->setText(QApplication::translate("Dialog_new_event", "visible", Q_NULLPTR));
        label_4->setText(QApplication::translate("Dialog_new_event", "Details", Q_NULLPTR));
        okPushButton->setText(QApplication::translate("Dialog_new_event", "&Ok", Q_NULLPTR));
        cancelPushButton->setText(QApplication::translate("Dialog_new_event", "&Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog_new_event: public Ui_Dialog_new_event {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_NEW_EVENT_H
