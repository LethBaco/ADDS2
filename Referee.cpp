#include "Referee.h"
#include <iostream>

using namespace std;

Referee::Referee() {}

Player* Referee::refGame(Player* player1, Player* player2){
    cout << "Player 1 (" << player1->getName() << "):" << endl;
    Move* move1 = player1->makeMove();

    cout << "Player 2 (" << player2->getName() << "):" << endl;
    Move* move2 = player2->makeMove();

    int result = move1->compare(move2);

    if (result == 1) {
        cout << player1->getName() << " wins!" << endl;
        return player1;
    } else if (result == -1) {
        cout << player2->getName() << " wins!" << endl;
        return player2;
    } else {
        cout << "Tie!" << endl;
        return nullptr;
    }
}