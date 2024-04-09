#include "game.h"
#define ROWS 3
#define COLLUMNS 3
Game::Game() {}

void Game::fillingBoard()
{
    for (int i = 0; i < ROWS-1; ++i) {
        for (int j = 0; j < COLLUMNS-1; ++j) {
            Game::getBoardCell(i,j)=1;
        }
    }
}

char& Game::getBoardCell(int row,int collumn)
{
    return board[row][collumn];
}

bool Game::checkWin(Player* _player)
{
    if(board[0][0]==_player->getSign() && board[1][1]==_player->getSign() && board[2][2]==_player->getSign()) return true;
    if(board[2][0]==_player->getSign() && board[1][1]==_player->getSign() && board[0][2]==_player->getSign()) return true;
    if(board[0][0]==_player->getSign() && board[1][0]==_player->getSign() && board[2][0]==_player->getSign()) return true;
    if(board[0][1]==_player->getSign() && board[1][1]==_player->getSign() && board[2][1]==_player->getSign()) return true;
    if(board[0][2]==_player->getSign() && board[1][2]==_player->getSign() && board[2][2]==_player->getSign()) return true;
    if(board[0][2]==_player->getSign() && board[1][2]==_player->getSign() && board[2][2]==_player->getSign()) return true;
    if(board[0][0]==_player->getSign() && board[0][1]==_player->getSign() && board[0][2]==_player->getSign()) return true;
    if(board[1][0]==_player->getSign() && board[1][1]==_player->getSign() && board[1][2]==_player->getSign()) return true;
    if(board[2][0]==_player->getSign() && board[2][1]==_player->getSign() && board[2][2]==_player->getSign()) return true;
    return false;
}

bool Game::checkDraw(Player *_playerCross, Player *_playerNull)
{
    if(!checkWin(_playerCross) &&!checkWin(_playerNull)) return true;
    else return false;
}
