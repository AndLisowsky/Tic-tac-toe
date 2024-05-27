#include "game.h"
#include "human.h"
#include "cpu.h"
#include <iostream>
#include <string>

int main() {
    int gamemode = 0;
    std::cout << "Welcome to the game!\nChoose your desired game mode:" << std::endl;
    std::cout << "1 - Player vs Player\n2 - Player vs CPU" << std::endl;
    Player *p1 = nullptr;
    Player *p2 = nullptr;
    while (gamemode != 1 && gamemode != 2) {
        std::cin >> gamemode;
        if (gamemode != 1 && gamemode != 2) {
            std::cout << "Try again." << std::endl;
        } else {
            std::string nick1;
            std::cout << "Pick nickname (P1):" << std::endl;
            std::cin >> nick1;
            p1 = new Human(nick1, 'X');

            if (gamemode == 1) {
                std::string nick2;
                std::cout << "Pick nickname (P2):" << std::endl;
                std::cin >> nick2;
                p2 = new Human(nick2, 'O');
            } else
                p2 = new CPU("AI", 'O');
        }
    }


    Game game(p1, p2);
    game.launch(gamemode);
    delete p1;
    delete p2;

    return 0;
}
