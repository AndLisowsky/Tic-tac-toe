#include "game.h"
#include <unistd.h>
#include <iostream>

Game::Game(Player* p1, Player* p2) : player1(p1), player2(p2), whoseMove(1) {}

Game::~Game() {
    delete player1;
    delete player2;
}

void Game::launch(int mode) {
    board.drawBoard(); // Narysuj planszę na początku gry
    int moveCount = 1;
    while (!board.isFull()) {
        int position = 0;
        Player *currentPlayer = (whoseMove == 1) ? player1 : player2;

        std::cout << currentPlayer->getName() << "'s turn" << std::endl;
        bool moveMade = false;

        if (mode == 2 && whoseMove == 2) { // ruch AI
            std::cout << "AI is thinking..." << std::endl;
            usleep(3000000);
            moveMade = currentPlayer->makeMove(board, 0);
        } else {
            while (!moveMade) { //ruch graczy
                std::cout << "\nEnter position to make a move: ";
                std::cin >> position;
                moveMade = currentPlayer->makeMove(board, position);
                if (!moveMade) {
                    std::cout << "Invalid move. Try again." << std::endl;
                    position = 0;
                    board.drawBoard();
                }
            }
        }

        if (moveMade) {
            moveCount++;
            whoseMove = (whoseMove == 1) ? 2 : 1; // Przełącz grę na następnego gracza tylko, gdy ruch jest poprawny
            board.drawBoard(); // Narysuj planszę po ruchu
        }

        if (board.isFinished()) break;
    }

    if (board.isFinished()) {
        Player *winner = (whoseMove == 2) ? player1 : player2;
        std::cout << winner->getName() << " wins!" << std::endl;
        } else if (board.isFull()){
        std::cout << "It's a draw!" << std::endl;
    }
}
