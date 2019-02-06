/*********************************************************************
 ** Program name: Zoo Tycoon
 ** Author: Humza Ahmed
 ** Date:   7/17/18
 ** Description: Definition file for the Chimpanzee Class
 *********************************************************************/

#ifndef NewAnimal_hpp
#define NewAnimal_hpp

#include <iostream>
#include "Animal.hpp"

class NewAnimal : public Animal
{
public:
    NewAnimal();
    NewAnimal(int babies, double foodPrice, double payoffAmt, double cost);
    
    virtual int getBaby();
    virtual double getCost();
    virtual double getPayoff();
    virtual double getFoodCost();
    
protected:
    int numBabies;
    double cost, foodCost, payoff;
    
private:
    
};

#endif /* Chimpanzee_hpp */
