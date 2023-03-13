#include "Referee.h"
#include "Player.h"
#include "Human.h"
#include "Computer.h"

#include <iostream>

int main() {
    Referee referee;
    Player* player1 = new Human("Josh");
    Player* player2 = new Computer();

    while (true) {
        std::cout << "Player 1 (" << player1->getName() << "):" << std::endl;
        Move* move1 = player1->makeMove();

        std::cout << "Player 2 (" << player2->getName() << "):" << std::endl;
        Move* move2 = player2->makeMove();

        int result = move1->compare(move2);

        if (result == 1) {
            std::cout << player1->getName() << " wins!" << std::endl;
            break;
        } else if (result == -1) {
            std::cout << player2->getName() << " wins!" << std::endl;
            break;
        } else {
            std::cout << "Tie!" << std::endl;
        }
    }

    return 0;
}