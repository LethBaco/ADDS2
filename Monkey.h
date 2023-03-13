#ifndef MONKEY_H
#define MONKEY_H

using namespace std;

#include "Move.h"
#include <string>

class Monkey : public Move {
public:
    Monkey();
    string getName();
    int compare(Move* other);
};

#endif //MONKEY_H