#include "Robot.h"
#include "Ninja.h"
#include "Robot.h"
#include "Zombie.h"
#include "Monkey.h"
#include "Pirate.h"

#include <cstdlib>

using namespace std;

Robot::Robot() {}

string Robot::getName(){
    return "Robot";
}

int Robot::compare(Move* other){
    if (dynamic_cast<Ninja*>(other)) {
        //  Robot wins against Ninja
        return 1;
    } else if (dynamic_cast<Zombie*>(other)) {
        // Robot wins against Zombie
        return 1;
    } else if (dynamic_cast<Pirate*>(other)) {
        // Robot loses to Pirate
        return -1;
    } else if (dynamic_cast<Monkey*>(other)) {
        // Robot loses to Monkey
        return -1;
    } else {
        // All other moves tie with Robot
        return 0;
    }
}