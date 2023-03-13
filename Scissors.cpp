#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"

#include <cstdlib>

using namespace std;

Scissors::Scissors() {

}

string Scissors::getName(){
    return "Scissors";
}

int Scissors::compare(Move* other){
    if (dynamic_cast<Paper*>(other)) {
        // Scissors beat paper
        return 1;
    } else if (dynamic_cast<Rock*>(other)) {
        // Rock beats scissors
        return -1;
    } else {
        // All other moves tie with scissors
        return 0;
    }
}