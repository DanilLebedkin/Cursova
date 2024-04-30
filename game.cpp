#include "game.h"
#define ROWS 3
#define COLLUMNS 3
Game::Game(){}
QVector<QVector<char>> Game::board;
void Game::initializationBoard()
{
    board.resize(ROWS,QVector<char>(COLLUMNS,'1'));
}


char& Game::getBoardCell(int row,int column)
{
    return board[row][column];
}
void Game::setBoardCell(int row,int column,char value)
{
    board[row][column]=value;
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
