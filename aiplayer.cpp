#include "aiplayer.h"
#include<time.h>
#include "windows.h"
#include<stdlib.h>
#include"playingfield.h"
AiPlayer::AiPlayer(char _sign):Player(_sign) {sign=_sign;}

void AiPlayer::setSign(char _sign)
{
    this->sign=_sign;
}

char AiPlayer::getSign()
{
    return sign;
}

void AiPlayer::makeTurn(int row, int column)
{
    int numberOfButton=buttonSelector(row,column);
    Game::setBoardCell(row-1,column-1,getSign());
    changeButtonName(numberOfButton);
}

int AiPlayer::generateMove()
{
    srand(time(NULL));
    int number=1+rand()%3;
    return number;
}

void AiPlayer::aiTurn()
{
    bool resultOfCheckBusy;
    int row=AiPlayer::generateMove();
    Sleep(100);
    int column=AiPlayer::generateMove();
    resultOfCheckBusy=Player::isBusy(row,column);
    if(!resultOfCheckBusy) return AiPlayer::makeTurn(row,column);
    else return aiTurn();
}

void AiPlayer::changeButtonName(int numberOfButton)
{
    QChar _sign=sign;
    playingField::getButtons()[numberOfButton]->setText(_sign);
}

int AiPlayer::buttonSelector(int row, int column)
{
    int numberOfButton;
    if(row==1 &&column==1) numberOfButton=0;
    if(row==1 &&column==2) numberOfButton=1;
    if(row==1 &&column==3) numberOfButton=2;
    if(row==2 &&column==1) numberOfButton=3;
    if(row==2 &&column==2) numberOfButton=4;
    if(row==2 &&column==3) numberOfButton=5;
    if(row==3 &&column==1) numberOfButton=6;
    if(row==3 &&column==2) numberOfButton=7;
    if(row==3 &&column==3) numberOfButton=8;
    return numberOfButton;
}
