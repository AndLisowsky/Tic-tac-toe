#ifndef PLAYER_H
#define PLAYER_H

#include "board.h"
#include <string>

class Player {
protected:
    std::string nickname;
    char symbol;
public:
    Player(const std::string& nick, char sym) : nickname(nick), symbol(sym) {}
    virtual bool makeMove(Board& board, int position) = 0;
    virtual ~Player() {};
    std::string getName() const;
};

#endif
