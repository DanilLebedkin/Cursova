#include "humanplayer.h"
#include"game.h"
HumanPlayer::HumanPlayer(char _sign):Player(_sign) {sign=_sign;}

char HumanPlayer::getSign()
{
    return sign;
}

void HumanPlayer::setSign(char _sign)
{
    this->sign=_sign;
}

void HumanPlayer::makeTurn(int row,int column)
{
    Game::setBoardCell(row-1,column-1,getSign());
}
