/*********************************************************************
 ** Program name: Zoo Tycoon
 ** Author: Humza Ahmed
 ** Date:   7/17/18
 ** Description: Implementation file for the Penguin Class
 *********************************************************************/

#include "Penguin.hpp"

Penguin::Penguin() : Animal (){
    cost = 1000;
    numBabies = 5;
    foodCost = Animal::getFoodCost();
}

int Penguin::getBaby(){
    return numBabies;
}


double Penguin::getCost(){
    return cost;
}

double Penguin::getPayoff(){
    int payoff;
    payoff = cost * .1;
    return payoff;
}

double Penguin::getFoodCost(){
    return foodCost;
}
