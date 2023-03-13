#include "Robot.h"
#include "Ninja.h"
#include "Robot.h"
#include "Zombie.h"
#include "Monkey.h"
#include "Pirate.h"

#include <cstdlib>

using namespace std;

Ninja::Ninja() {}

string Ninja::getName(){
    return "Ninja";
}

int Ninja::compare(Move* other){
    if (dynamic_cast<Zombie*>(other)) {
        // Ninja beats Zombie
        return 1;
    } else if (dynamic_cast<Pirate*>(other)) {
        // Ninja beats Pirate
        return 1;
    } else if (dynamic_cast<Robot*>(other)) {
        // Ninja loses to Robot
        return -1;
    } else if (dynamic_cast<Monkey*>(other)) {
        // Ninja loses to Monkey
        return -1;
    } else {
        // All other moves tie with ninja
        return 0;
    }
};