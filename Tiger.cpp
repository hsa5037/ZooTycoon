/*********************************************************************
 ** Program name: Zoo Tycoon
 ** Author: Humza Ahmed
 ** Date:   7/17/18
 ** Description: Implementation file for the Tiger Class
 *********************************************************************/

#include "Tiger.hpp"

Tiger::Tiger() : Animal (){
    cost = 10000;
    numBabies = 1;
    foodCost = Animal::getFoodCost() * 5;
}


int Tiger::getBaby(){
    return numBabies;
}


double Tiger::getCost(){
    return cost;
}

double Tiger::getPayoff(){
    int payoff;
    payoff = cost * .2;
    return payoff;
}

double Tiger::getFoodCost(){
    return foodCost;
}


