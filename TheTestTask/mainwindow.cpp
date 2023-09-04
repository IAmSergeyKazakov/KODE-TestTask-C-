#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    setDataBase();
    todayDate = QDate::currentDate();

    if(db.open())
    {
        qDebug()<<"nice";
        setDataModel();
    }
    setLetterCombobox();
    setTypesCombobox();
}


void MainWindow::setLetterCombobox()
{
    rowCount = dataModel->rowCount();
    for (int i = 0; i < rowCount; i++)
    {
        QModelIndex index = dataModel->index(i,1, QModelIndex());
        QString indexString = ui->tableViewForData->model()->data(index).toString();
        letter = indexString[0];
        int dublicate = lettersInSort.count(letter);

        if(dublicate > 0 && !(letter >= 'A' && letter <= 'Z') || !(letter >= 'a' && letter <= 'z'))
            continue;
        else
            lettersInSort.push_back(letter);
    }
    for (int i = 0; i < lettersInSort.size(); i++)
    {
        ui->letterSort->addItem(lettersInSort[i]);
    }
}

void MainWindow::setTypesCombobox()
{
    rowCount = dataModel->rowCount();
    for (int i = 0; i < rowCount; i++)
    {

        QModelIndex index = dataModel->index(i,4, QModelIndex());
        QString indexString = ui->tableViewForData->model()->data(index).toString();
        count = 0;
        for(int j = 0; j < rowCount; j++)
        {
            QModelIndex index2 = dataModel->index(j,4, QModelIndex());
            QString indexString2 = ui->tableViewForData->model()->data(index2).toString();
            if(indexString == indexString2)
            {
                count++;
            }

            if (!(ui->typeSort->findText(indexString) == -1) && count > 1){
                count = 0;
            }

            if(ui->typeSort->findText(indexString) == -1 && count > 1)
            {
                ui->typeSort->addItem(indexString);
                count = 0;
            }

        }
    }
}


MainWindow::~MainWindow()
{
    delete ui;
    ui = nullptr;
    delete dataModel;
    dataModel = nullptr;
    delete dataView;
    dataView = nullptr;
}

void MainWindow::setDataBase()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("ObjectsDB.db");
}


void MainWindow::setDataModel()
{
    dataModel = new QSqlTableModel(this, db);
    dataModel->setTable("_objects_info");
    ui->tableViewForData->setModel(dataModel);
    ui->tableViewForData->setColumnHidden(0, true);
    dataModel->select();
}

void MainWindow::recordNewData()
{
    dataModel->database().transaction();
    if(dataModel->submitAll())
    {
       dataModel->database().commit();
    }
    else
    {
       dataModel->database().rollback();
    }
}


void MainWindow::on_toAdd_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->ifEmpty_label->setText("");
    ui->fillName->setText("");
    ui->fillX->setText("");
    ui->fillY->setText("");
}


void MainWindow::on_toMain_button_clicked()
{
    dataModel->select();
    setTypesCombobox();
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_add_button_clicked()
{
    setDataBase();
    int currentIndex = ui->selectType->currentIndex();
    QString content = ui->selectType->itemText(currentIndex);
    QString XPoint = ui->fillX->text();
    QString YPoint = ui->fillY->text();
    QString name = ui->fillName->text();
    letter = name[0];

    if(db.open() && !ui->fillName->displayText().isEmpty() && !ui->fillX->displayText().isEmpty() && !ui->fillY->displayText().isEmpty()){
       QSqlQuery query (db);
       qDebug()<<"nice";
       setDataModel();
       query.prepare("INSERT INTO _objects_info (Name, Xpoint, Ypoint, Type, TheDate) VALUES (?, ?, ?, ?, ?)");
       query.addBindValue(name.toLower());
       query.addBindValue(XPoint.replace(QString(","),QString(".")));
       query.addBindValue(YPoint.replace(QString(","),QString(".")));
       query.addBindValue(content);
       query.addBindValue(todayDate.toString("yyyy-MM-dd"));
       query.exec();
       recordNewData();

       int dublicate = lettersInSort.count(letter);
       if(dublicate < 1 && ((letter >= 'A' && letter <= 'Z') || (letter >= 'a' && letter <= 'z'))){
            lettersInSort.push_back(letter);
            ui->letterSort->addItem(letter);
       }
    }
    else{
       ui->ifEmpty_label->setText("Fill the all data, please");
    }
}


void MainWindow::on_tableViewForData_clicked(const QModelIndex &index)
{
    currentRow = index.row();
    isTableViewActivated = true;
}


void MainWindow::on_clear_button_clicked()
{
    QSqlQuery query (db);
    query.exec("DELETE FROM _objects_info");
    setDataModel();
    dataModel->select();
    recordNewData();
    ui->typeSort->clear();
    ui->letterSort->clear();
    ui->typeSort->addItem("Empty");
    ui->typeSort->addItem("Another (only 1 in list)");
    ui->letterSort->addItem("Empty");
    ui->letterSort->addItem("# (non-letter)");
}


void MainWindow::on_letterSort_activated()
{
    QString dataFromCombobox = ui->letterSort->currentText();
    setDataModel();
    dataModel->select();
    rowCount = dataModel->rowCount();

    for(int i = 0; i < rowCount; i++)
    {
       QModelIndex index = dataModel->index(i,1, QModelIndex());
       QString indexString = ui->tableViewForData->model()->data(index).toString();
       letter = indexString[0];

       if(ui->letterSort->currentIndex()==1)
       {
           if((letter >= 'A' && letter <= 'Z') || (letter >= 'a' && letter <= 'z')){
               ui->tableViewForData->setRowHidden(i, true);
           }
           dataModel->select();
       }
       else if(ui->letterSort->currentIndex()==0)
       {
           dataModel->select();
       }

       else
       {
        if(letter != dataFromCombobox)
            ui->tableViewForData->setRowHidden(i, true);
       }
    }
}


void MainWindow::on_dateSort_activated()
{
    QString todayDateString = todayDate.toString("yyyy-MM-dd");
    if(ui->dateSort->currentIndex() == 0){
       setDataModel();
    }
    else if(ui->dateSort->currentIndex() == 1)
    {
       setDataModel();
       dataModel->setFilter("TheDate = " + QString(" '") + todayDateString + QString("'"));
       dataModel->select();
    }
    else if(ui->dateSort->currentIndex() == 2)
    {

       QString previousDay = todayDate.addDays(-1).toString("yyyy-MM-dd");
       setDataModel();
       dataModel->setFilter("TheDate = " + QString(" '") + previousDay + QString("'"));
       dataModel->select();
    }
    else if(ui->dateSort->currentIndex() == 3)
    {
       int dayOfWeek = todayDate.dayOfWeek();
       qDebug()<<dayOfWeek;
       QString thisWeek = todayDate.addDays(-dayOfWeek + 1).toString("yyyy-MM-dd");
       setDataModel();
       dataModel->setFilter("TheDate BETWEEN " + QString("'") + thisWeek + QString("'") + " AND " + QString("'") + todayDateString + QString("'"));
       dataModel->select();
    }
    else if (ui->dateSort->currentIndex() == 4)
    {
       int currentMonth = todayDate.month();
       QString currentMonthString = QString::number(currentMonth);
       QString another = QString::number(currentMonth);
       if(currentMonth<10){
        currentMonthString = QString::number(currentMonth);
        QString another = QString::number(currentMonth);
        currentMonthString.replace(currentMonthString, "0");
        currentMonthString += another;
        qDebug()<<currentMonthString;
       }
       QString startOfMonth = QString::number(todayDate.year()) + QString("-") + QString::number(todayDate.month())+QString("-")+QString("01");
       startOfMonth.replace(another, currentMonthString);
       setDataModel();
       dataModel->setFilter("TheDate BETWEEN " + QString("'") + startOfMonth + QString("'") + " AND " + QString("'") + todayDateString + QString("'"));
       dataModel->select();
    }
    else if (ui->dateSort->currentIndex() == 5)
    {
       QString startOfYear = QString::number(todayDate.year()) + QString("-") + "01"+QString("-")+QString("01");
       qDebug()<<startOfYear;
       setDataModel();
       dataModel->setFilter("TheDate BETWEEN " + QString("'") + startOfYear + QString("'") + " AND " + QString("'") + todayDateString + QString("'"));
       dataModel->select();
    }
    else if (ui->dateSort->currentIndex() == 6)
    {
       QString startOfYear = QString::number(todayDate.year()) + QString("-") + "01"+QString("-")+QString("01");
       qDebug()<<startOfYear;
       setDataModel();
       dataModel->setFilter("TheDate < " + QString("'") + startOfYear + QString("'"));
       dataModel->select();
    }
}

void MainWindow::on_distanceSort_activated()
{
    setDataModel();

    if(ui->distanceSort->currentIndex() == 1){
       dataModel->setFilter("Xpoint<100 or Ypoint < 100");
    }
    else if(ui->distanceSort->currentIndex() == 2){
       dataModel->setFilter("Xpoint<1000 or Ypoint < 1000");
    }
    else if(ui->distanceSort->currentIndex() == 3){
       dataModel->setFilter("Xpoint<10000 or Ypoint < 10000");
    }
    else if(ui->distanceSort->currentIndex() == 4){
       dataModel->setFilter("Xpoint>10000 or Ypoint > 10000");
    }
    dataModel->select();
}

void MainWindow::on_typeSort_activated()
{
    QString dataFromCombobox = ui->typeSort->currentText();
    setDataModel();
    dataModel->select();
    rowCount = dataModel->rowCount();
    QModelIndex index;
    QString indexString;
    int count = 0;

    for (int i = 0; i < rowCount; i++)
    {
       index = dataModel->index(i, 4, QModelIndex());
       indexString = ui->tableViewForData->model()->data(index).toString();
       mainString = indexString;

       if (ui->typeSort->currentIndex() == 0)
       {
        dataModel->select();
       }
       else if (ui->typeSort->currentIndex() == 1)
       {
            rowCount = dataModel->rowCount();
            for (int i = 0; i < rowCount; i++)
            {

                QModelIndex index = dataModel->index(i,4, QModelIndex());
                QString indexString = ui->tableViewForData->model()->data(index).toString();
                qDebug()<<"1 "<<indexString;
                count = 0;
                for(int j = 0; j < rowCount; j++)
                {
                    QModelIndex index2 = dataModel->index(j,4, QModelIndex());
                    QString indexString2 = ui->tableViewForData->model()->data(index2).toString();
                    if(indexString == indexString2)
                    {
                        count++;
                        qDebug()<<"count++ = "<<count;
                    }

                    if(count > 1)
                    {
                        ui->tableViewForData->setRowHidden(i, true);
                        count = 0;
                    }
                }

            }
                dataModel->select();
        }

       else
       {
           for (int j = 0; j < rowCount; j++)
           {
                index = dataModel->index(j, 4, QModelIndex());
                if(indexString == mainString)
                {
                    count++;
                    if(count > 1){
                        break;
                    }
                }
           }
           if(indexString != dataFromCombobox){
                ui->tableViewForData->setRowHidden(i, true);
                dataModel->select();
           }
        }

    }
}


