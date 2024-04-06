#ifndef GAME_H
#define GAME_H
#include"player.h"
#include<QVector>
class Game
{
private:
    static QVector<QVector<char>> board;
public:
    Game();
    static void fillingBoard();
    static char&  getBoardCell(int,int);
    bool checkWin(Player*);
    bool checkDraw(Player*,Player*);
};

#endif // GAME_H
