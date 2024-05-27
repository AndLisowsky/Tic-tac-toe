#ifndef CPU_H
#define CPU_H

#include "player.h"
#include "board.h"

class CPU : public Player {
public:
    CPU(const std::string& nick, char sym) : Player(nick, sym) {};
    bool makeMove(Board& board, int position) override;
};

#endif // CPU_H
