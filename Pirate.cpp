#include "Robot.h"
#include "Ninja.h"
#include "Robot.h"
#include "Zombie.h"
#include "Monkey.h"
#include "Pirate.h"

#include <cstdlib>

using namespace std;

Pirate::Pirate() {}

string Pirate::getName(){
    return "Pirate";
}

int Pirate::compare(Move* other){
    if (dynamic_cast<Robot*>(other)) {
        // Pirate beats Robot
        return 1;
    } else if (dynamic_cast<Monkey*>(other)) {
        // Pirate beats Monkey
        return 1;
    } else if (dynamic_cast<Zombie*>(other)) {
        // Pirate loses to Zombie
        return -1;
    } else if (dynamic_cast<Ninja*>(other)) {
        // Pirate loses to Ninja
        return -1;
    } else {
        // All other moves tie with pirate
        return 0;
    }
}