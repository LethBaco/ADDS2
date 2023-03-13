#include "Paper.h"
#include "Rock.h"
#include "Scissors.h"

#include <cstdlib>

using namespace std;

Paper::Paper() {}
string Paper::getName(){
    return "Paper";
}

int Paper::compare(Move* other){
    if (dynamic_cast<Rock*>(other)) {
        // Paper beats Rock
        return 1;
    } else if (dynamic_cast<Scissors*>(other)) {
        // Paper loses to Scissors
        return -1;
    } else {
        // All other moves tie with paper
        return 0;
    }
}