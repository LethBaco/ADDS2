#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"

using namespace std;

class Human : public Player {
public:
    Human(string name = "Human");
    char makeMove();
    string getName();
private:
    string name_;
};

#endif // HUMAN_H