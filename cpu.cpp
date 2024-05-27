#include "cpu.h"
#include "board.h"
#include <cstdlib>
#include <ctime>

// Pomocnicza funkcja do sprawdzenia, czy dany ruch prowadzi do wygranej
bool isWinningMove(Board& board, char symbol, int position) {
    board.makeMove(symbol, position); // Tymczasowy ruch

    bool won = board.isFinished(); // Sprawdzenie, czy ruch wygrywa grę

    board.makeMove('-', position); // Cofnięcie ruchu

    return won;
}

// Funkcja do wykonywania ruchu CPU
bool CPU::makeMove(Board& board, int position) {
    std::srand(std::time(0));

    // Sprawdzenie, czy CPU może wygrać w jednym ruchu
    for (int pos = 1; pos <= 9; ++pos) {
        int row = (pos - 1) / 3;
        int col = (pos - 1) % 3;
        if (board.gameState[row][col] == '-' && isWinningMove(board, symbol, pos)) {
            board.gameState[row][col] = symbol;
            return true;
        }
    }

    // Sprawdzenie, czy przeciwnik może wygrać w jednym ruchu i zablokowanie tego ruchu
    char opponentSymbol = (symbol == 'X') ? 'O' : 'X';
    for (int pos = 1; pos <= 9; ++pos) {
        int row = (pos - 1) / 3;
        int col = (pos - 1) % 3;
        if (board.gameState[row][col] == '-' && isWinningMove(board, opponentSymbol, pos)) {
            board.gameState[row][col] = symbol;
            return true;
        }
    }

    // Wybór pozycji strategicznych (środek, rogi, boki)
    int preferredMoves[] = {5, 1, 3, 7, 9, 2, 4, 6, 8};
    for (int pos : preferredMoves) {
        if (board.gameState[(pos - 1) / 3][(pos - 1) % 3] == '-') {
            board.gameState[(pos - 1) / 3][(pos - 1) % 3] = symbol;
            return true;
        }
    }

    // Jeśli żadna z powyższych strategii nie działa, wykonaj losowy ruch
    int posx;
    bool moveMade = false;
    while (!moveMade) {
        posx = std::rand() % 9 + 1;
        if (board.gameState[(posx - 1) / 3][(posx - 1) % 3] == '-') {
            board.gameState[(posx - 1) / 3][(posx - 1) % 3] = symbol;
            return true;
        }
    }
}
