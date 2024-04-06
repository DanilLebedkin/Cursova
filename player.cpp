#include "player.h"
#include"game.h"
Player::Player(char _sign):sign(_sign) {}

bool Player::isBusy(int row,int collumn)
{
    if(Game::getBoardCell(row,collumn)!='1') return false;
    return true;
}


