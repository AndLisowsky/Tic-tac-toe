#include "game.h"

Game::Game(Player* p1, Player* p2) : player1(p1), player2(p2), whoseMove(1) {}

Game::~Game() {
    delete player1;
    delete player2;
}

void Game::launch(std::string mode) {
    board.drawBoard(); // Narysuj planszę na początku gry
    int moveCount = 0;
    while (!board.isFinished()) {
        moveCount++;
        int position;
        Player* currentPlayer = (whoseMove == 1) ? player1 : player2;

        std::cout << "Player " << whoseMove << "'s turn" << std::endl;
        std::cout << "Enter position to make a move: ";
        std::cin >> position;

        currentPlayer->makeMove(board, position);

        whoseMove = (whoseMove == 1) ? 2 : 1; // Przełącz grę na następnego gracza
        board.drawBoard(); // Narysuj planszę po ruchu
    }
    if (board.isFinished() && moveCount !=9) {
        if (whoseMove == 2) {
            std::cout << "Player 1 wins!" << std::endl;
        } else if (whoseMove == 1) {
            std::cout << "Player 2 wins!" << std::endl;
        }
    }
}
