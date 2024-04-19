#ifndef PLAYER_H
#define PLAYER_H

class Player
{
private:
    char sign;
public:
    Player(char _sign);
    void virtual makeTurn(int,int)=0;
    char virtual getSign()=0;
    static bool isBusy(int,int);
    void changeButtonName(int);
};

#endif // PLAYER_H
