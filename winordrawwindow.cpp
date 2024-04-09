#include "winordrawwindow.h"
#include "ui_winordrawwindow.h"

winOrDrawWindow::winOrDrawWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::winOrDrawWindow)
{
    ui->setupUi(this);
}

winOrDrawWindow::~winOrDrawWindow()
{
    delete ui;
}

void winOrDrawWindow::setLabelText(QString message)
{
    ui->labelForResultOfGame->setText(message);
}

void winOrDrawWindow::on_returnToMainMenu_clicked()
{

}

