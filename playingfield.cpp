#include "playingfield.h"
#include "ui_playingfield.h"

playingField::playingField(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::playingField)
    ,humanPlayer('1')
    ,aiPlayer('1')
{
    ui->setupUi(this);
    fillingVectorOfButtons();
    Game::fillingBoard();

}

playingField::~playingField()
{
    delete ui;
}

void playingField::setHumanPlayer(HumanPlayer _humanPlayer)
{
    humanPlayer=_humanPlayer;
}

void playingField::setAiPlayer(AiPlayer _aiPlayer)
{
    aiPlayer=_aiPlayer;
}

void playingField::fillingVectorOfButtons()
{

    buttons.push_back(ui->field1_1);
    buttons.push_back(ui->field1_2);
    buttons.push_back(ui->field1_3);
    buttons.push_back(ui->field2_1);
    buttons.push_back(ui->field2_2);
    buttons.push_back(ui->field2_3);
    buttons.push_back(ui->field3_1);
    buttons.push_back(ui->field3_2);
    buttons.push_back(ui->field3_3);
}



QVector<QPushButton *>& playingField::getButtons()
{
    return buttons;
}

void playingField::on_field1_1_clicked()
{
    winOrDrawWindow winDrawWind;
    winDrawWind.setModal(true);
    QChar sign=humanPlayer.getSign();
    humanPlayer.makeTurn(1,1);
    if(Game::checkWin(&humanPlayer))
    {
        winDrawWind.setLabelText("You win!");
    }
    ui->field1_1->setText(sign);
    aiPlayer.aiTurn();
    if(Game::checkWin(&aiPlayer))
    {
        winDrawWind.setLabelText("AI win!");
    }
    if(Game::checkDraw(&humanPlayer,&aiPlayer))
    {
        winDrawWind.setLabelText("Draw!");
    }
}

void playingField::on_field1_2_clicked()
{
    winOrDrawWindow winDrawWind;
    winDrawWind.setModal(true);
    QChar sign=humanPlayer.getSign();
    humanPlayer.makeTurn(1,2);
    if(Game::checkWin(&humanPlayer))
    {
        winDrawWind.setLabelText("You win!");
    }
    ui->field1_2->setText(sign);
    aiPlayer.aiTurn();
    if(Game::checkWin(&aiPlayer))
    {
        winDrawWind.setLabelText("AI win!");
    }
    if(Game::checkDraw(&humanPlayer,&aiPlayer))
    {
        winDrawWind.setLabelText("Draw!");
    }
}


void playingField::on_field1_3_clicked()
{
    winOrDrawWindow winDrawWind;
    winDrawWind.setModal(true);
    QChar sign=humanPlayer.getSign();
    humanPlayer.makeTurn(1,3);
    if(Game::checkWin(&humanPlayer))
    {
        winDrawWind.setLabelText("You win!");
    }
    ui->field1_3->setText(sign);
    aiPlayer.aiTurn();
    if(Game::checkWin(&aiPlayer))
    {
        winDrawWind.setLabelText("AI win!");
    }
    if(Game::checkDraw(&humanPlayer,&aiPlayer))
    {
        winDrawWind.setLabelText("Draw!");
    }

}

void playingField::on_field2_1_clicked()
{
    winOrDrawWindow winDrawWind;
    winDrawWind.setModal(true);
    QChar sign=humanPlayer.getSign();
    humanPlayer.makeTurn(2,1);
    if(Game::checkWin(&humanPlayer))
    {
        winDrawWind.setLabelText("You win!");
    }
    ui->field2_1->setText(sign);
    aiPlayer.aiTurn();
    if(Game::checkWin(&aiPlayer))
    {
        winDrawWind.setLabelText("AI win!");
    }
    if(Game::checkDraw(&humanPlayer,&aiPlayer))
    {
        winDrawWind.setLabelText("Draw!");
    }
}


void playingField::on_field2_2_clicked()
{
    winOrDrawWindow winDrawWind;
    winDrawWind.setModal(true);
    QChar sign=humanPlayer.getSign();
    humanPlayer.makeTurn(2,2);
    if(Game::checkWin(&humanPlayer))
    {
        winDrawWind.setLabelText("You win!");
    }
    ui->field2_2->setText(sign);
    aiPlayer.aiTurn();
    if(Game::checkWin(&aiPlayer))
    {
        winDrawWind.setLabelText("AI win!");
    }
    if(Game::checkDraw(&humanPlayer,&aiPlayer))
    {
        winDrawWind.setLabelText("Draw!");
    }
}


void playingField::on_field2_3_clicked()
{
    winOrDrawWindow winDrawWind;
    winDrawWind.setModal(true);
    QChar sign=humanPlayer.getSign();
    humanPlayer.makeTurn(2,3);
    if(Game::checkWin(&humanPlayer))
    {
        winDrawWind.setLabelText("You win!");
    }
    ui->field2_3->setText(sign);
    aiPlayer.aiTurn();
    if(Game::checkWin(&aiPlayer))
    {
        winDrawWind.setLabelText("AI win!");
    }
    if(Game::checkDraw(&humanPlayer,&aiPlayer))
    {
        winDrawWind.setLabelText("Draw!");
    }
}


void playingField::on_field3_3_clicked()
{
    winOrDrawWindow winDrawWind;
    winDrawWind.setModal(true);
    QChar sign=humanPlayer.getSign();
    humanPlayer.makeTurn(3,1);
    if(Game::checkWin(&humanPlayer))
    {
        winDrawWind.setLabelText("You win!");
    }
    ui->field3_1->setText(sign);
    aiPlayer.aiTurn();
    if(Game::checkWin(&aiPlayer))
    {
        winDrawWind.setLabelText("AI win!");
    }
    if(Game::checkDraw(&humanPlayer,&aiPlayer))
    {
        winDrawWind.setLabelText("Draw!");
    }
}


void playingField::on_field3_2_clicked()
{
    winOrDrawWindow winDrawWind;
    winDrawWind.setModal(true);
    QChar sign=humanPlayer.getSign();
    humanPlayer.makeTurn(3,2);
    if(Game::checkWin(&humanPlayer))
    {
        winDrawWind.setLabelText("You win!");
    }
    ui->field3_2->setText(sign);
    aiPlayer.aiTurn();
    if(Game::checkWin(&aiPlayer))
    {
        winDrawWind.setLabelText("AI win!");
    }
    if(Game::checkDraw(&humanPlayer,&aiPlayer))
    {
        winDrawWind.setLabelText("Draw!");
    }
}


void playingField::on_field3_1_clicked()
{
    winOrDrawWindow winDrawWind;
    winDrawWind.setModal(true);
    QChar sign=humanPlayer.getSign();
    humanPlayer.makeTurn(3,3);
    if(Game::checkWin(&humanPlayer))
    {
        winDrawWind.setLabelText("You win!");
    }
    ui->field3_3->setText(sign);
    aiPlayer.aiTurn();
    if(Game::checkWin(&aiPlayer))
    {
        winDrawWind.setLabelText("AI win!");
    }
    if(Game::checkDraw(&humanPlayer,&aiPlayer))
    {
        winDrawWind.setLabelText("Draw!");
    }
}

