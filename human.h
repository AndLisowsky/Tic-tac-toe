#ifndef HUMAN_H
#define HUMAN_H

#include "player.h"

class Human : public Player {
public:
    Human(const std::string& nick, char sym) : Player(nick, sym) {};
    bool makeMove(Board& board, int position) override;
};

#endif // HUMAN_H
