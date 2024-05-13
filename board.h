#ifndef BOARD_H
#define BOARD_H

#include <iostream>
#include <array>

class Board {
private:
    char gameState[3][3]{};

public:
    Board();
    void drawBoard() const;
    bool isFinished();
    bool makeMove(char symbol, int position);
};

#endif