#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QLabel"
#include "QPushButton"
#include "QDesktopWidget"
#include "QSlider"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    QString titleStr = "IHM_Labo2-FFMPEG";
    QString inputStr = "Input";
    QString outputStr = "Output";
    QString selectTimeStr = "Select time";
    QString endStr = "End";
    QString beginStr = "Begin";
    QString ResultStr = "Result command Line";
    QString inputBtStr = "Select File";
    QString propertiesBtStr = "Properties";
    QString outputDirBtStr = "Choose output directory";
    QString closeBtStr = "Close";

    this->setFixedSize(600,800);

    ui->setupUi(this);
    this->setWindowTitle(titleStr);


    //Les labels
    QLabel * inputLabel = new QLabel(this);
    inputLabel->setText(inputStr);

    QLabel * outputLabel = new QLabel(this);
    outputLabel->setText(outputStr);

    QLabel * timeLabel = new QLabel(this);
    timeLabel->setText(selectTimeStr);

    QLabel * beginLabel = new QLabel(this);
    beginLabel->setText(beginStr);

    QLabel * endLabel = new QLabel(this);
    endLabel->setText(endStr);

    QLabel * resultLabel = new QLabel(this);
    resultLabel->setText(ResultStr);

    //les boutons
    QPushButton *inputBt = new QPushButton(this);
    inputBt->setText(inputBtStr);

    QPushButton *propertiesBt = new QPushButton(this);
    propertiesBt->setText(propertiesBtStr);

    QPushButton *outputDirBt = new QPushButton(this);
    outputDirBt->setText(outputDirBtStr);

    QPushButton *closeBt = new QPushButton(this);
    closeBt->setText(closeBtStr);

    //les TextField
    QMessageBox * inputMsgBox = new QMessageBox();
    inputMsgBox->setButtonText(3,"Coucou");


    //Le Slider
    //QSlider *timeSlider = new QSlider(this);



}

MainWindow::~MainWindow()
{
    delete ui;
}
