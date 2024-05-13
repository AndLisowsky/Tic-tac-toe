#include "Human.h"

Human::Human(char s) : symbol(s) {}

void Human::makeMove(Board& board, int position) {
    board.makeMove(symbol, position);
}
