#include "Robot.h"
#include "Ninja.h"
#include "Robot.h"
#include "Zombie.h"
#include "Monkey.h"
#include "Pirate.h"

#include <cstdlib>

using namespace std;

Zombie::Zombie() {}

string Zombie::getName(){
    return "Zombie";
}

int Zombie::compare(Move* other){
    if (dynamic_cast<Monkey*>(other)) {
        // Zombie beats Monkey
        return 1;
    } else if (dynamic_cast<Pirate*>(other)) {
        // Zombie beats Pirate
        return 1;
    } else if (dynamic_cast<Ninja*>(other)) {
        // Ninja beast Zombie
        return -1;
    } else if (dynamic_cast<Robot*>(other)) {
        // Robot beats Zombie
        return -1;
    } else {
        // All other moves tie with zombie
        return 0;
    }
}