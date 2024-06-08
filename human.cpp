#include "human.h"
#include <iostream>

bool Human::makeMove(Board& board, int position) {
    if (position < 1 || position > 9) {
        std::cout << "Invalid position. Try again." << std::endl;
        return false;
    } else {
        bool success = board.makeMove(symbol, position);
        if (success) {
            return true;
        } else {
            std::cout << "Position already taken. Try again." << std::endl;
            return false;
        }
    }
}
