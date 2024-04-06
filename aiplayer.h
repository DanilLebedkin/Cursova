#ifndef AIPLAYER_H
#define AIPLAYER_H
#include"player.h"
class AiPlayer:Player
{
private:
    char sign;
public:
    AiPlayer(char sign);
    void setSign(char);
    char getSign() override;
    void makeTurn(int,int) override;
    int generateMove();
    void aiTurn();
    void changeButtonName(int);

};

#endif // AIPLAYER_H
