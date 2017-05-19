#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    
    //QSqlTableModel model;
    //collect projects from given folder
    //collect times
    //find similar items
    //show the projects table
    //show times table
}

MainWindow::~MainWindow()
{
    delete ui;
}
