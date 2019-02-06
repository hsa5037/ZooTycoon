/*********************************************************************
** Program name: Zoo Tycoon
** Author: Humza Ahmed
** Date:   7/17/18
** Description: Definition file for the Turtle Class
*********************************************************************/

#ifndef Turtle_hpp
#define Turtle_hpp

#include <iostream>
#include "Animal.hpp"

class Turtle : public Animal
{
public:
    Turtle();
    
    virtual int getBaby();
    virtual double getCost();
    virtual double getPayoff();
    virtual double getFoodCost();
    
    
protected:
    double cost, foodCost;
    int numBabies;
    
private:
    
};

#endif /* Turtle_hpp */
