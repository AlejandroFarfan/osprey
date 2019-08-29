#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "convert/convertnumber.h"
#include "square/squareroot.h"
#include "fileprocess/filereader.h"
#include <QFileDialog>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setConstraints();
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::setConstraints()
{
    ui->lineEdit->setValidator( new QIntValidator(-2147483647, 2147483647, this) );
    QDoubleValidator *validator =new QDoubleValidator(0.0, 1000000000.0, 20, this);
    validator->setNotation(QDoubleValidator::StandardNotation);
    ui->lineEdit_3->setValidator(validator);
}

void MainWindow::on_pushButton_clicked()
{
    ConvertNumber converter;
    bool isString = ui->checkBox->isChecked();
    if(isString){
        string stringInput = ui->lineEdit->text().toStdString();
        int numbervalue = converter.stringToNumber(stringInput);
        ui->resultCvt->clear();
        ui->resultCvt->setText(QString::number(numbervalue));
    }else{
        bool ok=true;
        int number = ui->lineEdit->text().toInt(&ok,10);
        if(ok){
            string stringValue = converter.numberToString(number);
            ui->resultCvt->clear();
            ui->resultCvt->setText('"'+QString::fromStdString(stringValue)+'"');
        }else{
            ui->resultCvt->clear();
            ui->resultCvt->setText("Conversion error, insert correct number");
        }
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    SquareRoot sqrt;
    bool ok=true;
    double inputValue = ui->lineEdit_3->text().toDouble(&ok);
    if(ok){
        double result = sqrt.caculateSquareRoot(inputValue);
        ui->resultSqrt->clear();
        ui->resultSqrt->setText(QString::number(result, 'g',15));
    }else{
        ui->resultSqrt->clear();
        ui->resultSqrt->setText("Conversion error, insert correct number");
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    QString file = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                     "/",
                                                     tr("Text (*.txt)"));
    if (!file.isEmpty()) {
        if (ui->comboBox->findText(file) == -1)
            ui->comboBox->addItem(file);
        ui->comboBox->setCurrentIndex(ui->comboBox->findText(file));
    }
}

void MainWindow::on_pushButton_4_clicked()
{
    FileReader fileReader;
    QString filePath = ui->comboBox->itemText(ui->comboBox->currentIndex());
    if(!filePath.isEmpty()||!filePath.isNull())
    {
        vector<string> lineContainer = fileReader.getLinesFromFile(filePath.toStdString());
        ui->textEdit->append("File read sucessful");
        ui->textEdit->append("Lines in file: "+QString::number(lineContainer.size()));
        for(int i=0;i<lineContainer.size();i++){
            ui->textEdit->append(QString::fromStdString(lineContainer.at(i)));
        }
    }else{
        ui->textEdit->setText("The file path is not correct. Please select a text file.");
    }
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->textEdit->clear();
}
