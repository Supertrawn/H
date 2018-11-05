#ifndef DETAILWINDOW_H
#define DETAILWINDOW_H

#include <QWidget>
#include <QDialog>
#include "ui_details.h"

class DetailWindow : public QDialog
{
    Q_OBJECT
public:
    explicit DetailWindow(QWidget *parent = nullptr);
    Ui::DetailsWindow *ui;

private:

signals:

public slots:
};

#endif
