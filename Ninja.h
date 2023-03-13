#ifndef NINJA_H
#define NINJA_H

using namespace std;

#include "Move.h"
#include <string>

class Ninja : public Move {
public:
    Ninja();
    string getName();
    int compare(Move* other);
};

#endif //NINJA_H