#ifndef BOARD_H
#define BOARD_H

#include <iostream>
#include <array>

class Board {
private:
    char gameState[3][3]{};

public:
    std::array<std::array<char, 3>, 3> getState() const;
    void setState(const std::array<std::array<char, 3>, 3>& state);
    Board();
    void drawBoard() const;
    bool isFinished();
    bool isFull();
    bool makeMove(char symbol, int position);
    friend class CPU;
};

#endif