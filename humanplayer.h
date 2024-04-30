#ifndef HUMANPLAYER_H
#define HUMANPLAYER_H
#include"player.h"
class HumanPlayer:public Player
{
protected:
    char sign;
public:
    HumanPlayer(char _sign);
    char getSign()override;
    void setSign(char);
    void makeTurn(int,int)override;
    void changeButtonName(int);
};

#endif // HUMANPLAYER_H
