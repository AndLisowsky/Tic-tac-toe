#ifndef GAME_H
#define GAME_H

#include "player.h"
#include "board.h"

/**
 * @class Game
 * @brief Represents the game session for Tic-Tac-Toe.
 */
class Game {
private:
    /**
     * @brief The game board.
     */
    Board board;

    /**
     * @brief The first player.
     */
    Player* player1;

    /**
     * @brief The second player.
     */
    Player* player2;

    /**
     * @var Indicates which player is allowed to make a move.
     *
     * This variable is used to keep track of the current player's turn.
     */
    int whoseMove;

public:
    /**
     * @brief Constructs a new Game object.
     * @param p1 Pointer to the first player.
     * @param p2 Pointer to the second player.
     */
    Game(Player* p1, Player* p2);

    /**
     * @brief Destroys the Game object.
     */
    ~Game();

    /**
     * @brief Starts the game.
     * @param mode Determines the game mode: 1 for multiplayer, 2 for singleplayer.
     */
    void launch(int mode);
};

#endif // GAME_H
