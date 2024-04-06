#include "signselection.h"
#include "ui_signselection.h"

signselection::signselection(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::signselection)
{
    ui->setupUi(this);
}

signselection::~signselection()
{
    delete ui;
}

void signselection::on_crossBtn_clicked()
{
    HumanPlayer human('1');
    AiPlayer ai('1');
    human.setSign('+');
    ai.setSign('0');
    playingField playField;
    playField.setHumanPlayer(human);
    playField.setAiPlayer(ai);
    playField.exec();
}


void signselection::on_nullBtn_clicked()
{
    HumanPlayer human('1');
    AiPlayer ai('1');
    human.setSign('0');
    ai.setSign('+');
    playingField playField;
    playField.setHumanPlayer(human);
    playField.setAiPlayer(ai);
    playField.exec();
}

