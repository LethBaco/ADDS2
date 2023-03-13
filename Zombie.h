#ifndef ZOMBIE_H
#define ZOMBIE_H

using namespace std;

#include "Move.h"
#include <string>

class Zombie : public Move {
public:
    Zombie();  
    string getName();
    int compare(Move* other);
};

#endif //ZOMBIE_H