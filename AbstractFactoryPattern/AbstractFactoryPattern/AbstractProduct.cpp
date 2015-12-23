#include "stdafx.h"
#include "AbstractProduct.h"
#include <iostream>

AbstractProductA::AbstractProductA()
{
    std::cout << "Construct AbstractProductA" << std::endl;
}

AbstractProductA::~AbstractProductA()
{
    std::cout << "Destory AbstractProductA" << std::endl;
}

AbstractProductB::AbstractProductB()
{
    std::cout << "Construct AbstractProductB" << std::endl;
}

AbstractProductB::~AbstractProductB()
{
    std::cout << "Destory AbstractProductB" << std::endl;
}

ConcreteProductA::ConcreteProductA()
{
    std::cout << "Construct ConcreteProductA" << std::endl;
}

ConcreteProductA::~ConcreteProductA()
{
    std::cout << "Destory ConcreteProductA" << std::endl;
}

ConcreteProductB::ConcreteProductB()
{
    std::cout << "Construct ConcreteProductB" << std::endl;
}

ConcreteProductB::~ConcreteProductB()
{
    std::cout << "Destory ConcreteProductB" << std::endl;
}
