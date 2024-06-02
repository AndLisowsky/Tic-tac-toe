#include "cpu.h"
#include "board.h"

// Pomocnicza funkcja do sprawdzenia, czy dany ruch prowadzi do wygranej
bool isWinningMove(Board& board, char symbol, int position) {
    auto originalState = board.getState(); // Zapisanie oryginalnego stanu planszy

    board.makeMove(symbol, position); // Tymczasowy ruch

    bool won = board.isFinished(); // Sprawdzenie, czy ruch wygrywa grę

    board.setState(originalState); // Przywrócenie oryginalnego stanu planszy

    return won;
}

// Funkcja do wykonywania ruchu CPU
bool CPU::makeMove(Board& board, int position) {
    // Sprawdzenie, czy CPU może wygrać w jednym ruchu
    for (int pos = 1; pos <= 9; ++pos) {
        int row = (pos - 1) / 3;
        int col = (pos - 1) % 3;
        if (board.getState()[row][col] == '-' && isWinningMove(board, symbol, pos)) {
            board.makeMove(symbol, pos);
            return true;
        }
    }

    // Sprawdzenie, czy przeciwnik może wygrać w jednym ruchu i zablokowanie tego ruchu
    char opponentSymbol = (symbol == 'X') ? 'O' : 'X';
    for (int pos = 1; pos <= 9; ++pos) {
        int row = (pos - 1) / 3;
        int col = (pos - 1) % 3;
        if (board.getState()[row][col] == '-' && isWinningMove(board, opponentSymbol, pos)) {
            board.makeMove(symbol, pos);
            return true;
        }
    }

    // Wybór pozycji strategicznych (środek, rogi, boki)
    int preferredMoves[] = {5, 1, 3, 7, 9, 2, 4, 6, 8};
    for (int pos : preferredMoves) {
        int row = (pos - 1) / 3;
        int col = (pos - 1) % 3;
        if (board.getState()[row][col] == '-') {
            board.makeMove(symbol, pos);
            return true;
        }
    }
    return false; // Upewnienie się, że funkcja zawsze coś zwraca
}
