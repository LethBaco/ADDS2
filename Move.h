#ifndef MOVE_H
#define MOVE_H

#include <string>

using namespace std;

class Move {
public:
    virtual string getName() = 0;
    virtual int compare(Move* other) = 0;
};

#endif //MOVE_H