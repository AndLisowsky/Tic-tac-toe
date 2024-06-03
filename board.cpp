#include "board.h"
#include <iostream>

Board::Board() {
    for (auto & i : gameState) {
        for (char & j : i) {
            j = '-';
        }
    }
}

void Board::drawBoard() const {
    std::cout << std::endl;
    for (auto i : gameState) {
        for (int j = 0; j < 3; ++j) {
            std::cout << i[j] << " ";
        }
        std::cout << std::endl;
    }
}


bool Board::isFinished() {
    // Sprawdzenie wygranej
    // Sprawdzenie wierszy
    for (auto & row : gameState) {
        if (row[0] != '-' && row[0] == row[1] && row[0] == row[2]) {
            return true; // Wygrana wiersza
        }
    }
    // Sprawdzenie kolumn
    for (int col = 0; col < 3; ++col) {
        if (gameState[0][col] != '-' && gameState[0][col] == gameState[1][col] && gameState[0][col] == gameState[2][col]) {
            return true; // Wygrana kolumny
        }
    }
    // Sprawdzenie przekątnych
    if (gameState[0][0] != '-' && gameState[0][0] == gameState[1][1] && gameState[0][0] == gameState[2][2]) {
        return true; // Wygrana przekątnej (od lewej górnej do prawej dolnej)
    }
    if (gameState[0][2] != '-' && gameState[0][2] == gameState[1][1] && gameState[0][2] == gameState[2][0]) {
        return true; // Wygrana przekątnej (od prawej górnej do lewej dolnej)
    }
    return false;
}

bool Board::isFull() {
    // Sprawdzenie pełnej planszy
    for (auto & row : gameState) {
        for (char col : row) {
            if (col == '-') {
                return false; // Plansza nie jest pełna
            }
        }
    }
    return true;
}

bool Board::makeMove(char symbol, int position) {
    int row = (position - 1) / 3;
    int col = (position - 1) % 3;

    if(gameState[row][col] == '-') {
        gameState[row][col] = symbol;
        return true;
    } else {
        return false;
    }
}
//funkcja do zapisywania stanu planszy przed ruchem CPU
std::array<std::array<char, 3>, 3> Board::getState() const {
    std::array<std::array<char, 3>, 3> state;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            state[i][j] = gameState[i][j];
        }
    }
    return state;
}
//funkcja do przywracania planszy (np. dla testowania kolejnych opcji)
void Board::setState(const std::array<std::array<char, 3>, 3>& state) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            gameState[i][j] = state[i][j];
        }
    }
}
