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
    //! UI
    Ui::MainWindow *ui;

    //! fenêtre de détails
    DetailWindow* detailsWindow;

    //! nom du fichier d'input
    QString inputFile;

    //! nom du dossier de sortie
    QString outputDir;

    //! nom du fichier de sortie
    QString outputFilename;

    //! Chemin complet de sortie
    QString outputFullPath;

    //! Extension du fichier
    QString extension;

    int beginHour = 0;
    int beginMin = 0;
    int beginSec = 0;
    int beginMilli = 0;

    //! Timestamp du début
    int beginTime = 0;

    int endHour = 0;
    int endMin = 0;
    int endSec = 0;
    int endMilli = 0;

    //! Timestamp de la fin
    int endTime = 0;

    //! Mise à jour du début depuis un select
    void updateBeginFromSelect();

    //! Mise à jour de la fin depuis un select
    void updateEndFromSelect();

    //! Mise à jour des variables d'output
    void updateOutput();

    //! Mise à jour de la commande finale
    void updateFFMPEG();

    //! Active ou désactive les actions d'output
    void enableOutput(bool s);

    //! Active ou désactive les actions de sélection de temps
    void enableTime(bool s);

    //! Active ou désactive la commande finale
    void enableFFMPEG(bool s);

private slots:

    //! Ouvre la fenêtre de sélection du fichier d'entrée
    void chooseInputFile();

    //! Ouvre la fenêtre de sélection du dossier de sortie
    void chooseOutputDirectory();

    //! Appelée lorsque le nom du fichier de sortie change
    void updateOutputFilename();

    //! Changement d'heure du début
    void updateBeginHour(int time);

    //! Changement de minute du début
    void updateBeginMin(int time);

    //! Changement de seconde du début
    void updateBeginSec(int time);

    //! Changement de milliseconde du début
    void updateBeginMilli(int time);

    //! Changement d'heure de la fin
    void updateEndHour(int time);

    //! Changement de minute de la fin
    void updateEndMin(int time);

    //! Changement de seconde de la fin
    void updateEndSec(int time);

    //! Changement de milliseconde de la fin
    void updateEndMilli(int time);

    //! Appelée lorsque le slider du début change
    void updateBeginFromSlider(int value);

    //! Appelée lorsque le slider de la fin change
    void updateEndFromSlider(int value);

    //! Affiche la fenêtre des propriétés
    void showProperties();
};


#endif // MAINWINDOW_H
