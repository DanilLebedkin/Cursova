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
    static void initializationBoard();
    static void fillingBoard();
    static char&  getBoardCell(int,int);
    static void setBoardCell(int,int,char);
   static bool checkWin(Player*);
    static bool checkDraw(Player*,Player*);
};

#endif // GAME_H
