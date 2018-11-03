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

private:
    Ui::DetailsWindow *ui;

signals:

public slots:
};

#endif
