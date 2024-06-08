#ifndef HUMAN_H
#define HUMAN_H

#include "player.h"

/**
 * @class Human
 * @brief Represents a human player in the Tic-Tac-Toe game.
 *
 * This class inherits from the Player class and implements
 * the behavior specific to a human player.
 */
class Human : public Player {
public:
    /**
     * @brief Constructs a new Human object.
     * @param nick The nickname of the human player.
     * @param sym The symbol ('X' or 'O') used by the human player.
     */
    Human(const std::string& nick, char sym) : Player(nick, sym) {};

    /**
     * @brief Makes a move on the game board.
     * @param board The game board where the move will be made.
     * @param position The position on the board to place the symbol.
     * @return true if the move is successful, false otherwise.
     */
    bool makeMove(Board& board, int position) override;
};

#endif // HUMAN_H
