#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWindow>

#include "detailwindow.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QWindow *propertiesWindow;
    DetailWindow* detailsWindow;

    QString* inputFile;
    QString* outputDir;
    QString* outputFilename;

    int beginHour = 0;
    int beginMin = 0;
    int beginSec = 0;
    int beginMilli = 0;

    int endHour = 0;
    int endMin = 0;
    int endSec = 0;
    int endMilli = 0;

    void updateBeginFromSelect();
    void updateEndFromSelect();

private slots:

    void chooseInputFile();
    void chooseOutputDirectory();

    void updateBeginHour(int time);
    void updateBeginMin(int time);
    void updateBeginSec(int time);
    void updateBeginMilli(int time);

    void updateEndHour(int time);
    void updateEndMin(int time);
    void updateEndSec(int time);
    void updateEndMilli(int time);

    void updateBeginFromSlider(int value);
    void updateEndFromSlider(int value);

    void showProperties();
};


#endif // MAINWINDOW_H
