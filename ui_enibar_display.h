/********************************************************************************
** Form generated from reading UI file 'enibar_display.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENIBAR_DISPLAY_H
#define UI_ENIBAR_DISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_enibar_display
{
public:
    QAction *actionLoading_setup;
    QAction *actionReport_bug;
    QAction *actionAbout;
    QAction *actionRefresh;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *conso_button;
    QPushButton *event_button;
    QPushButton *message_button;
    QFrame *line;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QProgressBar *internetProgressBar;
    QFrame *line_4;
    QLabel *label_2;
    QProgressBar *enibarProgressBar;
    QFrame *line_5;
    QLabel *label_3;
    QProgressBar *screenProgressBar;
    QSpacerItem *verticalSpacer;
    QFrame *line_2;
    QGridLayout *gridLayout;
    QGroupBox *event_group;
    QHBoxLayout *horizontalLayout_2;
    QTableView *event_list;
    QGroupBox *message_group;
    QGridLayout *gridLayout_2;
    QGroupBox *scrolling_message_group;
    QVBoxLayout *verticalLayout_5;
    QTextBrowser *scrolling_message_show;
    QGroupBox *bar_name_group;
    QVBoxLayout *verticalLayout_6;
    QTextBrowser *bar_name_show;
    QGroupBox *conso_group;
    QVBoxLayout *verticalLayout_3;
    QMenuBar *menuBar;
    QMenu *menu_Tools;
    QMenu *menu_Help;

    void setupUi(QMainWindow *enibar_display)
    {
        if (enibar_display->objectName().isEmpty())
            enibar_display->setObjectName(QStringLiteral("enibar_display"));
        enibar_display->setEnabled(true);
        enibar_display->resize(1400, 700);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(enibar_display->sizePolicy().hasHeightForWidth());
        enibar_display->setSizePolicy(sizePolicy);
        enibar_display->setMinimumSize(QSize(1400, 700));
        enibar_display->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon;
        icon.addFile(QStringLiteral("image/icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral("image/icon.ico"), QSize(), QIcon::Normal, QIcon::On);
        enibar_display->setWindowIcon(icon);
        actionLoading_setup = new QAction(enibar_display);
        actionLoading_setup->setObjectName(QStringLiteral("actionLoading_setup"));
        actionLoading_setup->setCheckable(false);
        actionLoading_setup->setShortcutContext(Qt::WindowShortcut);
        actionReport_bug = new QAction(enibar_display);
        actionReport_bug->setObjectName(QStringLiteral("actionReport_bug"));
        actionAbout = new QAction(enibar_display);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionRefresh = new QAction(enibar_display);
        actionRefresh->setObjectName(QStringLiteral("actionRefresh"));
        centralWidget = new QWidget(enibar_display);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        conso_button = new QPushButton(centralWidget);
        conso_button->setObjectName(QStringLiteral("conso_button"));
        conso_button->setMaximumSize(QSize(80, 16777215));

        verticalLayout->addWidget(conso_button);

        event_button = new QPushButton(centralWidget);
        event_button->setObjectName(QStringLiteral("event_button"));
        event_button->setMaximumSize(QSize(80, 16777215));

        verticalLayout->addWidget(event_button);

        message_button = new QPushButton(centralWidget);
        message_button->setObjectName(QStringLiteral("message_button"));
        message_button->setMaximumSize(QSize(80, 16777215));

        verticalLayout->addWidget(message_button);

        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setMaximumSize(QSize(80, 16777215));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMaximumSize(QSize(80, 16777215));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        internetProgressBar = new QProgressBar(groupBox);
        internetProgressBar->setObjectName(QStringLiteral("internetProgressBar"));
        internetProgressBar->setValue(0);
        internetProgressBar->setTextVisible(false);

        verticalLayout_2->addWidget(internetProgressBar);

        line_4 = new QFrame(groupBox);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_4);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        enibarProgressBar = new QProgressBar(groupBox);
        enibarProgressBar->setObjectName(QStringLiteral("enibarProgressBar"));
        enibarProgressBar->setValue(0);
        enibarProgressBar->setTextVisible(false);

        verticalLayout_2->addWidget(enibarProgressBar);

        line_5 = new QFrame(groupBox);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_5);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        screenProgressBar = new QProgressBar(groupBox);
        screenProgressBar->setObjectName(QStringLiteral("screenProgressBar"));
        screenProgressBar->setValue(0);
        screenProgressBar->setTextVisible(false);

        verticalLayout_2->addWidget(screenProgressBar);


        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_2);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        event_group = new QGroupBox(centralWidget);
        event_group->setObjectName(QStringLiteral("event_group"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(event_group->sizePolicy().hasHeightForWidth());
        event_group->setSizePolicy(sizePolicy1);
        event_group->setMaximumSize(QSize(250, 16777215));
        event_group->setCheckable(true);
        horizontalLayout_2 = new QHBoxLayout(event_group);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        event_list = new QTableView(event_group);
        event_list->setObjectName(QStringLiteral("event_list"));
        event_list->setMinimumSize(QSize(30, 0));
        event_list->setAutoFillBackground(false);

        horizontalLayout_2->addWidget(event_list);


        gridLayout->addWidget(event_group, 0, 2, 1, 1);

        message_group = new QGroupBox(centralWidget);
        message_group->setObjectName(QStringLiteral("message_group"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(message_group->sizePolicy().hasHeightForWidth());
        message_group->setSizePolicy(sizePolicy2);
        message_group->setMinimumSize(QSize(0, 0));
        message_group->setMaximumSize(QSize(250, 200));
        message_group->setCheckable(true);
        gridLayout_2 = new QGridLayout(message_group);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        scrolling_message_group = new QGroupBox(message_group);
        scrolling_message_group->setObjectName(QStringLiteral("scrolling_message_group"));
        scrolling_message_group->setMinimumSize(QSize(0, 0));
        scrolling_message_group->setMaximumSize(QSize(16777215, 100));
        verticalLayout_5 = new QVBoxLayout(scrolling_message_group);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        scrolling_message_show = new QTextBrowser(scrolling_message_group);
        scrolling_message_show->setObjectName(QStringLiteral("scrolling_message_show"));
        scrolling_message_show->setMinimumSize(QSize(0, 0));
        scrolling_message_show->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout_5->addWidget(scrolling_message_show);


        gridLayout_2->addWidget(scrolling_message_group, 0, 1, 1, 1);

        bar_name_group = new QGroupBox(message_group);
        bar_name_group->setObjectName(QStringLiteral("bar_name_group"));
        bar_name_group->setMinimumSize(QSize(0, 0));
        bar_name_group->setMaximumSize(QSize(16777215, 100));
        verticalLayout_6 = new QVBoxLayout(bar_name_group);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        bar_name_show = new QTextBrowser(bar_name_group);
        bar_name_show->setObjectName(QStringLiteral("bar_name_show"));
        bar_name_show->setMinimumSize(QSize(0, 0));
        bar_name_show->setMaximumSize(QSize(16777215, 50));

        verticalLayout_6->addWidget(bar_name_show, 0, Qt::AlignBottom);


        gridLayout_2->addWidget(bar_name_group, 1, 1, 1, 1);


        gridLayout->addWidget(message_group, 1, 2, 1, 1);

        conso_group = new QGroupBox(centralWidget);
        conso_group->setObjectName(QStringLiteral("conso_group"));
        sizePolicy2.setHeightForWidth(conso_group->sizePolicy().hasHeightForWidth());
        conso_group->setSizePolicy(sizePolicy2);
        conso_group->setCheckable(true);
        verticalLayout_3 = new QVBoxLayout(conso_group);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));

        gridLayout->addWidget(conso_group, 0, 1, 2, 1);


        horizontalLayout->addLayout(gridLayout);

        enibar_display->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(enibar_display);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1400, 20));
        menu_Tools = new QMenu(menuBar);
        menu_Tools->setObjectName(QStringLiteral("menu_Tools"));
        menu_Help = new QMenu(menuBar);
        menu_Help->setObjectName(QStringLiteral("menu_Help"));
        enibar_display->setMenuBar(menuBar);

        menuBar->addAction(menu_Tools->menuAction());
        menuBar->addAction(menu_Help->menuAction());
        menu_Tools->addAction(actionLoading_setup);
        menu_Tools->addAction(actionRefresh);
        menu_Help->addAction(actionReport_bug);
        menu_Help->addSeparator();
        menu_Help->addAction(actionAbout);

        retranslateUi(enibar_display);

        QMetaObject::connectSlotsByName(enibar_display);
    } // setupUi

    void retranslateUi(QMainWindow *enibar_display)
    {
        enibar_display->setWindowTitle(QApplication::translate("enibar_display", "enibar_display", Q_NULLPTR));
        actionLoading_setup->setText(QApplication::translate("enibar_display", "loading setup", Q_NULLPTR));
        actionReport_bug->setText(QApplication::translate("enibar_display", "report bug", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("enibar_display", "about", Q_NULLPTR));
        actionRefresh->setText(QApplication::translate("enibar_display", "refresh", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionRefresh->setShortcut(QApplication::translate("enibar_display", "Ctrl+R", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        conso_button->setText(QApplication::translate("enibar_display", "&Conso", Q_NULLPTR));
        event_button->setText(QApplication::translate("enibar_display", "&Event", Q_NULLPTR));
        message_button->setText(QApplication::translate("enibar_display", "&Message", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("enibar_display", "Statut", Q_NULLPTR));
        label->setText(QApplication::translate("enibar_display", "Internet", Q_NULLPTR));
        label_2->setText(QApplication::translate("enibar_display", "Enibar", Q_NULLPTR));
        label_3->setText(QApplication::translate("enibar_display", "Screen", Q_NULLPTR));
        event_group->setTitle(QApplication::translate("enibar_display", "Event", Q_NULLPTR));
        message_group->setTitle(QApplication::translate("enibar_display", "Message", Q_NULLPTR));
        scrolling_message_group->setTitle(QApplication::translate("enibar_display", "Message D\303\251filant", Q_NULLPTR));
        scrolling_message_show->setHtml(QApplication::translate("enibar_display", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">message defilant</p></body></html>", Q_NULLPTR));
        bar_name_group->setTitle(QApplication::translate("enibar_display", "Nom du bar", Q_NULLPTR));
        bar_name_show->setHtml(QApplication::translate("enibar_display", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">nom du bar</p></body></html>", Q_NULLPTR));
        conso_group->setTitle(QApplication::translate("enibar_display", "Conso", Q_NULLPTR));
        menu_Tools->setTitle(QApplication::translate("enibar_display", "&Tools", Q_NULLPTR));
        menu_Help->setTitle(QApplication::translate("enibar_display", "&Help", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class enibar_display: public Ui_enibar_display {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENIBAR_DISPLAY_H
