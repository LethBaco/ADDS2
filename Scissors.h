#ifndef SCISSORS_H
#define SCISSORS_H

using namespace std;

#include "Move.h"
#include <string>

class Scissors : public Move {
public:
    Scissors();
    string getName();
    int compare(Move* other);
};

#endif //SCISSORS_H