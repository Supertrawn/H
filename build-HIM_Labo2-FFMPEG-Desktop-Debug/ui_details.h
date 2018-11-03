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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>

QT_BEGIN_NAMESPACE

class Ui_DetailsWindow
{
public:
    QDialogButtonBox *buttonBox;
    QListView *detailList;

    void setupUi(QDialog *DetailsWindow)
    {
        if (DetailsWindow->objectName().isEmpty())
            DetailsWindow->setObjectName(QStringLiteral("DetailsWindow"));
        DetailsWindow->resize(240, 320);
        buttonBox = new QDialogButtonBox(DetailsWindow);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 270, 221, 41));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        detailList = new QListView(DetailsWindow);
        detailList->setObjectName(QStringLiteral("detailList"));
        detailList->setGeometry(QRect(10, 10, 221, 251));

        retranslateUi(DetailsWindow);
        QObject::connect(buttonBox, SIGNAL(accepted()), DetailsWindow, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DetailsWindow, SLOT(reject()));

        QMetaObject::connectSlotsByName(DetailsWindow);
    } // setupUi

    void retranslateUi(QDialog *DetailsWindow)
    {
        DetailsWindow->setWindowTitle(QApplication::translate("DetailsWindow", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DetailsWindow: public Ui_DetailsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETAILS_H
