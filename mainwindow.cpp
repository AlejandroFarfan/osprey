#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "convert/convertnumber.h"
#include "square/squareroot.h"
#include "fileprocess/filereader.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ConvertNumber converter;
    qDebug()<<QString::fromStdString(converter.numberToString(2));
    qDebug()<<converter.stringToNumber("43");
    SquareRoot square;
    qDebug()<<square.caculateSquareRoot(8.0);
    FileReader file;
    vector<string> stringContainer = file.getLinesFromFile("C:\\Users\\alejo\\Documents\\container\\osprey\\task.txt");
    for(int i=0;i<stringContainer.size();i++){
        qDebug()<<QString::fromStdString(stringContainer[i]);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

}
