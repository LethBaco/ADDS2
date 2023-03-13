#include "Human.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Pirate.h"
#include "Monkey.h"
#include "Zombie.h"
#include "Robot.h"
#include "Ninja.h"

#include <iostream>
#include <algorithm>
#include <random>
#include <chrono>

using namespace std;

Human::Human(string name) : name_(name) {}

Move* Human::makeMove(){
    string moveName;
    cout << "Enter Move: ";
    cin >> moveName;

    transform(moveName.begin(), moveName.end(), moveName.begin(), ::tolower);


    if (moveName == "rock") {
        return new Rock();
    } else if (moveName == "paper") {
        return new Paper();
    } else if (moveName == "scissors") {
        return new Scissors();
    } else if (moveName == "robot") {
        return new Robot();
    } else if (moveName == "monkey") {
        return new Monkey();
    } else if (moveName == "pirate") {
        return new Pirate();
    } else if (moveName == "ninja") {
        return new Ninja();
    } else if (moveName == "zombie") {
        return new Zombie();
    } else {
    return nullptr; 
    }
}

string Human::getName(){
    return name_;
}