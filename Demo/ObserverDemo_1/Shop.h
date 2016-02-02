#pragma once
#include <iostream>
#include <string>
#include "IObserver.h"

class Shop : IObserver
{
public:
    Shop(std::string n);
    void update(float price);

private:
    //Name of the Shop
    std::string name;
    float price;
};
