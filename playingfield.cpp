#include "playingfield.h"
#include "ui_playingfield.h"
#include"player.h"
#include<QMessageBox>
playingField::playingField(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::playingField)
    ,humanPlayer('1')
    ,aiPlayer('1')
{
    ui->setupUi(this);
    fillingVectorOfButtons();
    Game::initializationBoard();
    Game::fillingBoard();
}
int counterOfPushedBtn=0;
bool resultOfCheckBusy;
bool resultOfCheckWin;
bool resultOfCheckDraw;
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
QVector<QPushButton*> playingField::buttons;
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
    resultOfCheckBusy=Player::isBusy(1,1);
    if(resultOfCheckBusy)  QMessageBox::about(this, "Вибачте, але Ви вибрали зайняте поле", "Будь ласка виберіть не зайняте поле");
    else{
        winOrDrawWindow*winDrawWind=new winOrDrawWindow ;
        winDrawWind->setModal(true);
        QChar sign=humanPlayer.getSign();
        humanPlayer.makeTurn(1,1);
        resultOfCheckWin=Game::checkWin(&humanPlayer);
        if(resultOfCheckWin)
        {
            winDrawWind->setLabelText("You win!");
            winDrawWind->exec();
            this->close();
        }
        ui->field1_1->setText(sign);
        aiPlayer.aiTurn();
        resultOfCheckWin=Game::checkWin(&aiPlayer);
        if(resultOfCheckWin)
        {
            winDrawWind->setLabelText("AI win!");
            winDrawWind->exec();
            this->close();
        }
        if(counterOfPushedBtn==9)
        {
            resultOfCheckDraw=Game::checkDraw(&humanPlayer,&aiPlayer);
            if(resultOfCheckDraw)
            {
                winDrawWind->setLabelText("Draw!");
                winDrawWind->exec();
                this->close();
            }
        }
        counterOfPushedBtn++;
    }
}

void playingField::on_field1_2_clicked()
{
    resultOfCheckBusy=Player::isBusy(1,2);
    if(resultOfCheckBusy)  QMessageBox::about(this, "Вибачте, але Ви вибрали зайняте поле", "Будь ласка виберіть не зайняте поле");
    else{
        winOrDrawWindow*winDrawWind=new winOrDrawWindow ;
        winDrawWind->setModal(true);
        QChar sign=humanPlayer.getSign();
        humanPlayer.makeTurn(1,2);
        resultOfCheckWin=Game::checkWin(&humanPlayer);
        if(resultOfCheckWin)
        {
            winDrawWind->setLabelText("You win!");
            winDrawWind->exec();
            this->close();
        }
        ui->field1_2->setText(sign);
        aiPlayer.aiTurn();
        resultOfCheckWin=Game::checkWin(&aiPlayer);
        if(resultOfCheckWin)
        {
            winDrawWind->setLabelText("AI win!");
            winDrawWind->exec();
            this->close();
        }
        if(counterOfPushedBtn==9)
        {
            resultOfCheckDraw=Game::checkDraw(&humanPlayer,&aiPlayer);
            if(resultOfCheckDraw)
            {
                winDrawWind->setLabelText("Draw!");
                winDrawWind->exec();
                this->close();
            }
        }
        counterOfPushedBtn++;
    }
}


void playingField::on_field1_3_clicked()
{
    resultOfCheckBusy=Player::isBusy(1,3);
    if(resultOfCheckBusy)  QMessageBox::about(this, "Вибачте, але Ви вибрали зайняте поле", "Будь ласка виберіть не зайняте поле");
    else{
        winOrDrawWindow*winDrawWind=new winOrDrawWindow ;
        winDrawWind->setModal(true);
        QChar sign=humanPlayer.getSign();
        humanPlayer.makeTurn(1,3);
        resultOfCheckWin=Game::checkWin(&humanPlayer);
        if(resultOfCheckWin)
        {
            winDrawWind->setLabelText("You win!");
            winDrawWind->exec();
            this->close();
        }
        ui->field1_3->setText(sign);
        aiPlayer.aiTurn();
        resultOfCheckWin=Game::checkWin(&aiPlayer);
        if(resultOfCheckWin)
        {
            winDrawWind->setLabelText("AI win!");
            winDrawWind->exec();
            this->close();
        }
        if(counterOfPushedBtn==9)
        {
            resultOfCheckDraw=Game::checkDraw(&humanPlayer,&aiPlayer);
            if(resultOfCheckDraw)
            {
                winDrawWind->setLabelText("Draw!");
                winDrawWind->exec();
                this->close();
            }
        }
        counterOfPushedBtn++;
    }
}

void playingField::on_field2_1_clicked()
{
    resultOfCheckBusy=Player::isBusy(2,1);
    if(resultOfCheckBusy)  QMessageBox::about(this, "Вибачте, але Ви вибрали зайняте поле", "Будь ласка виберіть не зайняте поле");
    else{
        winOrDrawWindow*winDrawWind=new winOrDrawWindow ;
        winDrawWind->setModal(true);
        QChar sign=humanPlayer.getSign();
        humanPlayer.makeTurn(2,1);
        resultOfCheckWin=Game::checkWin(&humanPlayer);
        if(resultOfCheckWin)
        {
            winDrawWind->setLabelText("You win!");
            winDrawWind->exec();
            this->close();
        }
        ui->field2_1->setText(sign);
        aiPlayer.aiTurn();
        resultOfCheckWin=Game::checkWin(&aiPlayer);
        if(resultOfCheckWin)
        {
            winDrawWind->setLabelText("AI win!");
            winDrawWind->exec();
            this->close();
        }
        if(counterOfPushedBtn==9)
        {
            resultOfCheckDraw=Game::checkDraw(&humanPlayer,&aiPlayer);
            if(resultOfCheckDraw)
            {
                winDrawWind->setLabelText("Draw!");
                winDrawWind->exec();
                this->close();
            }
        }
        counterOfPushedBtn++;
    }
}


void playingField::on_field2_2_clicked()
{
    resultOfCheckBusy=Player::isBusy(2,2);
    if(resultOfCheckBusy)  QMessageBox::about(this, "Вибачте, але Ви вибрали зайняте поле", "Будь ласка виберіть не зайняте поле");
    else{
        winOrDrawWindow*winDrawWind=new winOrDrawWindow ;
        winDrawWind->setModal(true);
        QChar sign=humanPlayer.getSign();
        humanPlayer.makeTurn(2,2);
        resultOfCheckWin=Game::checkWin(&humanPlayer);
        if(resultOfCheckWin)
        {
            winDrawWind->setLabelText("You win!");
            winDrawWind->exec();
            this->close();
        }
        ui->field2_2->setText(sign);
        aiPlayer.aiTurn();
        resultOfCheckWin=Game::checkWin(&aiPlayer);
        if(resultOfCheckWin)
        {
            winDrawWind->setLabelText("AI win!");
            winDrawWind->exec();
            this->close();
        }
        if(counterOfPushedBtn==9)
        {
            resultOfCheckDraw=Game::checkDraw(&humanPlayer,&aiPlayer);
            if(resultOfCheckDraw)
            {
                winDrawWind->setLabelText("Draw!");
                winDrawWind->exec();
                this->close();
            }
        }
        counterOfPushedBtn++;
    }
}


void playingField::on_field2_3_clicked()
{
    resultOfCheckBusy=Player::isBusy(2,3);
    if(resultOfCheckBusy)  QMessageBox::about(this, "Вибачте, але Ви вибрали зайняте поле", "Будь ласка виберіть не зайняте поле");
    else{
        winOrDrawWindow*winDrawWind=new winOrDrawWindow ;
        winDrawWind->setModal(true);
        QChar sign=humanPlayer.getSign();
        humanPlayer.makeTurn(2,3);
        resultOfCheckWin=Game::checkWin(&humanPlayer);
        if(resultOfCheckWin)
        {
            winDrawWind->setLabelText("You win!");
            winDrawWind->exec();
            this->close();
        }
        ui->field2_3->setText(sign);
        aiPlayer.aiTurn();
        resultOfCheckWin=Game::checkWin(&aiPlayer);
        if(resultOfCheckWin)
        {
            winDrawWind->setLabelText("AI win!");
            winDrawWind->exec();
            this->close();
        }
        if(counterOfPushedBtn==9)
        {
            resultOfCheckDraw=Game::checkDraw(&humanPlayer,&aiPlayer);
            if(resultOfCheckDraw)
            {
                winDrawWind->setLabelText("Draw!");
                winDrawWind->exec();
                this->close();
            }
        }
        counterOfPushedBtn++;
    }
}

void playingField::on_field3_1_clicked()
{
    resultOfCheckBusy=Player::isBusy(3,1);
    if(resultOfCheckBusy)  QMessageBox::about(this, "Вибачте, але Ви вибрали зайняте поле", "Будь ласка виберіть не зайняте поле");
    else{
        winOrDrawWindow*winDrawWind=new winOrDrawWindow ;
        winDrawWind->setModal(true);
        QChar sign=humanPlayer.getSign();
        humanPlayer.makeTurn(3,1);
        resultOfCheckWin=Game::checkWin(&humanPlayer);
        if(resultOfCheckWin)
        {
            winDrawWind->setLabelText("You win!");
            winDrawWind->exec();
            this->close();
        }
        ui->field3_1->setText(sign);
        aiPlayer.aiTurn();
        resultOfCheckWin=Game::checkWin(&aiPlayer);
        if(resultOfCheckWin)
        {
            winDrawWind->setLabelText("AI win!");
            winDrawWind->exec();
            this->close();
        }
        if(counterOfPushedBtn==9)
        {
            resultOfCheckDraw=Game::checkDraw(&humanPlayer,&aiPlayer);
            if(resultOfCheckDraw)
            {
                winDrawWind->setLabelText("Draw!");
                winDrawWind->exec();
                this->close();
            }
        }
        counterOfPushedBtn++;
    }
}

void playingField::on_field3_2_clicked()
{
    resultOfCheckBusy=Player::isBusy(3,2);
    if(resultOfCheckBusy)  QMessageBox::about(this, "Вибачте, але Ви вибрали зайняте поле", "Будь ласка виберіть не зайняте поле");
    else{
        winOrDrawWindow*winDrawWind=new winOrDrawWindow ;
        winDrawWind->setModal(true);
        QChar sign=humanPlayer.getSign();
        humanPlayer.makeTurn(3,2);
        if(Game::checkWin(&humanPlayer))
        {
            winDrawWind->setLabelText("You win!");
            winDrawWind->exec();
            this->close();
        }
        ui->field3_2->setText(sign);
        aiPlayer.aiTurn();
        resultOfCheckWin=Game::checkWin(&aiPlayer);
        if(resultOfCheckWin)
        {
            winDrawWind->setLabelText("AI win!");
            winDrawWind->exec();
            this->close();
        }
        if(counterOfPushedBtn==9)
        {
            resultOfCheckDraw=Game::checkDraw(&humanPlayer,&aiPlayer);
            if(resultOfCheckDraw)
            {
                winDrawWind->setLabelText("Draw!");
                winDrawWind->exec();
                this->close();
            }
        }
        counterOfPushedBtn++;
    }
}

void playingField::on_field3_3_clicked()
{
    resultOfCheckBusy=Player::isBusy(3,3);
    if(resultOfCheckBusy)  QMessageBox::about(this, "Вибачте, але Ви вибрали зайняте поле", "Будь ласка виберіть не зайняте поле");
    else{
        winOrDrawWindow*winDrawWind=new winOrDrawWindow ;
        winDrawWind->setModal(true);
        QChar sign=humanPlayer.getSign();
        humanPlayer.makeTurn(3,3);
        resultOfCheckWin=Game::checkWin(&humanPlayer);
        if(resultOfCheckWin)
        {
            winDrawWind->setLabelText("You win!");
            winDrawWind->exec();
            this->close();
        }
        ui->field3_3->setText(sign);
        aiPlayer.aiTurn();
        if(Game::checkWin(&aiPlayer))
        {
            winDrawWind->setLabelText("AI win!");
            winDrawWind->exec();
            this->close();
        }
        if(counterOfPushedBtn==9)
        {
            resultOfCheckDraw=Game::checkDraw(&humanPlayer,&aiPlayer);
            if(resultOfCheckDraw)
            {
                winDrawWind->setLabelText("Draw!");
                winDrawWind->exec();
                this->close();
            }
        }
        counterOfPushedBtn++;
    }
}







