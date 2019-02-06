/*********************************************************************
 ** Program name: Zoo Tycoon
 ** Author: Humza Ahmed
 ** Date:   7/17/18
 ** Description: Implementation file for the Turtle Class
 *********************************************************************/

#include "Turtle.hpp"

Turtle::Turtle() : Animal (){
    cost = 100;
    numBabies = 10;
    foodCost = Animal::getFoodCost() / 2;
}

int Turtle::getBaby(){
    return numBabies;
}


double Turtle::getCost(){
    return cost;
}

double Turtle::getPayoff(){
    int payoff;
    payoff = cost * .05;
    return payoff;
}

double Turtle::getFoodCost(){
    return foodCost;
}
