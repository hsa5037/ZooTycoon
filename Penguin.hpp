/*********************************************************************
 ** Program name: Zoo Tycoon
 ** Author: Humza Ahmed
 ** Date:   7/17/18
 ** Description: Definition file for the Penguin Class
 *********************************************************************/

#ifndef Penguin_hpp
#define Penguin_hpp

#include <iostream>
#include "Animal.hpp"

class Penguin : public Animal
{
public:
    Penguin();
    
    virtual int getBaby();
    virtual double getCost();
    virtual double getPayoff();
    virtual double getFoodCost();
    
protected:
    double cost, foodCost;
    int numBabies;
    
private:
    
};

#endif /* Penguin_hpp */
