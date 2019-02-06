/*********************************************************************
 ** Program name: Zoo Tycoon
 ** Author: Humza Ahmed
 ** Date:   7/17/18
 ** Description: Definition file for the Zoo Class
 *********************************************************************/

#ifndef Zoo_hpp
#define Zoo_hpp

#include <iostream>
#include "Tiger.hpp"
#include "Penguin.hpp"
#include "Turtle.hpp"
#include "NewAnimal.hpp"
#include "Animal.hpp"
#include <ctime>
#include <cstdlib>

class Zoo
{
private:
    int feedType, tigerCtr, penguinCtr, turtleCtr, newAnimalCtr, tigerArraySize, penArraySize, turArraySize, newArraySize;
    Tiger *tigerCount;
    Penguin *penguinCount;
    Turtle *turtleCount;
    NewAnimal *newAnimalCount;
    double bankRoll, bonus;
    std::string str;
    
    //Variables for New Animal
    std::string name;
    int numBabies;
    double foodCost, payoff, cost;
    
    
public:
    //Constructor and Destructor
    Zoo();
    ~Zoo();
    
    //Member functions
    double getBankRoll();
    void setFeedType();
    void randEvent();
    void ageAnimals();
    void subtractFoodCost();
    void purchaseAnimals();
    void purchaseAdultAnimals();
    void profit();
};





#endif /* Zoo_hpp */
