#ifndef GAME_H
#define GAME_H

#include "player.h"
#include "board.h"

class Game {
private:
    Board board;
    Player* player1;
    Player* player2;
    int whoseMove;

public:
    Game(Player* p1, Player* p2);
    ~Game();
    void launch(int mode);
};

#endif
