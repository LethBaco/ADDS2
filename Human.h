#ifndef HUMAN_H
#define HUMAN_H

#include <string>

#include "Player.h"

using namespace std;

class Human : public Player {
public:
    Human(string playerName = "Human");
    Move* makeMove();
    std::string getName();
private:
    string name_;
};

#endif //HUMAN_H