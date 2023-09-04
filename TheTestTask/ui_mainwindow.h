/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QTableView *tableViewForData;
    QPushButton *toAdd_button;
    QComboBox *distanceSort;
    QLabel *label;
    QPushButton *clear_button;
    QLabel *label_6;
    QLabel *label_7;
    QComboBox *dateSort;
    QComboBox *letterSort;
    QLabel *label_8;
    QLabel *label_9;
    QComboBox *typeSort;
    QWidget *page_2;
    QPushButton *add_button;
    QPushButton *toMain_button;
    QLineEdit *fillName;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *selectType;
    QLineEdit *fillX;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *fillY;
    QLabel *ifEmpty_label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 791, 541));
        page = new QWidget();
        page->setObjectName("page");
        tableViewForData = new QTableView(page);
        tableViewForData->setObjectName("tableViewForData");
        tableViewForData->setGeometry(QRect(30, 40, 521, 421));
        tableViewForData->setStyleSheet(QString::fromUtf8("QTableView{\n"
"    background-color: rgb(100, 95, 95);\n"
"	font: 900 9pt \"Segoe UI\";\n"
"    alternate-background-color: rgb(100, 95, 95);\n"
"	font-size:15px;\n"
"	outline: 0;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    color: white;\n"
"	font: 900 9pt \"Segoe UI\";	\n"
"    background-color: rgb(64, 64, 64);\n"
"    border: 5px solid #f6f7fa;\n"
"    border-radius:0px;\n"
"    border-color: rgb(64, 64, 64);\n"
"} \n"
"\n"
"QTableView::item:selected\n"
"{\n"
"	color: white;\n"
"	background-color: rgb(64, 64, 64);\n"
"    border: 5px solid #f6f7fa;\n"
"    border-radius:0px;\n"
"    border-color: rgb(64, 64, 64);\n"
"}"));
        toAdd_button = new QPushButton(page);
        toAdd_button->setObjectName("toAdd_button");
        toAdd_button->setGeometry(QRect(340, 490, 111, 34));
        toAdd_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	border: 2px solid black;\n"
"	background-color: rgb(100, 95, 95);\n"
"	font-size: 15px;	\n"
"	border-radius: 15px;	\n"
"	color:black;\n"
"}\n"
"QPushButton::hover{\n"
"	background-color: rgb(107, 107, 107);\n"
"}"));
        distanceSort = new QComboBox(page);
        distanceSort->addItem(QString());
        distanceSort->addItem(QString());
        distanceSort->addItem(QString());
        distanceSort->addItem(QString());
        distanceSort->addItem(QString());
        distanceSort->addItem(QString());
        distanceSort->setObjectName("distanceSort");
        distanceSort->setGeometry(QRect(570, 120, 211, 31));
        distanceSort->setStyleSheet(QString::fromUtf8("QComboBox QAbstractItemView {\n"
"  color: black;	\n"
"  background-color: rgb(100, 95, 95);\n"
"  padding: 10px;\n"
"  selection-background-color: rgb(100, 95, 95);\n"
"  font: 600 10pt \"Yu Gothic UI Semibold\";\n"
"\n"
"}\n"
"QComboBox::drop-down \n"
"{\n"
"    width: 0px;\n"
"    height: 0px;\n"
"    border: 0px;\n"
"}\n"
"QComboBox{\n"
"border: 2px solid black;\n"
"	background-color: white;\n"
"font: 600 12pt \"Yu Gothic UI Semibold\";\n"
"\n"
"}"));
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(570, 60, 231, 31));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 600 13pt \"Yu Gothic UI Semibold\";\n"
"}"));
        clear_button = new QPushButton(page);
        clear_button->setObjectName("clear_button");
        clear_button->setGeometry(QRect(150, 490, 111, 34));
        clear_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	border: 2px solid black;\n"
"	background-color: rgb(100, 95, 95);\n"
"	font-size: 15px;	\n"
"	border-radius: 15px;	\n"
"	color:black;\n"
"}\n"
"QPushButton::hover{\n"
"	background-color: rgb(107, 107, 107);\n"
"}"));
        label_6 = new QLabel(page);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(570, 90, 201, 24));
        label_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 600 13pt \"Yu Gothic UI Semibold\";\n"
"}"));
        label_7 = new QLabel(page);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(570, 160, 201, 24));
        label_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 600 13pt \"Yu Gothic UI Semibold\";\n"
"}"));
        dateSort = new QComboBox(page);
        dateSort->addItem(QString());
        dateSort->addItem(QString());
        dateSort->addItem(QString());
        dateSort->addItem(QString());
        dateSort->addItem(QString());
        dateSort->addItem(QString());
        dateSort->addItem(QString());
        dateSort->setObjectName("dateSort");
        dateSort->setGeometry(QRect(570, 190, 211, 29));
        dateSort->setStyleSheet(QString::fromUtf8("QComboBox QAbstractItemView {\n"
"  color: black;	\n"
"  background-color: rgb(100, 95, 95);\n"
"  padding: 10px;\n"
"  selection-background-color: rgb(100, 95, 95);\n"
"  font: 600 10pt \"Yu Gothic UI Semibold\";\n"
"\n"
"}\n"
"QComboBox::drop-down \n"
"{\n"
"    width: 0px;\n"
"    height: 0px;\n"
"    border: 0px;\n"
"}\n"
"QComboBox{\n"
"border: 2px solid black;\n"
"	background-color: white;\n"
"font: 600 12pt \"Yu Gothic UI Semibold\";\n"
"\n"
"}"));
        letterSort = new QComboBox(page);
        letterSort->addItem(QString());
        letterSort->addItem(QString());
        letterSort->setObjectName("letterSort");
        letterSort->setGeometry(QRect(570, 260, 211, 29));
        letterSort->setStyleSheet(QString::fromUtf8("QComboBox QAbstractItemView {\n"
"  color: black;	\n"
"  background-color: rgb(100, 95, 95);\n"
"  padding: 10px;\n"
"  selection-background-color: rgb(100, 95, 95);\n"
"  font: 600 10pt \"Yu Gothic UI Semibold\";\n"
"\n"
"}\n"
"QComboBox::drop-down \n"
"{\n"
"    width: 0px;\n"
"    height: 0px;\n"
"    border: 0px;\n"
"}\n"
"QComboBox{\n"
"border: 2px solid black;\n"
"	background-color: white;\n"
"font: 600 12pt \"Yu Gothic UI Semibold\";\n"
"\n"
"}"));
        label_8 = new QLabel(page);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(570, 230, 201, 24));
        label_8->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 600 13pt \"Yu Gothic UI Semibold\";\n"
"}"));
        label_9 = new QLabel(page);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(570, 300, 201, 24));
        label_9->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 600 13pt \"Yu Gothic UI Semibold\";\n"
"}"));
        typeSort = new QComboBox(page);
        typeSort->addItem(QString());
        typeSort->addItem(QString());
        typeSort->setObjectName("typeSort");
        typeSort->setGeometry(QRect(570, 330, 211, 29));
        typeSort->setStyleSheet(QString::fromUtf8("QComboBox QAbstractItemView {\n"
"  color: black;	\n"
"  background-color: rgb(100, 95, 95);\n"
"  padding: 10px;\n"
"  selection-background-color: rgb(100, 95, 95);\n"
"  font: 600 10pt \"Yu Gothic UI Semibold\";\n"
"\n"
"}\n"
"QComboBox::drop-down \n"
"{\n"
"    width: 0px;\n"
"    height: 0px;\n"
"    border: 0px;\n"
"}\n"
"QComboBox{\n"
"border: 2px solid black;\n"
"	background-color: white;\n"
"font: 600 12pt \"Yu Gothic UI Semibold\";\n"
"\n"
"}"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        add_button = new QPushButton(page_2);
        add_button->setObjectName("add_button");
        add_button->setGeometry(QRect(260, 293, 251, 71));
        add_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	border: 2px solid black;\n"
"	background-color: rgb(100, 95, 95);\n"
"	font-size: 15px;	\n"
"	border-radius: 15px;	\n"
"	color:black;\n"
"}\n"
"QPushButton::hover{\n"
"	background-color: rgb(107, 107, 107);\n"
"}"));
        toMain_button = new QPushButton(page_2);
        toMain_button->setObjectName("toMain_button");
        toMain_button->setGeometry(QRect(620, 490, 111, 34));
        toMain_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	border: 2px solid black;\n"
"	background-color: rgb(100, 95, 95);\n"
"	font-size: 15px;	\n"
"	border-radius: 15px;	\n"
"	color:black;\n"
"}\n"
"QPushButton::hover{\n"
"	background-color: rgb(107, 107, 107);\n"
"}"));
        fillName = new QLineEdit(page_2);
        fillName->setObjectName("fillName");
        fillName->setGeometry(QRect(50, 90, 221, 41));
        fillName->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	font: 600 13pt \"Yu Gothic UI Semibold\";\n"
"}"));
        label_2 = new QLabel(page_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 60, 131, 24));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 600 13pt \"Yu Gothic UI Semibold\";\n"
"}"));
        label_3 = new QLabel(page_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 170, 71, 31));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 600 13pt \"Yu Gothic UI Semibold\";\n"
"}"));
        selectType = new QComboBox(page_2);
        selectType->addItem(QString());
        selectType->addItem(QString());
        selectType->addItem(QString());
        selectType->addItem(QString());
        selectType->setObjectName("selectType");
        selectType->setGeometry(QRect(50, 210, 221, 41));
        selectType->setStyleSheet(QString::fromUtf8("QComboBox QAbstractItemView {\n"
"  color: black;	\n"
"  background-color: rgb(100, 95, 95);\n"
"  padding: 10px;\n"
"  selection-background-color: rgb(100, 95, 95);\n"
"  font: 600 10pt \"Yu Gothic UI Semibold\";\n"
"\n"
"}\n"
"QComboBox::drop-down \n"
"{\n"
"    width: 0px;\n"
"    height: 0px;\n"
"    border: 0px;\n"
"}\n"
"QComboBox{\n"
"border: 2px solid black;\n"
"	background-color: white;\n"
"font: 600 12pt \"Yu Gothic UI Semibold\";\n"
"\n"
"}"));
        fillX = new QLineEdit(page_2);
        fillX->setObjectName("fillX");
        fillX->setGeometry(QRect(480, 90, 221, 41));
        fillX->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	font: 600 13pt \"Yu Gothic UI Semibold\";\n"
"}"));
        label_4 = new QLabel(page_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(480, 60, 121, 24));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 600 13pt \"Yu Gothic UI Semibold\";\n"
"}"));
        label_5 = new QLabel(page_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(480, 180, 111, 24));
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 600 13pt \"Yu Gothic UI Semibold\";\n"
"}"));
        fillY = new QLineEdit(page_2);
        fillY->setObjectName("fillY");
        fillY->setGeometry(QRect(480, 210, 211, 41));
        fillY->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	font: 600 13pt \"Yu Gothic UI Semibold\";\n"
"}"));
        ifEmpty_label = new QLabel(page_2);
        ifEmpty_label->setObjectName("ifEmpty_label");
        ifEmpty_label->setGeometry(QRect(20, 473, 431, 61));
        stackedWidget->addWidget(page_2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 30));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        toAdd_button->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        distanceSort->setItemText(0, QCoreApplication::translate("MainWindow", "Empty", nullptr));
        distanceSort->setItemText(1, QCoreApplication::translate("MainWindow", "Up to one 100 units", nullptr));
        distanceSort->setItemText(2, QCoreApplication::translate("MainWindow", "Up to a 1000 units", nullptr));
        distanceSort->setItemText(3, QCoreApplication::translate("MainWindow", "Up to a 10000 units", nullptr));
        distanceSort->setItemText(4, QCoreApplication::translate("MainWindow", "Very far(>10000 units)", nullptr));
        distanceSort->setItemText(5, QString());

        label->setText(QCoreApplication::translate("MainWindow", "Sort by distance ", nullptr));
        clear_button->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "(one of points)", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Sort by date", nullptr));
        dateSort->setItemText(0, QCoreApplication::translate("MainWindow", "Empty", nullptr));
        dateSort->setItemText(1, QCoreApplication::translate("MainWindow", "Today", nullptr));
        dateSort->setItemText(2, QCoreApplication::translate("MainWindow", "Yesterday", nullptr));
        dateSort->setItemText(3, QCoreApplication::translate("MainWindow", "This week", nullptr));
        dateSort->setItemText(4, QCoreApplication::translate("MainWindow", "This month", nullptr));
        dateSort->setItemText(5, QCoreApplication::translate("MainWindow", "This year", nullptr));
        dateSort->setItemText(6, QCoreApplication::translate("MainWindow", "Late", nullptr));

        letterSort->setItemText(0, QCoreApplication::translate("MainWindow", "Empty", nullptr));
        letterSort->setItemText(1, QCoreApplication::translate("MainWindow", "# (non-letter)", nullptr));

        label_8->setText(QCoreApplication::translate("MainWindow", "Sort by first letter", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Sort by type", nullptr));
        typeSort->setItemText(0, QCoreApplication::translate("MainWindow", "Empty", nullptr));
        typeSort->setItemText(1, QCoreApplication::translate("MainWindow", "Another (only 1 in list)", nullptr));

        add_button->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        toMain_button->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Type", nullptr));
        selectType->setItemText(0, QCoreApplication::translate("MainWindow", "Human", nullptr));
        selectType->setItemText(1, QCoreApplication::translate("MainWindow", "Car", nullptr));
        selectType->setItemText(2, QCoreApplication::translate("MainWindow", "Tree", nullptr));
        selectType->setItemText(3, QCoreApplication::translate("MainWindow", "Building", nullptr));

        label_4->setText(QCoreApplication::translate("MainWindow", "X Point", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Y Point", nullptr));
        ifEmpty_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
