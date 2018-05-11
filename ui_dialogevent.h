/********************************************************************************
** Form generated from reading UI file 'dialogevent.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGEVENT_H
#define UI_DIALOGEVENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_DialogEvent
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QTableView *listEvent;
    QFrame *line;
    QGroupBox *eventOptionBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *searchEventLineEdit;
    QCheckBox *allowPastSearchCheckBox;
    QCheckBox *allowInvisibleSearchCheckBox;
    QProgressBar *progressBar;
    QPushButton *new_event;
    QGroupBox *eventEditorGroupBox;
    QGridLayout *gridLayout_3;
    QTextEdit *detailsTextEdit;
    QFrame *line_3;
    QFrame *line_2;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_2;
    QFrame *line_4;
    QCheckBox *visibleCheckBox;
    QDateTimeEdit *startDateTimeEdit;
    QLineEdit *eventNameLineEdit;
    QLabel *label_4;
    QDateTimeEdit *endDateTimeEdit;
    QFrame *line_5;
    QFrame *line_6;
    QPushButton *savePushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *DialogEvent)
    {
        if (DialogEvent->objectName().isEmpty())
            DialogEvent->setObjectName(QStringLiteral("DialogEvent"));
        DialogEvent->resize(1048, 705);
        gridLayout = new QGridLayout(DialogEvent);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        listEvent = new QTableView(DialogEvent);
        listEvent->setObjectName(QStringLiteral("listEvent"));

        gridLayout_2->addWidget(listEvent, 2, 0, 1, 1);

        line = new QFrame(DialogEvent);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 1, 0, 1, 1);

        eventOptionBox = new QGroupBox(DialogEvent);
        eventOptionBox->setObjectName(QStringLiteral("eventOptionBox"));
        eventOptionBox->setMinimumSize(QSize(0, 50));
        horizontalLayout = new QHBoxLayout(eventOptionBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(eventOptionBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        searchEventLineEdit = new QLineEdit(eventOptionBox);
        searchEventLineEdit->setObjectName(QStringLiteral("searchEventLineEdit"));

        horizontalLayout->addWidget(searchEventLineEdit);

        allowPastSearchCheckBox = new QCheckBox(eventOptionBox);
        allowPastSearchCheckBox->setObjectName(QStringLiteral("allowPastSearchCheckBox"));
        allowPastSearchCheckBox->setChecked(false);

        horizontalLayout->addWidget(allowPastSearchCheckBox);

        allowInvisibleSearchCheckBox = new QCheckBox(eventOptionBox);
        allowInvisibleSearchCheckBox->setObjectName(QStringLiteral("allowInvisibleSearchCheckBox"));

        horizontalLayout->addWidget(allowInvisibleSearchCheckBox);


        gridLayout_2->addWidget(eventOptionBox, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);

        progressBar = new QProgressBar(DialogEvent);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        gridLayout->addWidget(progressBar, 1, 0, 1, 1);

        new_event = new QPushButton(DialogEvent);
        new_event->setObjectName(QStringLiteral("new_event"));

        gridLayout->addWidget(new_event, 1, 2, 1, 2);

        eventEditorGroupBox = new QGroupBox(DialogEvent);
        eventEditorGroupBox->setObjectName(QStringLiteral("eventEditorGroupBox"));
        eventEditorGroupBox->setEnabled(false);
        gridLayout_3 = new QGridLayout(eventEditorGroupBox);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        detailsTextEdit = new QTextEdit(eventEditorGroupBox);
        detailsTextEdit->setObjectName(QStringLiteral("detailsTextEdit"));

        gridLayout_3->addWidget(detailsTextEdit, 10, 0, 1, 1);

        line_3 = new QFrame(eventEditorGroupBox);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_3, 5, 0, 1, 1);

        line_2 = new QFrame(eventEditorGroupBox);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_2, 2, 0, 1, 1);

        label_3 = new QLabel(eventEditorGroupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_3->addWidget(label_3, 3, 0, 1, 1);

        label_5 = new QLabel(eventEditorGroupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_3->addWidget(label_5, 9, 0, 1, 1);

        label_2 = new QLabel(eventEditorGroupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        line_4 = new QFrame(eventEditorGroupBox);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_4, 8, 0, 1, 1);

        visibleCheckBox = new QCheckBox(eventEditorGroupBox);
        visibleCheckBox->setObjectName(QStringLiteral("visibleCheckBox"));

        gridLayout_3->addWidget(visibleCheckBox, 12, 0, 1, 1);

        startDateTimeEdit = new QDateTimeEdit(eventEditorGroupBox);
        startDateTimeEdit->setObjectName(QStringLiteral("startDateTimeEdit"));

        gridLayout_3->addWidget(startDateTimeEdit, 4, 0, 1, 1);

        eventNameLineEdit = new QLineEdit(eventEditorGroupBox);
        eventNameLineEdit->setObjectName(QStringLiteral("eventNameLineEdit"));

        gridLayout_3->addWidget(eventNameLineEdit, 1, 0, 1, 1);

        label_4 = new QLabel(eventEditorGroupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_3->addWidget(label_4, 6, 0, 1, 1);

        endDateTimeEdit = new QDateTimeEdit(eventEditorGroupBox);
        endDateTimeEdit->setObjectName(QStringLiteral("endDateTimeEdit"));

        gridLayout_3->addWidget(endDateTimeEdit, 7, 0, 1, 1);

        line_5 = new QFrame(eventEditorGroupBox);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_5, 11, 0, 1, 1);

        line_6 = new QFrame(eventEditorGroupBox);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_6, 14, 0, 1, 1);

        savePushButton = new QPushButton(eventEditorGroupBox);
        savePushButton->setObjectName(QStringLiteral("savePushButton"));

        gridLayout_3->addWidget(savePushButton, 15, 0, 1, 1);

        cancelPushButton = new QPushButton(eventEditorGroupBox);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        gridLayout_3->addWidget(cancelPushButton, 16, 0, 1, 1);


        gridLayout->addWidget(eventEditorGroupBox, 0, 2, 1, 2);


        retranslateUi(DialogEvent);

        QMetaObject::connectSlotsByName(DialogEvent);
    } // setupUi

    void retranslateUi(QDialog *DialogEvent)
    {
        DialogEvent->setWindowTitle(QApplication::translate("DialogEvent", "Dialog", Q_NULLPTR));
        eventOptionBox->setTitle(QApplication::translate("DialogEvent", "Option", Q_NULLPTR));
        label->setText(QApplication::translate("DialogEvent", "Search : ", Q_NULLPTR));
        allowPastSearchCheckBox->setText(QApplication::translate("DialogEvent", "past", Q_NULLPTR));
        allowInvisibleSearchCheckBox->setText(QApplication::translate("DialogEvent", "invisible", Q_NULLPTR));
        new_event->setText(QApplication::translate("DialogEvent", "&New Event", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        new_event->setShortcut(QApplication::translate("DialogEvent", "Ctrl+N", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        eventEditorGroupBox->setTitle(QApplication::translate("DialogEvent", "Event Editor", Q_NULLPTR));
        label_3->setText(QApplication::translate("DialogEvent", "StartDateTime", Q_NULLPTR));
        label_5->setText(QApplication::translate("DialogEvent", "Details", Q_NULLPTR));
        label_2->setText(QApplication::translate("DialogEvent", "Event Name", Q_NULLPTR));
        visibleCheckBox->setText(QApplication::translate("DialogEvent", "Visible", Q_NULLPTR));
        label_4->setText(QApplication::translate("DialogEvent", "EndDateTime", Q_NULLPTR));
        savePushButton->setText(QApplication::translate("DialogEvent", "&Save", Q_NULLPTR));
        cancelPushButton->setText(QApplication::translate("DialogEvent", "&Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogEvent: public Ui_DialogEvent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGEVENT_H
