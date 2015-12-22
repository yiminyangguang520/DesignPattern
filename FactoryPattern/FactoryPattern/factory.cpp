#include "stdafx.h"

#include "factory.h"
#include <iostream>

Factory::~Factory()
{

}

Factory::Factory()
{

}

ConcreteFactory::ConcreteFactory()
{
    std::cout << "ConcreteFactory" << std::endl;
}

ConcreteFactory::~ConcreteFactory()
{

}

Product * ConcreteFactory::createProduct()
{
    return new ConcreteProduct();
}
