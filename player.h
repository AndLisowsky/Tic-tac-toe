#ifndef PLAYER_H
#define PLAYER_H

#include "board.h"
#include <string>

/**
 * @class Player
 * @brief Abstract base class representing a player in the Tic-Tac-Toe game.
 *
 * This class provides the interface for player actions and properties.
 */
class Player {
protected:
    /**
     * @brief The nickname of the player.
     */
    std::string nickname;

    /**
     * @brief The symbol ('X' or 'O') used by the player.
     */
    char symbol;

public:
    /**
     * @brief Constructs a new Player object.
     * @param nick The nickname of the player.
     * @param sym The symbol used by the player.
     */
    Player(const std::string& nick, char sym) : nickname(nick), symbol(sym) {}

    /**
     * @brief Makes a move on the game board.
     *
     * This is a virtual function that is overridden by derived classes.
     * @param board The game board where the move will be made.
     * @param position The position on the board to place the symbol.
     * @return true if the move is successful, false otherwise.
     */
    virtual bool makeMove(Board& board, int position) = 0;

    /**
     * @brief Destroys the Player object.
     */
    virtual ~Player() {};

    /**
     * @brief Gets the nickname of the player.
     * @return The nickname of the player.
     */
    std::string getName() const;
};

#endif
