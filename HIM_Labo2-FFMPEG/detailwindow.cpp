#include "detailwindow.h"

DetailWindow::DetailWindow(QWidget *parent) : QDialog(parent)
{
    ui = new Ui::DetailsWindow;
    ui->setupUi(this);
    this->setWindowTitle("Input video details");
    this->setFixedSize(240, 220);
}
