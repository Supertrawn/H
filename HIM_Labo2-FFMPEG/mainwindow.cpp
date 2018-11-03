#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QLabel"
#include "QPushButton"
#include "QDesktopWidget"
#include "QSlider"
#include "QMessageBox"
#include "QFileDialog"
#include "qmath.h"
#include "QProcess"
#include "QDebug"
#include "QStringList"

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

    connect(ui->propertiesBt, SIGNAL(clicked(bool)), SLOT(showProperties()));

    connect(ui->chooseBt, SIGNAL(clicked()), SLOT(chooseInputFile()));
    connect(ui->selectDirBt, SIGNAL(clicked()), SLOT(chooseOutputDirectory()));

    connect(ui->hourBeginSelect, SIGNAL(valueChanged(int)), SLOT(updateBeginHour(int)));
    connect(ui->minBeginSelect, SIGNAL(valueChanged(int)), SLOT(updateBeginMin(int)));
    connect(ui->secBeginSelect, SIGNAL(valueChanged(int)), SLOT(updateBeginSec(int)));
    connect(ui->milliBeginSelect, SIGNAL(valueChanged(int)), SLOT(updateBeginMilli(int)));

    connect(ui->hourEndSelect, SIGNAL(valueChanged(int)), SLOT(updateEndHour(int)));
    connect(ui->minEndSelect, SIGNAL(valueChanged(int)), SLOT(updateEndMin(int)));
    connect(ui->secEndSelect, SIGNAL(valueChanged(int)), SLOT(updateEndSec(int)));
    connect(ui->milliEndSelect, SIGNAL(valueChanged(int)), SLOT(updateEndMilli(int)));

    connect(ui->beginSlider, SIGNAL(valueChanged(int)), SLOT(updateBeginFromSlider(int)));
    connect(ui->endSlider, SIGNAL(valueChanged(int)), SLOT(updateEndFromSlider(int)));
}

void MainWindow::showProperties() {

    detailsWindow = new DetailWindow;
    detailsWindow->show();
}

void MainWindow::chooseInputFile() {

    QString selected = QFileDialog::getOpenFileName(this, tr("Choose a file"), QDir::homePath());

    if (!selected.isEmpty()) {
        ui->inputFileEdit->setText(selected);
        inputFile = &selected;

        QProcess probe;

        QString ffmpeg = "ffmpeg -i " + *inputFile + " 2>&1 | grep Duration";
        qDebug() << ffmpeg;

        probe.start(ffmpeg);
        probe.waitForFinished();

        QString output(probe.readAllStandardOutput());
    }
}

void MainWindow::chooseOutputDirectory() {

    QString selected = QFileDialog::getExistingDirectory(this, tr("Choose output directory"), QDir::homePath());

    if (!selected.isEmpty()) {
        ui->outputEdit->setText(selected);
    }
}

void MainWindow::updateBeginHour(int time) {
    this->beginHour = time;
    this->updateBeginFromSelect();
}

void MainWindow::updateBeginMin(int time) {
    this->beginMin = time;
    this->updateBeginFromSelect();
}

void MainWindow::updateBeginSec(int time) {
    this->beginSec = time;
    this->updateBeginFromSelect();
}

void MainWindow::updateBeginMilli(int time) {
    this->beginMilli = time;
    this->updateBeginFromSelect();
}

void MainWindow::updateEndHour(int time) {
    this->endHour = time;
    this->updateEndFromSelect();
}

void MainWindow::updateEndMin(int time) {
    this->endMin = time;
    this->updateEndFromSelect();
}

void MainWindow::updateEndSec(int time) {
    this->endSec = time;
    this->updateEndFromSelect();
}

void MainWindow::updateEndMilli(int time) {
    this->endMilli = time;
    this->updateEndFromSelect();
}

void MainWindow::updateBeginFromSelect() {
    int newval = this->beginHour*(60*60*100) + this->beginMin*(60*100) + this->beginSec*100 + this->beginMilli;
    this->ui->beginSlider->setValue(newval);
}
void MainWindow::updateEndFromSelect() {
    int newval = this->endHour*(60*60*100) + this->endMin*(60*100) + this->endSec*100 + this->endMilli;
    this->ui->endSlider->setValue(newval);
}

void MainWindow::updateBeginFromSlider(int value) {

    int hours = qFloor(value / (60*60*100));
    int min   = qFloor((value / (60*100)) % 60);
    int secs  = qFloor(value / 100) % 60;
    int milli = value % 100;

    this->beginHour = hours;
    this->beginMin = min;
    this->beginSec = secs;
    this->beginMilli = milli;

    this->ui->hourBeginSelect->setValue(hours);
    this->ui->minBeginSelect->setValue(min);
    this->ui->secBeginSelect->setValue(secs);
    this->ui->milliBeginSelect->setValue(milli);
}

void MainWindow::updateEndFromSlider(int value) {

    int hours = qFloor(value / (60*60*100));
    int min   = qFloor((value / (60*100)) % 60);
    int secs  = qFloor(value / 100) % 60;
    int milli = value % 100;

    this->endHour = hours;
    this->endMin = min;
    this->endSec = secs;
    this->endMilli = milli;

    this->ui->hourEndSelect->setValue(hours);
    this->ui->minEndSelect->setValue(min);
    this->ui->secEndSelect->setValue(secs);
    this->ui->milliEndSelect->setValue(milli);
}

MainWindow::~MainWindow()
{
    delete ui;
}
