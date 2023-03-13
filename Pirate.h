#ifndef PIRATE_H
#define PIRATE_H

using namespace std;

#include "Move.h"
#include <string>

class Pirate : public Move {
public:
    Pirate();
    string getName();
    int compare(Move* other);
};

#endif //PIRATE_H