#include <iostream>
#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

using namespace std;

int main() {
    Player* player1 = new Human("Alice");
    Player* player2 = new Computer();

    Referee referee;
    Player* winner = referee.refGame(player1, player2);

    if (winner != nullptr) {
        cout << "The winner is " << winner->getName() << endl;
    } else {
        cout << "It's a tie!" << endl;
    }
}