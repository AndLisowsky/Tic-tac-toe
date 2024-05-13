#include "game.h"
#include "human.h"

int main() {
    Player* player1 = new Human('X');
    Player* player2 = new Human('O');
    Game game(player1, player2);
    game.launch("multiplayer");

    delete player1;
    delete player2;

    return 0;
}
