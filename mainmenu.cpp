#include "mainmenu.h"
#include "./ui_mainmenu.h"
MainMenu::MainMenu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainMenu)
{
    ui->setupUi(this);
}

MainMenu::~MainMenu()
{
    delete ui;
}

void MainMenu::on_newGameBtn_clicked()
{
    signselection selector;
    selector.exec();
}
