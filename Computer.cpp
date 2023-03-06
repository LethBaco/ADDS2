#include "Computer.h"
#include <cstdlib>

using namespace std;

Computer::Computer() {}

char Computer::makeMove() {
    return 'R';
}

string Computer::getName()
{
    return "Computer";
}