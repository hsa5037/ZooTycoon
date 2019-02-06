/*********************************************************************
 ** Program name: Zoo Tycoon
 ** Author: Humza Ahmed
 ** Date:   7/17/18
 ** Description: Implementation file for the Animal Class
 *********************************************************************/

#include "Animal.hpp"

Animal::Animal(){
    age = 0;
    foodCost = 10.00;              //Generic feed type
}

//Increments age by 1 day
void Animal::dayPassed(){
    age += 1;
}

//Sets the foodCost base price based on Cheap, Generic, or Premium
void Animal::setFoodCost(int foodType){
    if (foodType == 1)
        foodCost /= 2;
    else if (foodType == 3)
        foodCost *= 2;
}


//Returns foodCost
double Animal::getFoodCost(){
    return foodCost;
}

int Animal::getAge(){
    return age;
}


int Animal::getBaby(){
    return 0;
}
double Animal::getCost(){
    return 0;
}
double Animal::getPayoff(){
    return 0;
}


