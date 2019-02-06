/*********************************************************************
 ** Program name: Zoo Tycoon
 ** Author: Humza Ahmed
 ** Date:   7/17/18
 ** Description: Definition file for the Tiger Class
 *********************************************************************/

#ifndef Tiger_hpp
#define Tiger_hpp

#include <iostream>
#include "Animal.hpp"

class Tiger : public Animal
{
public:
    Tiger();
    
    virtual int getBaby();
    virtual double getCost();
    virtual double getPayoff();
    virtual double getFoodCost();
    
protected:
    int cost, numBabies, foodCost;
    
private:
    
};

#endif /* Tiger_hpp */
