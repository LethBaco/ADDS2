#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"

#include <cstdlib>

using namespace std;

Rock::Rock() {}

string Rock::getName(){
    return "Rock";
}

int Rock::compare(Move* other){
    if (dynamic_cast<Scissors*>(other)) {
        // Rock beats scissors
        return 1;
    } else if (dynamic_cast<Paper*>(other)) {
        // Paper beats rock
        return -1;
    } else {
        // All other moves tie with rock
        return 0;
    }
}
