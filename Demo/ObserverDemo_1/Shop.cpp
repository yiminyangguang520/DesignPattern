#include "Shop.h"

Shop::Shop(std::string name)
{
    this->name = name;
}

void Shop::update(float price)
{
    this->price = price;

    //Lets print on console just to test the working
    std::cout << "Price at " << name << " is now " << price << "\n";
}