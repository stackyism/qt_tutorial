#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton->setText("Close");
    ui->pushButton_2->setText("Cut");
    ui->pushButton_3->setText("Paste");
}

MainWindow::~MainWindow()
{
    delete ui;
}
