/*********************************************************************
 ** Program name: Zoo Tycoon
 ** Author: Humza Ahmed
 ** Date:   7/17/18
 ** Description: Implementation file for the Zoo Class
 *********************************************************************/

#include "Zoo.hpp"

Zoo::Zoo(){
    //initialize counters to 0
    tigerCtr = 0;
    penguinCtr = 0;
    turtleCtr = 0;
    newAnimalCtr = 0;
    tigerArraySize = 10;
    penArraySize = 10;
    turArraySize = 10;
    newArraySize = 10;
    tigerCount = new Tiger[tigerArraySize];
    penguinCount = new Penguin[penArraySize];
    turtleCount = new Turtle[turArraySize];
    
    //initialize bankroll to 100,000
    bankRoll = 100000.00;
    
    //Seeds the time for rand
    srand(static_cast<unsigned int>(time(NULL)));
    
    std::cout << "~~~~~~~~~~~~~~~~~~Day 1~~~~~~~~~~~~~~~~~~" << std::endl;
    
    //Pricing list for user
    std::cout << "Animals available for purchase:" << std::endl;
    std::cout << "Tiger: $10,000" << std::endl;
    std::cout << "Penguin: $1,000" << std::endl;
    std::cout << "Turtle: $100" << std::endl;
    std::cout << "Create your own animal: $?????" << std::endl;
    
    //initializes i  and p for loop
    int i = 0;
    int p = 0;
    
    //Prompts for tiger purchases
    while (p == 0){
        std::cout << "Would you like to buy a Tiger for $10,000?" << std::endl;
        std::cout << "1. Yes" << std::endl;
        std::cout << "2. No" << std::endl;
        std::getline(std::cin, str);
        std::stringstream convert(str);
        if ((convert >> p && !convert.eof()) || (p != 1 && p != 2)){
            std::cout << "Error: Invalid Entry! Please enter a 1 or 2" << std::endl;
            p = 0;
        }
        while (i == 0 && p == 1){
            std::cout << "How many tigers would you like to buy? 1 or 2?" << std::endl;
            std::getline(std::cin, str);
            std::stringstream convert(str);
            if ((convert >> i && !convert.eof()) || (i != 1 && i != 2)){
                std::cout << "Error: Invalid Entry! Please enter a 1 or 2" << std::endl;
                i = 0;
            }
        }
    }
    
    
    //Increments tiger count based on user choice
    if (i == 1){
        //tigerCount[0] = new Tiger;
        tigerCtr++;
    }
    else if (i == 2){
        //tigerCount[0] = new Tiger;
        //tigerCount[1] = new Tiger;
        tigerCtr += 2;
    }
    
    //Reintialize i and p
    i = 0;
    p = 0;
    //Prompts for penguin purchases
        while (p == 0){
            std::cout << "Would you like to buy a Penguin for $1,000?" << std::endl;
            std::cout << "1. Yes" << std::endl;
            std::cout << "2. No" << std::endl;
            std::getline(std::cin, str);
            std::stringstream convert(str);
            if ((convert >> p && !convert.eof()) || (p != 1 && p != 2)){
                std::cout << "Error: Invalid Entry! Please enter a 1 or 2" << std::endl;
                p = 0;
            }
            while (i == 0 && p == 1){
                std::cout << "How many penguins would you like to buy? 1 or 2?" << std::endl;
                std::getline(std::cin, str);
                std::stringstream convert(str);
                if ((convert >> i && !convert.eof()) || (i != 1 && i != 2)){
                    std::cout << "Error: Invalid Entry! Please enter a 1 or 2" << std::endl;
                    i = 0;
                }
            }
        }
    //Increments penguin count based on user choice
    if (i == 1){
        //penguinCount[0] = new Penguin;
        penguinCtr++;
    }
    else if (i == 2){
        //penguinCount[0] = new Penguin;
        //penguinCount[1] = new Penguin;
        penguinCtr += 2;
    }
    
    //Reintialize i
    i = 0;
    p = 0;
    //Prompts for turtle purchases
    while (p == 0){
        std::cout << "Would you like to buy a Turtle for $100?" << std::endl;
        std::cout << "1. Yes" << std::endl;
        std::cout << "2. No" << std::endl;
        std::getline(std::cin, str);
        std::stringstream convert(str);
        if ((convert >> p && !convert.eof()) || (p != 1 && p != 2)){
            std::cout << "Error: Invalid Entry! Please enter a 1 or 2" << std::endl;
            p = 0;
        }
        while (i == 0 && p == 1){
            std::cout << "How many turtles would you like to buy? 1 or 2?" << std::endl;
            std::getline(std::cin, str);
            std::stringstream convert(str);
            if ((convert >> i && !convert.eof()) || (i != 1 && i != 2)){
                std::cout << "Error: Invalid Entry! Please enter a 1 or 2" << std::endl;
                i = 0;
            }
        }
    }
    //Increments turtle count based on user choice
    if (i == 1){
        //turtleCount[0] = new Turtle;
        turtleCtr++;
    }
    else if (i == 2){
        //turtleCount[0] = new Turtle;
        //turtleCount[1] = new Turtle;
        turtleCtr += 2;
    }
    
    p = 0;
    i = 0;
    
    //Initialize New Animal Variables
    numBabies = 0;
    foodCost = 0;
    payoff = 0;
    cost = 0;
    //Asks if they'd like to create a new animal
    while (p == 0){
        std::cout << "Would you like to buy a New Animal for $??????" << std::endl;
        std::cout << "1. Yes" << std::endl;
        std::cout << "2. No" << std::endl;
        std::getline(std::cin, str);
        std::stringstream convert(str);
        if ((convert >> p && !convert.eof()) || (p != 1 && p != 2)){
            std::cout << "Error: Invalid Entry! Please enter a 1 or 2" << std::endl;
            p = 0;
        }
        while (p == 1 && i == 0){
            std::cout << "How many New Animals would you like to buy? 1 or 2?" << std::endl;
            std::getline(std::cin, str);
            std::stringstream convert(str);
            if ((convert >> i && !convert.eof()) || (i != 1 && i != 2)){
                std::cout << "Error: Invalid Entry! Please enter a 1 or 2" << std::endl;
                i = 0;
            }
        }
        
        if (p == 1){
            std::cout << "What kind of animal would you like to create?" << std::endl;
            getline(std::cin, name);
            while (numBabies == 0){
                std::cout << "How many babies can a " << name << " have?" << std::endl;
                std::getline(std::cin, str);
                std::stringstream convert(str);
                if ((convert >> numBabies && !convert.eof()) || (numBabies <= 0)){
                    std::cout << "Error: Invalid Entry! Please enter a 1 or 2" << std::endl;
                    numBabies = 0;
                }
            }
            while (foodCost == 0){
                std::cout << "How much does a " << name << "'s food cost?" << std::endl;
                std::getline(std::cin, str);
                std::stringstream convert(str);
                if ((convert >> foodCost && !convert.eof()) || foodCost <= 0){
                    std::cout << "Error: Invalid Entry! Please enter a positive integer" << std::endl;
                    foodCost = 0;
                }
            }
            while (payoff == 0){
                std::cout << "How much money will a " << name << " make for the zoo in one day?" << std::endl;
                std::getline(std::cin, str);
                std::stringstream convert(str);
                if ((convert >> payoff && !convert.eof()) || payoff <= 0 ){
                    std::cout << "Error: Invalid Entry! Please enter a positive integer" << std::endl;
                    payoff = 0;
                }
            }
            while (cost == 0){
                std::cout << "How much money will a " << name << " cost?" << std::endl;
                std::getline(std::cin, str);
                std::stringstream convert(str);
                if ((convert >> cost && !convert.eof()) || cost <= 0){
                    std::cout << "Error: Invalid Entry! Please enter a positive number" << std::endl;
                    cost = 0;
                }
            }
        }
    }
    
    newAnimalCount = new NewAnimal [newArraySize]();
    for (int k = 0; k < newArraySize; k++)
        newAnimalCount[k] = NewAnimal(numBabies, foodCost, payoff, cost);
    
    //Creates newanimal based on user input
    if (i == 1){
        //newAnimalCount[0] = NewAnimal(numBabies, foodCost, payoff, cost);
        newAnimalCtr++;
    }
    else if (i == 2){
        //newAnimalCount[0] = new NewAnimal(numBabies, foodCost, payoff, cost);
        //newAnimalCount[1] = new NewAnimal(numBabies, foodCost, payoff, cost);
        newAnimalCtr += 2;
    }
    

    feedType = 0;
    
    //Subtracts prices from bankroll for each purchase and ages the animals a day
    for (i = 0; i < tigerCtr; i++){
        bankRoll -= tigerCount[i].getCost();
        //tigerCount[i]->dayPassed();
    }
    for (i = 0; i < penguinCtr; i++){
        bankRoll -= penguinCount[i].getCost();
        //penguinCount[i]->dayPassed();
    }
    for (i = 0; i < turtleCtr; i++){
        bankRoll -= turtleCount[i].getCost();
        //turtleCount[i]->dayPassed();
    }
    for (i = 0; i < newAnimalCtr; i++){
        bankRoll -= newAnimalCount[i].getCost();
        //newAnimalCount[i]->dayPassed();
    }
    
    setFeedType();
    subtractFoodCost();
    std::cout << "You now have $" << bankRoll << " dollars in the bank." << std::endl;
    randEvent();
    profit();
    std::cout << "~~~~~~~~~~~~~~~~~~The first day has ended~~~~~~~~~~~~~~~~~~" << std::endl;
    
}


double Zoo::getBankRoll(){
    return bankRoll;
}


void Zoo::setFeedType(){
    while (feedType == 0){
        std::cout << "What kind of food would you like to give the animals today?" << std::endl;
        std::cout << "1. Cheap: Half as expensive, sickness becomes twice as likely to occur." << std::endl;
        std::cout << "2. Generic: behaves normally." << std::endl;
        std::cout << "3. Premium: Twice as expensive, sickness half as likely to occur." << std::endl;
        std::getline(std::cin, str);
        std::stringstream convert(str);
        if ((convert >> feedType && !convert.eof()) || (feedType < 1 || feedType > 3)){
            std::cout << "Error: Invalid Entry! Please enter a 1 or 2" << std::endl;
            feedType = 0;
        }
    }
    
    //Sets Tiger feedtype
    for (int i = 0; i < tigerCtr; i++){
        tigerCount[i].setFoodCost(feedType);
    }
    
    //Sets Penguin feedtype
    for (int i = 0; i < penguinCtr; i++){
        penguinCount[i].setFoodCost(feedType);
    }
    
    //Sets Turtle feedtype
    for (int i = 0; i < turtleCtr; i++){
        turtleCount[i].setFoodCost(feedType);
    }
    
    //Sets New Animal feedtype
    for (int i = 0; i < newAnimalCtr; i++){
        newAnimalCount[i].setFoodCost(feedType);
    }
    
    //resets feedtype
    //feedType = 0;
}

//Subtracts daily cost of food from bankroll
void Zoo::subtractFoodCost(){
    //Subtracts tiger food cost from bankroll
    for (int i = 0; i < tigerCtr; i++){
        bankRoll -= tigerCount[i].getFoodCost();
    }
    
    //Subtracts penguin food cost from bankroll
    for (int i = 0; i < penguinCtr; i++){
        bankRoll -= penguinCount[i].getFoodCost();
    }
    
    //Subtracts turtle food cost from bankroll
    for (int i = 0; i < turtleCtr; i++){
        bankRoll -= turtleCount[i].getFoodCost();
    }
    
    //Subtracts new animal food cost from bankroll
    if (numBabies > 0){
        for (int i = 0; i < newAnimalCtr; i++){
            bankRoll -= newAnimalCount[i].getFoodCost();
        }
    }
}

//Ages animals a day and allows user to purchase new ones
void Zoo::ageAnimals(){
    //Ages animals a day
    for (int i = 0; i < tigerCtr; i++){
        tigerCount[i].dayPassed();
    }
    for (int i = 0; i < penguinCtr; i++){
        penguinCount[i].dayPassed();
    }
    for (int i = 0; i < turtleCtr; i++){
        turtleCount[i].dayPassed();
    }
    for (int i = 0; i < newAnimalCtr; i++){
        newAnimalCount[i].dayPassed();
    }
}

void Zoo::purchaseAnimals(){
    //Pricing list for user
    std::cout << "Animals available for purchase:" << std::endl;
    std::cout << "Tiger: $10000" << std::endl;
    std::cout << "Penguin: $1000" << std::endl;
    std::cout << "Turtle: $100" << std::endl;
    if (numBabies > 0)
        std::cout << name << ": $" <<newAnimalCount[0].getCost() << std::endl;
    
    //initializes i  and p for loop
    int i = 0;
    int p = 0;
    
    //Prompts for tiger purchases
    while (p == 0){
        std::cout << "Would you like to buy a Tiger for $10,000?" << std::endl;
        std::cout << "1. Yes" << std::endl;
        std::cout << "2. No" << std::endl;
        std::getline(std::cin, str);
        std::stringstream convert(str);
        if ((convert >> p && !convert.eof()) || (p != 1 && p != 2)){
            std::cout << "Error: Invalid Entry! Please enter a 1 or 2" << std::endl;
            p = 0;
        }
        while (i == 0 && p == 1){
            std::cout << "How many tigers would you like to buy? 1 or 2?" << std::endl;
            std::getline(std::cin, str);
            std::stringstream convert(str);
            if ((convert >> i && !convert.eof()) || (i != 1 && i != 2)){
                std::cout << "Error: Invalid Entry! Please enter a 1 or 2" << std::endl;
                i = 0;
            }
        }
    }
    
    //Increments Tiger count based on user choice
    if (i == 1)
        tigerCtr++;
    else if (i == 2)
        tigerCtr += 2;
    
    //Resizes array if necessary
    if (tigerCtr >= tigerArraySize){
        tigerArraySize *= 2;
        Tiger *resized = new Tiger[tigerArraySize];
        for (int i = 0; i < tigerArraySize; i++)
            resized[i] = tigerCount[i];
        delete [] tigerCount;
        tigerCount = new Tiger [tigerArraySize];
        for (int i = 0; i < tigerArraySize; i++)
            tigerCount[i] = resized [i];
        delete [] resized;
    }
    
    
    //reinitializes i  and p for loop
    i = 0;
    p = 0;
    
    //Prompts for penguin purchases
    while (p == 0){
        std::cout << "Would you like to buy a Penguin for $1000?" << std::endl;
        std::cout << "1. Yes" << std::endl;
        std::cout << "2. No" << std::endl;
        std::getline(std::cin, str);
        std::stringstream convert(str);
        if ((convert >> p && !convert.eof()) || (p != 1 && p != 2)){
            std::cout << "Error: Invalid Entry! Please enter a 1 or 2" << std::endl;
            p = 0;
        }
        while (i == 0 && p == 1){
            std::cout << "How many penguins would you like to buy? 1 or 2?" << std::endl;
            std::getline(std::cin, str);
            std::stringstream convert(str);
            if ((convert >> i && !convert.eof()) || (i != 1 && i != 2)){
                std::cout << "Error: Invalid Entry! Please enter a 1 or 2" << std::endl;
                i = 0;
            }
        }
    }
    
    //Increments penguin count based on user choice
    if (i == 1)
        penguinCtr++;
    else if (i == 2)
        penguinCtr += 2;
    
    //Resizes array if necessary
    if (penguinCtr >= penArraySize){
        penArraySize *= 2;
        Penguin *resized = new Penguin[penArraySize];
        for (int i = 0; i < penArraySize; i++)
            resized[i] = penguinCount[i];
        delete [] penguinCount;
        penguinCount = new Penguin [penArraySize];
        for (int i = 0; i < penArraySize; i++)
            penguinCount[i] = resized [i];
        delete [] resized;
    }
    
    
    
    
    //reinitializes i  and p for loop
    i = 0;
    p = 0;
    
    //Prompts for turtle purchases
    while (p == 0){
        std::cout << "Would you like to buy a Turtle for $100?" << std::endl;
        std::cout << "1. Yes" << std::endl;
        std::cout << "2. No" << std::endl;
        std::getline(std::cin, str);
        std::stringstream convert(str);
        if ((convert >> p && !convert.eof()) || (p != 1 && p != 2)){
            std::cout << "Error: Invalid Entry! Please enter a 1 or 2" << std::endl;
            p = 0;
        }
        while (i == 0 && p == 1){
            std::cout << "How many turtles would you like to buy? 1 or 2?" << std::endl;
            std::getline(std::cin, str);
            std::stringstream convert(str);
            if ((convert >> i && !convert.eof()) || (i != 1 && i != 2)){
                std::cout << "Error: Invalid Entry! Please enter a 1 or 2" << std::endl;
                i = 0;
            }
        }
    }
    
    //Increments turtle count based on user choice
    if (i == 1)
        turtleCtr++;
    else if (i == 2)
        turtleCtr += 2;
    
    //Resizes array if necessary
    if (turtleCtr >= turArraySize){
        turArraySize *= 2;
        Turtle *resized = new Turtle[turArraySize];
        for (int i = 0; i < turArraySize; i++)
            resized[i] = turtleCount[i];
        delete [] turtleCount;
        turtleCount = new Turtle [turArraySize];
        for (int i = 0; i < turArraySize; i++)
            turtleCount[i] = resized [i];
        delete [] resized;
    }

    
    //reinitializes i  and p for loop
    i = 0;
    p = 0;
    
    //Prompts for new animal purchases
    if (numBabies > 0){
        while (p == 0){
            std::cout << "Would you like to buy a " << name << " for $" << newAnimalCount[0].getCost() << "?" << std::endl;
            std::cout << "1. Yes" << std::endl;
            std::cout << "2. No" << std::endl;
            std::getline(std::cin, str);
            std::stringstream convert(str);
            if ((convert >> p && !convert.eof()) || (p != 1 && p != 2)){
                std::cout << "Error: Invalid Entry! Please enter a 1 or 2" << std::endl;
                p = 0;
            }
            while (i == 0 && p == 1){
                std::cout << "How many " << name << "'s would you like to buy? 1 or 2?" << std::endl;
                std::getline(std::cin, str);
                std::stringstream convert(str);
                if ((convert >> i && !convert.eof()) || (i != 1 && i != 2)){
                    std::cout << "Error: Invalid Entry! Please enter a 1 or 2" << std::endl;
                    i = 0;
                }
            }
        }
    
        //Increments new animal count based on user choice
        if (i == 1)
            newAnimalCtr++;
        else if (i == 2)
            newAnimalCtr += 2;
    
        //Resizes array if necessary
        if (newAnimalCtr >= newArraySize){
            newArraySize *= 2;
            NewAnimal *resized = new NewAnimal[newArraySize];
            for (int i = 0; i < newArraySize; i++)
                resized[i] = newAnimalCount[i];
            delete [] turtleCount;
            newAnimalCount = new NewAnimal [newArraySize];
            for (int i = 0; i < newArraySize; i++)
                newAnimalCount[i] = resized [i];
            delete [] resized;
        }
    }
    
    //Subtracts prices from bankroll for each purchase and ages the animals a day
    for (i = 0; i < tigerCtr; i++){
        bankRoll -= tigerCount[i].getCost();
        //tigerCount[i]->dayPassed();
    }
    for (i = 0; i < penguinCtr; i++){
        bankRoll -= penguinCount[i].getCost();
        //penguinCount[i]->dayPassed();
    }
    for (i = 0; i < turtleCtr; i++){
        bankRoll -= turtleCount[i].getCost();
        //turtleCount[i]->dayPassed();
    }
    for (i = 0; i < newAnimalCtr; i++){
        bankRoll -= newAnimalCount[i].getCost();
        //newAnimalCount[i]->dayPassed();
    }
}

//Deletes dynamically allocated memory
Zoo::~Zoo(){
    delete [] tigerCount;
    delete [] penguinCount;
    delete [] turtleCount;
    delete [] newAnimalCount;
}

void Zoo::purchaseAdultAnimals(){
    //Pricing list for user
    std::cout << "Animals available for purchase:" << std::endl;
    std::cout << "Tiger: $10000" << std::endl;
    std::cout << "Penguin: $1000" << std::endl;
    std::cout << "Turtle: $100" << std::endl;
    if (numBabies > 0)
        std::cout << name << ": $" <<newAnimalCount[0].getCost() << std::endl;
    
    //initializes i  and p for loop
    int i = 0;
    int p = 0;
    
    //Prompts for tiger purchases
    while (p == 0){
        std::cout << "Would you like to buy a Tiger for $10,000?" << std::endl;
        std::cout << "1. Yes" << std::endl;
        std::cout << "2. No" << std::endl;
        std::getline(std::cin, str);
        std::stringstream convert(str);
        if ((convert >> p && !convert.eof()) || (p != 1 && p != 2)){
            std::cout << "Error: Invalid Entry! Please enter a 1 or 2" << std::endl;
            p = 0;
        }
        while (i == 0 && p == 1){
            std::cout << "How many tigers would you like to buy? 1 or 2?" << std::endl;
            std::getline(std::cin, str);
            std::stringstream convert(str);
            if ((convert >> i && !convert.eof()) || (i != 1 && i != 2)){
                std::cout << "Error: Invalid Entry! Please enter a 1 or 2" << std::endl;
                i = 0;
            }
        }
    }
    
    //Increments Tiger count and age based on user choice
    if (i == 1){
        tigerCount[tigerCtr].dayPassed();
        tigerCount[tigerCtr].dayPassed();
        tigerCount[tigerCtr].dayPassed();
        tigerCtr++;
    }
    else if (i == 2){
        tigerCount[tigerCtr].dayPassed();
        tigerCount[tigerCtr].dayPassed();
        tigerCount[tigerCtr].dayPassed();
        tigerCtr++;
        tigerCount[tigerCtr].dayPassed();
        tigerCount[tigerCtr].dayPassed();
        tigerCount[tigerCtr].dayPassed();
        tigerCtr++;
    }
    
    //Resizes array if necessary
    if (tigerCtr >= tigerArraySize){
        tigerArraySize *= 2;
        Tiger *resized = new Tiger[tigerArraySize];
        for (int i = 0; i < tigerArraySize; i++)
            resized[i] = tigerCount[i];
        delete [] tigerCount;
        tigerCount = new Tiger [tigerArraySize];
        for (int i = 0; i < tigerArraySize; i++)
            tigerCount[i] = resized [i];
        delete [] resized;
    }
    
    //reinitializes i  and p for loop
    i = 0;
    p = 0;
    
    //Prompts for penguin purchases
    while (p == 0){
        std::cout << "Would you like to buy a Penguin for $1000?" << std::endl;
        std::cout << "1. Yes" << std::endl;
        std::cout << "2. No" << std::endl;
        std::getline(std::cin, str);
        std::stringstream convert(str);
        if ((convert >> p && !convert.eof()) || (p != 1 && p != 2)){
            std::cout << "Error: Invalid Entry! Please enter a 1 or 2" << std::endl;
            p = 0;
        }
        while (i == 0 && p == 1){
            std::cout << "How many penguins would you like to buy? 1 or 2?" << std::endl;
            std::getline(std::cin, str);
            std::stringstream convert(str);
            if ((convert >> i && !convert.eof()) || (i != 1 && i != 2)){
                std::cout << "Error: Invalid Entry! Please enter a 1 or 2" << std::endl;
                i = 0;
            }
        }
    }
    
    //Increments penguin count and age based on user choice
    if (i == 1){
        penguinCount[penguinCtr].dayPassed();
        penguinCount[penguinCtr].dayPassed();
        penguinCount[penguinCtr].dayPassed();
        penguinCtr++;
    }
    else if (i == 2){
        penguinCount[penguinCtr].dayPassed();
        penguinCount[penguinCtr].dayPassed();
        penguinCount[penguinCtr].dayPassed();
        penguinCtr++;
        penguinCount[penguinCtr].dayPassed();
        penguinCount[penguinCtr].dayPassed();
        penguinCount[penguinCtr].dayPassed();
        penguinCtr++;
    }
    
    
    //Resizes array if necessary
    if (penguinCtr >= penArraySize){
        penArraySize *= 2;
        Penguin *resized = new Penguin[penArraySize];
        for (int i = 0; i < penArraySize; i++)
            resized[i] = penguinCount[i];
        delete [] penguinCount;
        penguinCount = new Penguin [penArraySize];
        for (int i = 0; i < penArraySize; i++)
            penguinCount[i] = resized [i];
        delete [] resized;
    }
    
    //reinitializes i  and p for loop
    i = 0;
    p = 0;
    
    //Prompts for turtle purchases
    while (p == 0){
        std::cout << "Would you like to buy a Turtle for $100?" << std::endl;
        std::cout << "1. Yes" << std::endl;
        std::cout << "2. No" << std::endl;
        std::getline(std::cin, str);
        std::stringstream convert(str);
        if ((convert >> p && !convert.eof()) || (p != 1 && p != 2)){
            std::cout << "Error: Invalid Entry! Please enter a 1 or 2" << std::endl;
            p = 0;
        }
        while (i == 0 && p == 1){
            std::cout << "How many turtles would you like to buy? 1 or 2?" << std::endl;
            std::getline(std::cin, str);
            std::stringstream convert(str);
            if ((convert >> i && !convert.eof()) || (i != 1 && i != 2)){
                std::cout << "Error: Invalid Entry! Please enter a 1 or 2" << std::endl;
                i = 0;
            }
        }
    }
    
    //Increments turtle count and age based on user choice
    if (i == 1){
        turtleCount[turtleCtr].dayPassed();
        turtleCount[turtleCtr].dayPassed();
        turtleCount[turtleCtr].dayPassed();
        turtleCtr++;
    }
    else if (i == 2){
        turtleCount[turtleCtr].dayPassed();
        turtleCount[turtleCtr].dayPassed();
        turtleCount[turtleCtr].dayPassed();
        turtleCtr++;
        turtleCount[turtleCtr].dayPassed();
        turtleCount[turtleCtr].dayPassed();
        turtleCount[turtleCtr].dayPassed();
        turtleCtr++;
    }
    
    //Resizes array if necessary
    if (turtleCtr >= turArraySize){
        turArraySize *= 2;
        Turtle *resized = new Turtle[turArraySize];
        for (int i = 0; i < turArraySize; i++)
            resized[i] = turtleCount[i];
        delete [] turtleCount;
        turtleCount = new Turtle [turArraySize];
        for (int i = 0; i < turArraySize; i++)
            turtleCount[i] = resized [i];
        delete [] resized;
    }
    
    //reinitializes i  and p for loop
    i = 0;
    p = 0;
    
    //Prompts for new animal purchases
    if (numBabies > 0){
        while (p == 0){
            std::cout << "Would you like to buy a " << name << " for $" << newAnimalCount[0].getCost() << "?" << std::endl;
            std::cout << "1. Yes" << std::endl;
            std::cout << "2. No" << std::endl;
            std::getline(std::cin, str);
            std::stringstream convert(str);
            if ((convert >> p && !convert.eof()) || (p != 1 && p != 2)){
                std::cout << "Error: Invalid Entry! Please enter a 1 or 2" << std::endl;
                p = 0;
            }
            while (i == 0 && p == 1){
                std::cout << "How many " << name << "'s would you like to buy? 1 or 2?" << std::endl;
                std::getline(std::cin, str);
                std::stringstream convert(str);
                if ((convert >> i && !convert.eof()) || (i != 1 && i != 2)){
                    std::cout << "Error: Invalid Entry! Please enter a 1 or 2" << std::endl;
                    i = 0;
                }
            }
        }
        
        //Increments new animal count and age based on user choice
        if (i == 1){
            newAnimalCount[newAnimalCtr].dayPassed();
            newAnimalCount[newAnimalCtr].dayPassed();
            newAnimalCount[newAnimalCtr].dayPassed();
            newAnimalCtr++;
        }
        else if (i == 2){
            newAnimalCount[newAnimalCtr].dayPassed();
            newAnimalCount[newAnimalCtr].dayPassed();
            newAnimalCount[newAnimalCtr].dayPassed();
            newAnimalCtr++;
            newAnimalCount[newAnimalCtr].dayPassed();
            newAnimalCount[newAnimalCtr].dayPassed();
            newAnimalCount[newAnimalCtr].dayPassed();
            newAnimalCtr++;
        }
        
        //Resizes array if necessary
        if (newAnimalCtr >= newArraySize){
            newArraySize *= 2;
            NewAnimal *resized = new NewAnimal[newArraySize];
            for (int i = 0; i < newArraySize; i++)
                resized[i] = newAnimalCount[i];
            delete [] turtleCount;
            newAnimalCount = new NewAnimal [newArraySize];
            for (int i = 0; i < newArraySize; i++)
                newAnimalCount[i] = resized [i];
            delete [] resized;
        }
    }
    
    //Subtracts prices from bankroll for each purchase and ages the animals a day
    for (i = 0; i < tigerCtr; i++){
        bankRoll -= tigerCount[i].getCost();
        //tigerCount[i]->dayPassed();
    }
    for (i = 0; i < penguinCtr; i++){
        bankRoll -= penguinCount[i].getCost();
        //penguinCount[i]->dayPassed();
    }
    for (i = 0; i < turtleCtr; i++){
        bankRoll -= turtleCount[i].getCost();
        //turtleCount[i]->dayPassed();
    }
    for (i = 0; i < newAnimalCtr; i++){
        bankRoll -= newAnimalCount[i].getCost();
        //newAnimalCount[i]->dayPassed();
    }
}

void Zoo::profit(){
    double profit = (tigerCtr * tigerCount[0].getPayoff()) + (penguinCtr * penguinCount[0].getPayoff()) + (turtleCtr * turtleCount[0].getPayoff()) + (newAnimalCtr * newAnimalCount[0].getPayoff());
    profit += bonus;
    std::cout << "Your profit for the day is $" << profit << std::endl;
    bankRoll += profit;
    bonus = 0;
}

void Zoo::randEvent(){
    int randNum = 0;
    
    if (feedType == 1)
        randNum = 1 + rand()%(7+1)-1;
    else if (feedType == 2)
        randNum = 1 + rand()%(6+1)-1;       //picks random int depending on feedtype
    else if (feedType == 3)
        randNum = 1 + rand()%(5+1)-1;
    std::cout << "randNum is " << randNum << std::endl;
    std::cout << "feedtype is " << feedType << std::endl;
    
    //Sickness event
    if (randNum == 1 || randNum == 6 || randNum == 7){
        int randAnimalDie = 1 + rand()%(4+1)-1;
        std::cout << "randanimaldie " << randAnimalDie << std::endl;
        while  (randAnimalDie > 0){
            if (randAnimalDie == 1 && tigerCtr > 0){
                tigerCtr--;
                std::cout << "Oh no! One of your tigers has contracted an illness and died!" <<std::endl;
                break;
            }
            else if  (randAnimalDie == 2 && penguinCtr > 0){
                penguinCtr--;
                std::cout << "Oh no! One of your penguins has contracted an illness and died!" <<std::endl;
                break;
            }
            else if (randAnimalDie == 3 && turtleCtr > 0){
                turtleCtr--;
                std::cout << "Oh no! One of your turtles has contracted an illness and died!" <<std::endl;
                break;
            }
            else if (randAnimalDie == 4 && newAnimalCtr > 0){
                newAnimalCtr--;
                std::cout << "Oh no! One of your " << name << "s has contracted an illness and died!" <<std::endl;
                break;
            }
            else if (tigerCtr <= 0 && penguinCtr <= 0 && turtleCtr <= 0 && newAnimalCtr <= 0){
                std::cout << "You have no animals! No animals got sick!" << std::endl;
                break;
            }
            else
                randAnimalDie = 1 + rand()%(4+1)-1;
        }
    }
    else if (randNum == 2 || randNum == 5){
        int randBonus = 250 + rand()%(500+1)-250;
        bonus = randBonus * tigerCtr;
        std::cout << "A boom in zoo attendance has occurred! You receive a bonus of $" << randBonus << " per tiger in the zoo!" << std::endl;
    }
    else if (randNum == 3 || randNum == 4){
        int randBaby = 1 + rand()%(4+1)-1;
        int ctr = 0;
        while (randBaby >= 1 && randBaby <= 4){
            if (randBaby == 1){
                for (int i = 0; i < tigerCtr; i++){
                    if (tigerCount[i].getAge() >= 3){
                        tigerCtr++;
                        //Resizes array if necessary
                        if (tigerCtr >= tigerArraySize){
                            tigerArraySize *= 2;
                            Tiger *resized = new Tiger[tigerArraySize];
                            for (int i = 0; i < tigerArraySize; i++)
                                resized[i] = tigerCount[i];
                            delete [] tigerCount;
                            tigerCount = new Tiger [tigerArraySize];
                            for (int i = 0; i < tigerArraySize; i++)
                                tigerCount[i] = resized [i];
                            delete [] resized;
                        }
                        std::cout << "A tiger has had a baby! Your tiger count has increase by 1" << std::endl;
                        randBaby = 0;
                        break;
                    }
                }
            }
            if (randBaby == 2){
                for (int i = 0; i < penguinCtr; i++){
                    if (penguinCount[i].getAge() >= 3){
                        penguinCtr += 5;
                        //Resizes array if necessary
                        if (penguinCtr >= penArraySize){
                            penArraySize *= 2;
                            Penguin *resized = new Penguin[penArraySize];
                            for (int i = 0; i < penArraySize; i++)
                                resized[i] = penguinCount[i];
                            delete [] penguinCount;
                            penguinCount = new Penguin [penArraySize];
                            for (int i = 0; i < penArraySize; i++)
                                penguinCount[i] = resized [i];
                            delete [] resized;
                        }
                        std::cout << "A penguin has had a baby! Your penguin count has increase by 5" << std::endl;
                        randBaby = 0;
                        break;
                    }
                }
            }
            if (randBaby == 3){
                for (int i = 0; i < turtleCtr; i++){
                    if (turtleCount[i].getAge() >= 3){
                        turtleCtr += 10;
                        //Resizes array if necessary
                        if (turtleCtr >= turArraySize){
                            turArraySize *= 2;
                            Turtle *resized = new Turtle[turArraySize];
                            for (int i = 0; i < turArraySize; i++)
                                resized[i] = turtleCount[i];
                            delete [] turtleCount;
                            turtleCount = new Turtle [turArraySize];
                            for (int i = 0; i < turArraySize; i++)
                                turtleCount[i] = resized [i];
                            delete [] resized;
                        }
                        std::cout << "A turtle has had a baby! Your turtle count has increase by 10" << std::endl;
                        randBaby = 0;
                        break;
                    }
                }
            }
            if (randBaby == 4){
                for (int i = 0; i < newAnimalCtr; i++){
                    if (newAnimalCount[i].getAge() >= 3){
                        newAnimalCtr++;
                        //Resizes array if necessary
                        if (newAnimalCtr >= newArraySize){
                            newArraySize *= 2;
                            NewAnimal *resized = new NewAnimal[newArraySize];
                            for (int i = 0; i < newArraySize; i++)
                                resized[i] = newAnimalCount[i];
                            delete [] turtleCount;
                            newAnimalCount = new NewAnimal [newArraySize];
                            for (int i = 0; i < newArraySize; i++)
                                newAnimalCount[i] = resized [i];
                            delete [] resized;
                        }
                        std::cout << "A " << name << " has had a baby! Your " << name << " count has increase by 1" << std::endl;
                        randBaby = 0;
                        break;
                    }
                }
            }
            ctr++;
            if (ctr == 10){
                std::cout << "No animals are old enough to have babies!" << std::endl;
                break;
            }
        }
    }
    feedType = 0;
}

