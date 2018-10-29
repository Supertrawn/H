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

    this->setFixedSize(600,700);

    //pour appeler les bouton dans mainwindow.ui
    //ui.posebt->


    ui->setupUi(this);
    this->setWindowTitle(titleStr);


}



MainWindow::~MainWindow()
{
    delete ui;
}
