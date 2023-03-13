#ifndef ROBOT_H
#define ROBOT_H

using namespace std;

#include "Move.h"
#include <string>

class Robot : public Move {
public:
    Robot();
    string getName();
    int compare(Move* other);
};

#endif //ROBOT_H