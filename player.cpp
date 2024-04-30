#include "player.h"
#include"game.h"
Player::Player(char _sign):sign(_sign) {}

bool Player::isBusy(int row,int column)
{
    row--;
    column--;
    char boardCellValue=Game::getBoardCell(row,column);
    if(boardCellValue=='1') return false;
    else return true;
}


