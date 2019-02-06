/*********************************************************************
 ** Program name: Zoo Tycoon
 ** Author: Humza Ahmed
 ** Date:   7/17/18
 ** Description: Main function for the Zoo Tycoon program.
 *********************************************************************/

#include <iostream>
#include <sstream>
#include <string>
#include "Zoo.hpp"
#include "Animal.hpp"


int main() {
    
    std::cout << "Welcome to Zoo Tycoon!" << std::endl;
    
    std::string str;
    int menuSelection = 0;
    
    while (menuSelection == 0){
        std::cout << "1. Play Game. " << std::endl;
        std::cout << "2. Exit Game. " << std::endl;
        std::getline(std::cin, str);
        std::stringstream convert(str);
        if ((convert >> menuSelection && !convert.eof()) || (menuSelection != 1 && menuSelection != 2)){
            std::cout << "Error: Invalid Entry! Please enter a 1 or 2" << std::endl;
            menuSelection = 0;
        }
    }
    
    if (menuSelection == 2)
        return 0;
    
    //Creates zoo object
    Zoo zooTycoon;
    
    int day = 2;
    
    //Runs simulation until bankroll hits 0
    while (zooTycoon.getBankRoll() > 0){
        std::cout << "~~~~~~~~~~~~~~~~~~Day " << day << "~~~~~~~~~~~~~~~~~~" << std::endl;
        zooTycoon.ageAnimals();
        std::cout << "All purchased animals have now aged 1 day" << std::endl;
        std::cout << "You have " << zooTycoon.getBankRoll() << " dollars in the bank." << std::endl;
        zooTycoon.setFeedType();
        zooTycoon.subtractFoodCost();
        std::cout << "You now have " << zooTycoon.getBankRoll() << " dollars in the bank." << std::endl;
        
        zooTycoon.purchaseAnimals();
        zooTycoon.randEvent();
        zooTycoon.profit();
        
        //Asks user if they want to buy any adult animals
        int i = 0;
        while (i == 0){
            std::cout << "Would you like to buy any adult animals?" << std::endl;
            std::cout << "1. Yes" << std::endl;
            std::cout << "2. No" << std::endl;
            std::getline(std::cin, str);
            std::stringstream convert(str);
            if ((convert >> i && !convert.eof()) || (i != 1 && i != 2)){
                std::cout << "Error: Invalid Entry! Please enter a 1 or 2" << std::endl;
                i = 0;
            }
        }
        
        if (i == 1)
            zooTycoon.purchaseAdultAnimals();
        i = 0;
        
        std::cout << "~~~~~~~~~~~~~~~~~~The day has ended.~~~~~~~~~~~~~~~~~~" << std::endl;
        
        //Asks if user would like to keep playing
        while (i == 0){
            std::cout << "1. Keep Playing? " << std::endl;
            std::cout << "2. Exit Game. " << std::endl;
            std::getline(std::cin, str);
            std::stringstream convert(str);
            if ((convert >> i && !convert.eof()) || (i != 1 && i != 2)){
                std::cout << "Error: Invalid Entry! Please enter a 1 or 2" << std::endl;
                i = 0;
            }
        }
        if (i == 2)
            return 0;
        day++;
        
    }
    
    //ends game
    if (zooTycoon.getBankRoll() <= 0){
        std::cout << "You have run out of money. Game Over." << std::endl;
        return 0;
    }
    
    return 0;
}
