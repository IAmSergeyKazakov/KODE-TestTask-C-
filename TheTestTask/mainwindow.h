#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDate>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlTableModel>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlQueryModel>
#include <QtSql/QSqlQuery>
#include <QTableView>
#include <string>
#include <algorithm>
#include <vector>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_toAdd_button_clicked();

    void on_add_button_clicked();

    void on_toMain_button_clicked();

    void on_tableViewForData_clicked(const QModelIndex &index);

    void on_clear_button_clicked();

    void on_letterSort_activated();

    void on_distanceSort_activated();

    void on_dateSort_activated();

    void on_typeSort_activated();


private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
    QSqlTableModel* dataModel;
    QTableView const *dataView;
    void setDataBase();
    void setDataModel();
    void setTypesCombobox();
    QDate todayDate;
    QDate anotherDate;
    void recordNewData();
    bool isTableViewActivated = false;
    int currentRow;
    int rowCount;
    void setLetterCombobox();
    QVector<QChar>lettersInSort;
    QChar letter;
    QString type;
    QString mainString;
    int count = 0;

};
#endif // MAINWINDOW_H
