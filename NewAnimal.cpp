/*********************************************************************
 ** Program name: Zoo Tycoon
 ** Author: Humza Ahmed
 ** Date:   7/17/18
 ** Description: Implementation file for the Chimpanzee Class
 *********************************************************************/

#include "NewAnimal.hpp"


NewAnimal::NewAnimal() : Animal(){
    cost = 0;
    numBabies = 0;
    foodCost = 0;
    payoff = 0;
}



NewAnimal::NewAnimal(int babies, double foodPrice, double payoffAmt, double price) : Animal(){
    cost = price;
    numBabies = babies;
    foodCost = foodPrice;
    payoff = payoffAmt;
}

int NewAnimal::getBaby(){
    return numBabies;
}

double NewAnimal::getCost(){
    return cost;
}

double NewAnimal::getPayoff(){
    return payoff;
}

double NewAnimal::getFoodCost(){
    return foodCost;
}
