#ifndef AIPLAYER_H
#define AIPLAYER_H
#include"player.h"
#include"game.h"
#include"playingfield.h"
class AiPlayer: public Player
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
    int buttonSelector(int,int);

};

#endif // AIPLAYER_H
