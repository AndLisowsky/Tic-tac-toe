#ifndef CPU_H
#define CPU_H

#include "player.h"
#include "board.h"

/**
 * @class CPU
 * @brief Represents a CPU player in the Tic-Tac-Toe game.
 *
 * This class inherits from the Player class and implements
 * the behavior specific to a CPU player.
 */
class CPU : public Player {
public:
    /**
     * @brief Constructs a new CPU object.
     * @param nick The nickname of the CPU player.
     * @param sym The symbol ('X' or 'O') used by the CPU player.
     */
    CPU(const std::string& nick, char sym) : Player(nick, sym) {};

    /**
     * @brief Makes a move on the game board.
     * @param board The game board where the move will be made.
     * @param position The position on the board to place the symbol.
     * @return true if the move is successful, false otherwise.
     *
     * Note: 'position' parameter is not used by CPU class by default since it doesn't use player interface to determine its move.
     */
    bool makeMove(Board& board, int position) override;
};

#endif // CPU_H
