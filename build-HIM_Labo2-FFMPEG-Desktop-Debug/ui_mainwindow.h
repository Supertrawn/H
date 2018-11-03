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
#include <QtWidgets/QToolBar>
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
    QLineEdit *outputEdit;
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
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(536, 457);
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
        inputFileEdit->setGeometry(QRect(10, 40, 291, 31));
        propertiesBt = new QPushButton(centralWidget);
        propertiesBt->setObjectName(QStringLiteral("propertiesBt"));
        propertiesBt->setGeometry(QRect(410, 40, 111, 31));
        outputLabel = new QLabel(centralWidget);
        outputLabel->setObjectName(QStringLiteral("outputLabel"));
        outputLabel->setGeometry(QRect(10, 100, 81, 16));
        outputEdit = new QLineEdit(centralWidget);
        outputEdit->setObjectName(QStringLiteral("outputEdit"));
        outputEdit->setGeometry(QRect(200, 130, 321, 31));
        selectDirBt = new QPushButton(centralWidget);
        selectDirBt->setObjectName(QStringLiteral("selectDirBt"));
        selectDirBt->setGeometry(QRect(20, 130, 171, 31));
        selectTimeLabel = new QLabel(centralWidget);
        selectTimeLabel->setObjectName(QStringLiteral("selectTimeLabel"));
        selectTimeLabel->setGeometry(QRect(10, 190, 81, 21));
        beginSlider = new QSlider(centralWidget);
        beginSlider->setObjectName(QStringLiteral("beginSlider"));
        beginSlider->setGeometry(QRect(10, 260, 241, 20));
        beginSlider->setOrientation(Qt::Horizontal);
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 80, 511, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(10, 170, 511, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        hourBeginSelect = new QSpinBox(centralWidget);
        hourBeginSelect->setObjectName(QStringLiteral("hourBeginSelect"));
        hourBeginSelect->setGeometry(QRect(10, 220, 42, 22));
        minBeginSelect = new QSpinBox(centralWidget);
        minBeginSelect->setObjectName(QStringLiteral("minBeginSelect"));
        minBeginSelect->setGeometry(QRect(60, 220, 42, 22));
        secBeginSelect = new QSpinBox(centralWidget);
        secBeginSelect->setObjectName(QStringLiteral("secBeginSelect"));
        secBeginSelect->setGeometry(QRect(110, 220, 42, 22));
        hourEndSelect = new QSpinBox(centralWidget);
        hourEndSelect->setObjectName(QStringLiteral("hourEndSelect"));
        hourEndSelect->setGeometry(QRect(330, 220, 42, 22));
        minEndSelect = new QSpinBox(centralWidget);
        minEndSelect->setObjectName(QStringLiteral("minEndSelect"));
        minEndSelect->setGeometry(QRect(380, 220, 42, 22));
        secEndSelect = new QSpinBox(centralWidget);
        secEndSelect->setObjectName(QStringLiteral("secEndSelect"));
        secEndSelect->setGeometry(QRect(430, 220, 42, 22));
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(10, 290, 511, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        resultLabel = new QLabel(centralWidget);
        resultLabel->setObjectName(QStringLiteral("resultLabel"));
        resultLabel->setGeometry(QRect(10, 320, 71, 21));
        cmdResultEdit = new QLineEdit(centralWidget);
        cmdResultEdit->setObjectName(QStringLiteral("cmdResultEdit"));
        cmdResultEdit->setGeometry(QRect(10, 350, 511, 31));
        endSlider = new QSlider(centralWidget);
        endSlider->setObjectName(QStringLiteral("endSlider"));
        endSlider->setGeometry(QRect(270, 260, 251, 20));
        endSlider->setOrientation(Qt::Horizontal);
        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(250, 250, 20, 41));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        milliBeginSelect = new QSpinBox(centralWidget);
        milliBeginSelect->setObjectName(QStringLiteral("milliBeginSelect"));
        milliBeginSelect->setGeometry(QRect(160, 220, 42, 22));
        milliEndSelect = new QSpinBox(centralWidget);
        milliEndSelect->setObjectName(QStringLiteral("milliEndSelect"));
        milliEndSelect->setGeometry(QRect(480, 220, 42, 22));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 536, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
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
        inputFileEdit->setText(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        propertiesBt->setText(QApplication::translate("MainWindow", "Properties", Q_NULLPTR));
        outputLabel->setText(QApplication::translate("MainWindow", "Output", Q_NULLPTR));
        outputEdit->setText(QApplication::translate("MainWindow", "output file", Q_NULLPTR));
        selectDirBt->setText(QApplication::translate("MainWindow", "Select directory", Q_NULLPTR));
        selectTimeLabel->setText(QApplication::translate("MainWindow", "Select Time", Q_NULLPTR));
        resultLabel->setText(QApplication::translate("MainWindow", "Result", Q_NULLPTR));
        cmdResultEdit->setText(QApplication::translate("MainWindow", "Result commande line", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
