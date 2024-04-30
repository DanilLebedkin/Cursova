#include "signselection.h"
#include "ui_signselection.h"

signselection::signselection(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::signselection)
{
    ui->setupUi(this);
    this->setWindowTitle("Sign selection");
}

signselection::~signselection()
{
    delete ui;
}

void signselection::on_crossBtn_clicked()
{
    HumanPlayer human('1');
    AiPlayer ai('1');
    human.setSign('X');
    ai.setSign('0');
    playingField*playField = new playingField;
    playField->setHumanPlayer(human);
    playField->setAiPlayer(ai);
    playField->show();
    this->close();
}

void signselection::on_nullBtn_clicked()
{
    HumanPlayer human('1');
    AiPlayer ai('1');
    human.setSign('0');
    ai.setSign('X');
    playingField*playField = new playingField;
    playField->setHumanPlayer(human);
    playField->setAiPlayer(ai);
    playField->show();
    this->close();
}

