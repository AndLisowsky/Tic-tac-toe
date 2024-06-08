#ifndef BOARD_H
#define BOARD_H

#include <iostream>
#include <array>

/**
 * @class Board
 * @brief Represents the game board for Tic-Tac-Toe.
 */
class Board {
private:
    /**
     * @var gameState
     * @brief The state of the game board.
     *
     * A 3x3 array representing the current state of the game board,
     * where each cell can contain 'X', 'O', or be empty.
     */
    char gameState[3][3]{};

public:
    /**
     * @brief Gets the current state of the game board.
     * @return A 2D array representing the current state.
     */
    std::array<std::array<char, 3>, 3> getState() const;

    /**
     * @brief Sets the state of the game board.
     * @param state A 2D array representing the new state.
     */
    void setState(const std::array<std::array<char, 3>, 3>& state);

    /**
     * @brief Constructs a new Board object.
     */
    Board();

    /**
     * @brief Draws the game board.
     */
    void drawBoard() const;

    /**
     * @brief Checks if the game is finished.
     * @return true if the game is finished, false otherwise.
     */
    bool isFinished();

    /**
     * @brief Checks if the game board is full.
     * @return true if the board is full, false otherwise.
     */
    bool isFull();

    /**
     * @brief Makes a move on the game board.
     * @param symbol The symbol to place on the board.
     * @param position The position to place the symbol.
     * @return true if the move is successful, false otherwise.
     */
    bool makeMove(char symbol, int position);

    friend class CPU;
};

#endif
