/********************************************************************************
** Form generated from reading UI file 'details.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETAILS_H
#define UI_DETAILS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_DetailsWindow
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QFrame *line;
    QLabel *format;
    QLabel *milliseconds;
    QLabel *seconds;
    QLabel *minutes;
    QLabel *hours;

    void setupUi(QDialog *DetailsWindow)
    {
        if (DetailsWindow->objectName().isEmpty())
            DetailsWindow->setObjectName(QStringLiteral("DetailsWindow"));
        DetailsWindow->resize(240, 227);
        buttonBox = new QDialogButtonBox(DetailsWindow);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 180, 221, 41));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        label = new QLabel(DetailsWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 67, 17));
        label->setTextFormat(Qt::AutoText);
        label_2 = new QLabel(DetailsWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 40, 67, 17));
        label_2->setTextFormat(Qt::AutoText);
        label_3 = new QLabel(DetailsWindow);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 60, 67, 17));
        label_3->setTextFormat(Qt::AutoText);
        label_4 = new QLabel(DetailsWindow);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 80, 67, 17));
        label_4->setTextFormat(Qt::AutoText);
        label_5 = new QLabel(DetailsWindow);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 100, 91, 17));
        label_5->setTextFormat(Qt::AutoText);
        label_6 = new QLabel(DetailsWindow);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 150, 67, 17));
        label_6->setTextFormat(Qt::AutoText);
        line = new QFrame(DetailsWindow);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(20, 130, 201, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        format = new QLabel(DetailsWindow);
        format->setObjectName(QStringLiteral("format"));
        format->setGeometry(QRect(170, 150, 67, 17));
        format->setTextFormat(Qt::AutoText);
        milliseconds = new QLabel(DetailsWindow);
        milliseconds->setObjectName(QStringLiteral("milliseconds"));
        milliseconds->setGeometry(QRect(170, 100, 67, 17));
        milliseconds->setTextFormat(Qt::AutoText);
        seconds = new QLabel(DetailsWindow);
        seconds->setObjectName(QStringLiteral("seconds"));
        seconds->setGeometry(QRect(170, 80, 67, 17));
        seconds->setTextFormat(Qt::AutoText);
        minutes = new QLabel(DetailsWindow);
        minutes->setObjectName(QStringLiteral("minutes"));
        minutes->setGeometry(QRect(170, 60, 67, 17));
        minutes->setTextFormat(Qt::AutoText);
        hours = new QLabel(DetailsWindow);
        hours->setObjectName(QStringLiteral("hours"));
        hours->setGeometry(QRect(170, 40, 67, 17));
        hours->setTextFormat(Qt::AutoText);

        retranslateUi(DetailsWindow);
        QObject::connect(buttonBox, SIGNAL(accepted()), DetailsWindow, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DetailsWindow, SLOT(reject()));

        QMetaObject::connectSlotsByName(DetailsWindow);
    } // setupUi

    void retranslateUi(QDialog *DetailsWindow)
    {
        DetailsWindow->setWindowTitle(QApplication::translate("DetailsWindow", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("DetailsWindow", "Duration", Q_NULLPTR));
        label_2->setText(QApplication::translate("DetailsWindow", "Hours", Q_NULLPTR));
        label_3->setText(QApplication::translate("DetailsWindow", "Minutes", Q_NULLPTR));
        label_4->setText(QApplication::translate("DetailsWindow", "Seconds", Q_NULLPTR));
        label_5->setText(QApplication::translate("DetailsWindow", "Milliseconds", Q_NULLPTR));
        label_6->setText(QApplication::translate("DetailsWindow", "Format", Q_NULLPTR));
        format->setText(QString());
        milliseconds->setText(QString());
        seconds->setText(QString());
        minutes->setText(QString());
        hours->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DetailsWindow: public Ui_DetailsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETAILS_H
