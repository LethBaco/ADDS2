#include "Robot.h"
#include "Ninja.h"
#include "Robot.h"
#include "Zombie.h"
#include "Monkey.h"
#include "Pirate.h"

#include <cstdlib>

using namespace std;

Monkey::Monkey() {}

string Monkey::getName(){
    return "Monkey";
}

int Monkey::compare(Move* other){
    if (dynamic_cast<Robot*>(other)) {
        // Monkey beats robot
        return 1;
    } else if (dynamic_cast<Ninja*>(other)) {
        // Monkey beats ninja
        return 1;
    } else if (dynamic_cast<Pirate*>(other)) {
        // Monkey loses to Pirate
        return -1;
    } else if (dynamic_cast<Zombie*>(other)) {
        // Monkey loses to Zombie
        return -1;
    } else {
        // All other moves tie with monkey
        return 0;
    }
}