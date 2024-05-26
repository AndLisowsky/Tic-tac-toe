#include "cpu.h"
#include <cstdlib>
#include <ctime>

bool CPU::makeMove(Board& board, int position) {
    std::srand(std::time(0));
    bool moveMade = false;

    while (!moveMade) {
        int posx = std::rand() % 9 + 1; //random position (1-9)
        moveMade = board.makeMove(symbol, posx);
    }
}