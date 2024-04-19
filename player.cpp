#include "player.h"
#include"game.h"
Player::Player(char _sign):sign(_sign) {}

bool Player::isBusy(int row,int collumn)
{
    row--;
    collumn--;
    char boardCellValue=Game::getBoardCell(row,collumn);
    if(boardCellValue=='1') return false;
    else return true;
}


