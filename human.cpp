#include "human.h"
#include <iostream>

bool Human::makeMove(Board& board, int position) {
    if (position < 1 || position > 9 || !board.makeMove(symbol, position)) {
        std::cout << "Try again." << std::endl;
        return false;
    } else {
        board.makeMove(symbol, position);
        return true;
    }
}
