/*********************************************************************
 ** Program name: Zoo Tycoon
 ** Author: Humza Ahmed
 ** Date:   7/17/18
 ** Description: Definition file for the Animal Class
 *********************************************************************/

#ifndef Animal_hpp
#define Animal_hpp
#include <iostream>
#include <string>
#include <sstream>


class Animal
{
private:
    int age;
    double foodCost;
    
public:
    //Constructor
    Animal();
    
    //Member functions
    void dayPassed();
    int getAge();
    virtual int getBaby();
    virtual double getCost();
    virtual double getPayoff();
    virtual double getFoodCost();
    void setFoodCost(int foodType);
    
    
    
    
};

#endif /* Animal_hpp */
