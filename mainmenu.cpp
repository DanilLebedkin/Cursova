#include "mainmenu.h"
#include "./ui_mainmenu.h"
MainMenu::MainMenu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainMenu)
{
    ui->setupUi(this);
    this->setWindowTitle("Tic Tac Toe");
}

MainMenu::~MainMenu()
{
    delete ui;
}

void MainMenu::on_newGameBtn_clicked()
{
    signselection selector;
    selector.exec();
    this->close();
}


void MainMenu::on_ExitBtn_clicked()
{
    MainMenu::close();
}

