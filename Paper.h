#ifndef PAPER_H
#define PAPER_H

using namespace std;

#include "Move.h"
#include <string>

class Paper : public Move {
public:
    Paper();
    string getName();
    int compare(Move* other);
};

#endif //PAPER_H