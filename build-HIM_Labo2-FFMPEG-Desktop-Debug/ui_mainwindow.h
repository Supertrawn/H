/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *inputLabel;
    QPushButton *chooseBt;
    QLineEdit *inputFileEdit;
    QPushButton *propertiesBt;
    QLabel *outputLabel;
    QPushButton *selectDirBt;
    QLabel *selectTimeLabel;
    QSlider *beginSlider;
    QFrame *line;
    QFrame *line_2;
    QSpinBox *hourBeginSelect;
    QSpinBox *minBeginSelect;
    QSpinBox *secBeginSelect;
    QSpinBox *hourEndSelect;
    QSpinBox *minEndSelect;
    QSpinBox *secEndSelect;
    QFrame *line_3;
    QLabel *resultLabel;
    QLineEdit *cmdResultEdit;
    QSlider *endSlider;
    QFrame *line_4;
    QSpinBox *milliBeginSelect;
    QSpinBox *milliEndSelect;
    QLineEdit *outputEdit;
    QLabel *selectTimeLabel_2;
    QLabel *outputFullName;
    QLabel *errorLabel;
    QFrame *line_5;
    QLabel *selectTimeLabel_3;
    QLabel *selectTimeLabel_4;
    QLabel *selectTimeLabel_5;
    QLabel *selectTimeLabel_6;
    QLabel *selectTimeLabel_7;
    QLabel *selectTimeLabel_8;
    QLabel *selectTimeLabel_9;
    QLabel *selectTimeLabel_10;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(536, 561);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        inputLabel = new QLabel(centralWidget);
        inputLabel->setObjectName(QStringLiteral("inputLabel"));
        inputLabel->setGeometry(QRect(10, 10, 81, 21));
        chooseBt = new QPushButton(centralWidget);
        chooseBt->setObjectName(QStringLiteral("chooseBt"));
        chooseBt->setGeometry(QRect(310, 40, 91, 31));
        inputFileEdit = new QLineEdit(centralWidget);
        inputFileEdit->setObjectName(QStringLiteral("inputFileEdit"));
        inputFileEdit->setEnabled(false);
        inputFileEdit->setGeometry(QRect(10, 40, 291, 31));
        propertiesBt = new QPushButton(centralWidget);
        propertiesBt->setObjectName(QStringLiteral("propertiesBt"));
        propertiesBt->setEnabled(false);
        propertiesBt->setGeometry(QRect(410, 40, 111, 31));
        outputLabel = new QLabel(centralWidget);
        outputLabel->setObjectName(QStringLiteral("outputLabel"));
        outputLabel->setGeometry(QRect(10, 100, 81, 16));
        selectDirBt = new QPushButton(centralWidget);
        selectDirBt->setObjectName(QStringLiteral("selectDirBt"));
        selectDirBt->setEnabled(false);
        selectDirBt->setGeometry(QRect(10, 130, 151, 31));
        selectTimeLabel = new QLabel(centralWidget);
        selectTimeLabel->setObjectName(QStringLiteral("selectTimeLabel"));
        selectTimeLabel->setGeometry(QRect(10, 220, 121, 21));
        beginSlider = new QSlider(centralWidget);
        beginSlider->setObjectName(QStringLiteral("beginSlider"));
        beginSlider->setEnabled(false);
        beginSlider->setGeometry(QRect(10, 320, 241, 20));
        beginSlider->setOrientation(Qt::Horizontal);
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 80, 511, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(10, 200, 511, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        hourBeginSelect = new QSpinBox(centralWidget);
        hourBeginSelect->setObjectName(QStringLiteral("hourBeginSelect"));
        hourBeginSelect->setEnabled(false);
        hourBeginSelect->setGeometry(QRect(10, 280, 42, 22));
        minBeginSelect = new QSpinBox(centralWidget);
        minBeginSelect->setObjectName(QStringLiteral("minBeginSelect"));
        minBeginSelect->setEnabled(false);
        minBeginSelect->setGeometry(QRect(60, 280, 42, 22));
        secBeginSelect = new QSpinBox(centralWidget);
        secBeginSelect->setObjectName(QStringLiteral("secBeginSelect"));
        secBeginSelect->setEnabled(false);
        secBeginSelect->setGeometry(QRect(110, 280, 42, 22));
        hourEndSelect = new QSpinBox(centralWidget);
        hourEndSelect->setObjectName(QStringLiteral("hourEndSelect"));
        hourEndSelect->setEnabled(false);
        hourEndSelect->setGeometry(QRect(330, 280, 42, 22));
        minEndSelect = new QSpinBox(centralWidget);
        minEndSelect->setObjectName(QStringLiteral("minEndSelect"));
        minEndSelect->setEnabled(false);
        minEndSelect->setGeometry(QRect(380, 280, 42, 22));
        secEndSelect = new QSpinBox(centralWidget);
        secEndSelect->setObjectName(QStringLiteral("secEndSelect"));
        secEndSelect->setEnabled(false);
        secEndSelect->setGeometry(QRect(430, 280, 42, 22));
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(10, 350, 511, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        resultLabel = new QLabel(centralWidget);
        resultLabel->setObjectName(QStringLiteral("resultLabel"));
        resultLabel->setGeometry(QRect(10, 380, 71, 21));
        cmdResultEdit = new QLineEdit(centralWidget);
        cmdResultEdit->setObjectName(QStringLiteral("cmdResultEdit"));
        cmdResultEdit->setEnabled(false);
        cmdResultEdit->setGeometry(QRect(10, 410, 511, 31));
        cmdResultEdit->setReadOnly(true);
        endSlider = new QSlider(centralWidget);
        endSlider->setObjectName(QStringLiteral("endSlider"));
        endSlider->setEnabled(false);
        endSlider->setGeometry(QRect(270, 320, 251, 20));
        endSlider->setOrientation(Qt::Horizontal);
        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(250, 310, 20, 41));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        milliBeginSelect = new QSpinBox(centralWidget);
        milliBeginSelect->setObjectName(QStringLiteral("milliBeginSelect"));
        milliBeginSelect->setEnabled(false);
        milliBeginSelect->setGeometry(QRect(160, 280, 42, 22));
        milliEndSelect = new QSpinBox(centralWidget);
        milliEndSelect->setObjectName(QStringLiteral("milliEndSelect"));
        milliEndSelect->setEnabled(false);
        milliEndSelect->setGeometry(QRect(480, 280, 42, 22));
        outputEdit = new QLineEdit(centralWidget);
        outputEdit->setObjectName(QStringLiteral("outputEdit"));
        outputEdit->setEnabled(false);
        outputEdit->setGeometry(QRect(170, 130, 351, 31));
        selectTimeLabel_2 = new QLabel(centralWidget);
        selectTimeLabel_2->setObjectName(QStringLiteral("selectTimeLabel_2"));
        selectTimeLabel_2->setGeometry(QRect(410, 220, 111, 21));
        outputFullName = new QLabel(centralWidget);
        outputFullName->setObjectName(QStringLiteral("outputFullName"));
        outputFullName->setGeometry(QRect(10, 180, 511, 16));
        errorLabel = new QLabel(centralWidget);
        errorLabel->setObjectName(QStringLiteral("errorLabel"));
        errorLabel->setGeometry(QRect(10, 470, 511, 17));
        line_5 = new QFrame(centralWidget);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(10, 450, 511, 16));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        selectTimeLabel_3 = new QLabel(centralWidget);
        selectTimeLabel_3->setObjectName(QStringLiteral("selectTimeLabel_3"));
        selectTimeLabel_3->setGeometry(QRect(10, 250, 41, 21));
        selectTimeLabel_4 = new QLabel(centralWidget);
        selectTimeLabel_4->setObjectName(QStringLiteral("selectTimeLabel_4"));
        selectTimeLabel_4->setGeometry(QRect(60, 250, 41, 21));
        selectTimeLabel_5 = new QLabel(centralWidget);
        selectTimeLabel_5->setObjectName(QStringLiteral("selectTimeLabel_5"));
        selectTimeLabel_5->setGeometry(QRect(110, 250, 41, 21));
        selectTimeLabel_6 = new QLabel(centralWidget);
        selectTimeLabel_6->setObjectName(QStringLiteral("selectTimeLabel_6"));
        selectTimeLabel_6->setGeometry(QRect(160, 250, 41, 21));
        selectTimeLabel_7 = new QLabel(centralWidget);
        selectTimeLabel_7->setObjectName(QStringLiteral("selectTimeLabel_7"));
        selectTimeLabel_7->setGeometry(QRect(380, 250, 41, 21));
        selectTimeLabel_8 = new QLabel(centralWidget);
        selectTimeLabel_8->setObjectName(QStringLiteral("selectTimeLabel_8"));
        selectTimeLabel_8->setGeometry(QRect(330, 250, 41, 21));
        selectTimeLabel_9 = new QLabel(centralWidget);
        selectTimeLabel_9->setObjectName(QStringLiteral("selectTimeLabel_9"));
        selectTimeLabel_9->setGeometry(QRect(430, 250, 41, 21));
        selectTimeLabel_10 = new QLabel(centralWidget);
        selectTimeLabel_10->setObjectName(QStringLiteral("selectTimeLabel_10"));
        selectTimeLabel_10->setGeometry(QRect(480, 250, 41, 21));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 536, 22));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        inputLabel->setText(QApplication::translate("MainWindow", "Input", Q_NULLPTR));
        chooseBt->setText(QApplication::translate("MainWindow", "Choose", Q_NULLPTR));
        inputFileEdit->setText(QApplication::translate("MainWindow", "Input filename", Q_NULLPTR));
        propertiesBt->setText(QApplication::translate("MainWindow", "Properties", Q_NULLPTR));
        outputLabel->setText(QApplication::translate("MainWindow", "Output", Q_NULLPTR));
        selectDirBt->setText(QApplication::translate("MainWindow", "Select directory", Q_NULLPTR));
        selectTimeLabel->setText(QApplication::translate("MainWindow", "Select begin time", Q_NULLPTR));
        resultLabel->setText(QApplication::translate("MainWindow", "Result", Q_NULLPTR));
        cmdResultEdit->setText(QApplication::translate("MainWindow", "Result commande line", Q_NULLPTR));
        outputEdit->setText(QString());
        outputEdit->setPlaceholderText(QApplication::translate("MainWindow", "Enter output filename without extension", Q_NULLPTR));
        selectTimeLabel_2->setText(QApplication::translate("MainWindow", "Select end time", Q_NULLPTR));
        outputFullName->setText(QApplication::translate("MainWindow", "Full name: ", Q_NULLPTR));
        errorLabel->setText(QString());
        selectTimeLabel_3->setText(QApplication::translate("MainWindow", "Hour", Q_NULLPTR));
        selectTimeLabel_4->setText(QApplication::translate("MainWindow", "Min", Q_NULLPTR));
        selectTimeLabel_5->setText(QApplication::translate("MainWindow", "Sec", Q_NULLPTR));
        selectTimeLabel_6->setText(QApplication::translate("MainWindow", "Milli", Q_NULLPTR));
        selectTimeLabel_7->setText(QApplication::translate("MainWindow", "Min", Q_NULLPTR));
        selectTimeLabel_8->setText(QApplication::translate("MainWindow", "Hour", Q_NULLPTR));
        selectTimeLabel_9->setText(QApplication::translate("MainWindow", "Sec", Q_NULLPTR));
        selectTimeLabel_10->setText(QApplication::translate("MainWindow", "Milli", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
