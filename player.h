#ifndef PLAYER_H
#define PLAYER_H

#include "board.h"
#include <string>

class Player {
protected:
    std::string nickname;
    char symbol;

public:
    virtual void makeMove(Board& board, int position) = 0;
};

#endif
