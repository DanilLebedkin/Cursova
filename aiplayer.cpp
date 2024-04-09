#include "aiplayer.h"
#include<time.h>
#include<stdlib.h>

AiPlayer::AiPlayer(char _sign):Player(_sign) {sign=_sign;}

void AiPlayer::setSign(char _sign)
{
    this->sign=_sign;
}

char AiPlayer::getSign()
{
    return sign;
}

void AiPlayer::makeTurn(int row, int collumn)
{
    int numberOfButton=buttonSelector(row,collumn);
    Game::getBoardCell(row,collumn)=getSign();
    changeButtonName(numberOfButton);
}

int AiPlayer::generateMove()
{
    srand(time(NULL));
    return 1+rand()%9;
}

void AiPlayer::aiTurn()
{
    int row=AiPlayer::generateMove();
    int collumn=AiPlayer::generateMove();
    if(!Player::isBusy(row,collumn)) return AiPlayer::makeTurn(row,collumn);
    return aiTurn();
}

void AiPlayer::changeButtonName(int numberOfButton)
{
    QChar _sign=sign;
    playingField::getButtons()[numberOfButton]->setText(_sign);
}

int AiPlayer::buttonSelector(int row, int collumn)
{
    int numberOfButton;
    if(row==1 &&collumn==1) numberOfButton=0;
    if(row==1 &&collumn==2) numberOfButton=1;
    if(row==1 &&collumn==3) numberOfButton=2;
    if(row==2 &&collumn==1) numberOfButton=3;
    if(row==2 &&collumn==2) numberOfButton=4;
    if(row==2 &&collumn==3) numberOfButton=5;
    if(row==3 &&collumn==1) numberOfButton=6;
    if(row==3 &&collumn==2) numberOfButton=7;
    if(row==3 &&collumn==3) numberOfButton=8;
    return numberOfButton;
}
