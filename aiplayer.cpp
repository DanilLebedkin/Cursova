#include "aiplayer.h"
#include<time.h>
#include<stdlib.h>
#include"game.h"
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

void AiPlayer::makeTurn(int row, int collumn)
{
    Game::getBoardCell(row,collumn)=getSign();
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
    playingField::getButtons();
}
