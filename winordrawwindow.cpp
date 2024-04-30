#include "winordrawwindow.h"
#include "ui_winordrawwindow.h"
#include "game.h"
winOrDrawWindow::winOrDrawWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::winOrDrawWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Game result ");
}

winOrDrawWindow::~winOrDrawWindow()
{
    delete ui;
}

void winOrDrawWindow::setLabelText(QString message)
{
    ui->labelForResultOfGame->setText(message);
}


void winOrDrawWindow::on_closeAllBtn_clicked()
{
       this->close();
}

