#ifndef ROCK_H
#define ROCK_H

using namespace std;

#include "Move.h"
#include <string>

class Rock : public Move {
public:
    Rock();
    string getName();
    int compare(Move* other);
};

#endif //ROCK_H