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
#include "QFileInfo"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow), detailsWindow(new DetailWindow)
{
    this->setFixedSize(530,510);

    ui->setupUi(this);
    this->setWindowTitle("IHM - FFMPEG cut video");
    this->ui->errorLabel->setStyleSheet("QLabel { color: red; }");

    // Connections des éléments d'interface
    connect(ui->propertiesBt, SIGNAL(clicked(bool)), SLOT(showProperties()));

    connect(ui->chooseBt, SIGNAL(clicked()), SLOT(chooseInputFile()));
    connect(ui->selectDirBt, SIGNAL(clicked()), SLOT(chooseOutputDirectory()));
    connect(ui->outputEdit, SIGNAL(textChanged(QString)), SLOT(updateOutputFilename()));

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
    detailsWindow->show();
}

void MainWindow::chooseInputFile() {

    QString selected = QFileDialog::getOpenFileName(this, tr("Choose a file"), QDir::homePath(), tr("mp4 (*.mp4);; MKV (*.mkv);; MOV (*.mov)"));

    // Si un fichier a été choisi
    if (!selected.isEmpty()) {
        ui->inputFileEdit->setText(selected);
        inputFile = selected;

        // Lecture de ffprobe
        QProcess probe;
        probe.start("ffprobe -i " + inputFile);
        probe.waitForFinished(-1);

        // On n'arrive qu'à lire le flux d'erreur, on fait donc un parsing maison
        QString error(probe.readAllStandardError());
        int durationPosition = error.indexOf("Duration", Qt::CaseInsensitive);
        QString duration = error.mid(durationPosition + 10, 11);

        // Mise à jour de la durée
        int hour = duration.mid(0, 2).toInt();
        int min = duration.mid(3, 2).toInt();
        int sec = duration.mid(6, 2).toInt();
        int milli = duration.mid(9, 2).toInt();

        this->endHour = hour;
        this->endMin = min;
        this->endSec = sec;
        this->endMilli = milli;

        // Détermination de l'extension
        this->extension = this->inputFile.split(".").last();

        // Mise à jour des maxima des sliders et selects
        int newval = this->endHour*(60*60*100) + this->endMin*(60*100) + this->endSec*100 + this->endMilli;
        this->ui->endSlider->setMaximum(newval);
        this->ui->beginSlider->setMaximum(newval);

        this->ui->hourBeginSelect->setMaximum(hour);
        this->ui->minBeginSelect->setMaximum(min);
        this->ui->secBeginSelect->setMaximum(sec);
        this->ui->milliBeginSelect->setMaximum(milli);

        this->ui->hourEndSelect->setMaximum(hour);
        this->ui->minEndSelect->setMaximum(min);
        this->ui->secEndSelect->setMaximum(sec);
        this->ui->milliEndSelect->setMaximum(milli);


        // Mise à jour des propriétés
        this->detailsWindow->ui->hours->setText(QString::number(hour));
        this->detailsWindow->ui->minutes->setText(QString::number(min));
        this->detailsWindow->ui->seconds->setText(QString::number(sec));
        this->detailsWindow->ui->milliseconds->setText(QString::number(milli));
        this->detailsWindow->ui->format->setText(this->extension);

        // On fournit un nom de fichier de sortie simple
        this->outputFilename = this->inputFile.split("/").last().split(".").first() + " - copie." + this->extension;
        this->ui->outputEdit->setText(this->outputFilename);

        this->updateEndFromSelect();
        this->enableOutput(true);
    }
}

void MainWindow::enableOutput(bool s) {

    if(s) {
        this->ui->outputEdit->setEnabled(s);
        this->ui->selectDirBt->setEnabled(s);
        this->ui->propertiesBt->setEnabled(s);
    }

    else {
        this->ui->outputEdit->setDisabled(!s);
        this->ui->selectDirBt->setDisabled(!s);
        this->ui->propertiesBt->setDisabled(!s);
    }

    if(!s) {
        this->enableTime(false);
    }
}

void MainWindow::enableTime(bool s) {

    if(!s) {
        this->ui->hourBeginSelect->setDisabled(!s);
        this->ui->minBeginSelect->setDisabled(!s);
        this->ui->secBeginSelect->setDisabled(!s);
        this->ui->milliBeginSelect->setDisabled(!s);
        this->ui->beginSlider->setDisabled(!s);

        this->ui->hourEndSelect->setDisabled(!s);
        this->ui->minEndSelect->setDisabled(!s);
        this->ui->secEndSelect->setDisabled(!s);
        this->ui->milliEndSelect->setDisabled(!s);
        this->ui->endSlider->setDisabled(!s);
        this->enableFFMPEG(false);
    }

    else {
        this->ui->hourBeginSelect->setEnabled(s);
        this->ui->minBeginSelect->setEnabled(s);
        this->ui->secBeginSelect->setEnabled(s);
        this->ui->milliBeginSelect->setEnabled(s);
        this->ui->beginSlider->setEnabled(s);

        this->ui->hourEndSelect->setEnabled(s);
        this->ui->minEndSelect->setEnabled(s);
        this->ui->secEndSelect->setEnabled(s);
        this->ui->milliEndSelect->setEnabled(s);
        this->ui->endSlider->setEnabled(s);

        this->updateBeginFromSelect();
        this->updateEndFromSelect();
        this->enableFFMPEG(true);
    }
}

void MainWindow::updateFFMPEG() {

    this->ui->cmdResultEdit->setText("ffmpeg -i \"" + this->inputFile + "\"" +
            " -ss " + QString::number(this->beginHour) + ":" + QString::number(this->beginMin) +
            ":" + QString::number(this->beginSec) + "." + QString::number(this->beginMilli) +
            " -t " + QString::number(this->endHour) + ":" + QString::number(this->endMin) +
            ":" + QString::number(this->endSec) + "." + QString::number(this->endMilli) +
            " -async 1 " + "\"" + this->outputFullPath + "\"");
}

void MainWindow::enableFFMPEG(bool s) {
    if(!s) {
        this->ui->cmdResultEdit->setText("");
        this->ui->cmdResultEdit->setEnabled(false);
        this->ui->cmdResultEdit->setDisabled(true);
    }
    else {
        this->ui->cmdResultEdit->setDisabled(false);
        this->ui->cmdResultEdit->setEnabled(true);
        this->updateFFMPEG();
    }
}

void MainWindow::chooseOutputDirectory() {

    QString selected = QFileDialog::getExistingDirectory(this, tr("Choose output directory"), QDir::homePath());

    // Si un dossier de sortie a été choisi
    if (!selected.isEmpty()) {
        this->outputDir = selected;
        this->updateOutput();
    }
}

void MainWindow::updateOutputFilename() {
    this->outputFilename = this->ui->outputEdit->text();
    this->updateOutput();
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

void MainWindow::updateOutput() {

    // Un dossier de sortie et un nom de fichier de sortie sont définis
    if(this->outputFilename.length() > 0 && this->outputDir.length() > 0) {

        // Ajout de l'extension si non présente
        if(this->outputFilename.split(".").last() != this->extension)
            this->outputFilename += "." + this->extension;

        this->outputFullPath = this->outputDir + "/" + this->outputFilename;
        this->ui->outputFullName->setText("Full name: " + this->outputFullPath);

        // Check des erreurs
        bool fileExists = QFileInfo::exists(this->outputFullPath) && QFileInfo(this->outputFullPath).isFile();
        bool slash = this->outputFilename.contains("/");

        this->enableTime(!fileExists && !slash);

        if(fileExists) {
            this->ui->errorLabel->setText("A file with this name already exist!");
        }
        else if(slash)
            this->ui->errorLabel->setText("Dont enter a path as output file name!");
        else {
            this->ui->errorLabel->setText("");
            this->updateFFMPEG();
        }
    }
}

void MainWindow::updateBeginFromSelect() {
    this->beginTime = this->beginHour*(60*60*100) + this->beginMin*(60*100) + this->beginSec*100 + this->beginMilli;
    this->ui->beginSlider->setValue(this->beginTime);

    if(this->endTime < this->beginTime) {

        this->endTime = this->beginTime;
        this->endHour = this->beginHour;
        this->endMin = this->beginMin;
        this->endSec = this->beginSec;
        this->endMilli = this->beginMilli;

        this->updateEndFromSelect();
        this->updateEndFromSlider(this->beginTime);
        this->updateFFMPEG();
    }
}
void MainWindow::updateEndFromSelect() {
    this->endTime = this->endHour*(60*60*100) + this->endMin*(60*100) + this->endSec*100 + this->endMilli;
    this->ui->endSlider->setValue(this->endTime);

    if(this->beginTime > this->endTime) {

        this->beginTime = this->endTime;
        this->beginHour = this->endHour;
        this->beginMin = this->endMin;
        this->beginSec = this->endSec;
        this->beginMilli = this->endMilli;

        this->updateBeginFromSelect();
        this->updateBeginFromSlider(this->endTime);
        this->updateFFMPEG();
    }
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

    this->updateFFMPEG();
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

    this->updateFFMPEG();
}

MainWindow::~MainWindow()
{
    delete ui;
    detailsWindow->close();
    delete detailsWindow;
}
