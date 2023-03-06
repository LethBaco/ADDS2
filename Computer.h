#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"

using namespace std;

class Computer : public Player {
public:
    Computer();
    char makeMove();
    string getName();
};

#endif // COMPUTER_H