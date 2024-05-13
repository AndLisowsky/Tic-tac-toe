#ifndef HUMAN_H
#define HUMAN_H

#include "player.h"

class Human : public Player {
public:
    Human(char s);
    void makeMove(Board& board, int position) override;
private:
    char symbol;
};

#endif // HUMAN_H
