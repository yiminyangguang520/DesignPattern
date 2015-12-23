#include "stdafx.h"
#include "AbstractFactory.h"
#include "AbstractProduct.h"

#include <iostream>

AbstractFactory::AbstractFactory()
{
    std::cout << "Construct AbstractFactory" << std::endl;
}

AbstractFactory::~AbstractFactory()
{
    std::cout << "Destory AbstractFactory" << std::endl;
}

ConcreteFactory1::ConcreteFactory1()
{
    std::cout << "Construct ConcreteFactory1" << std::endl;
}

ConcreteFactory1::~ConcreteFactory1()
{
    std::cout << "Destory ConcreteFactory1" << std::endl;
}

AbstractProductA* ConcreteFactory1::createProductA()
{
    return new ConcreteProductA();
}

AbstractProductB* ConcreteFactory1::createProductB()
{
    return new ConcreteProductB();
}

ConcreteFactory2::ConcreteFactory2()
{
    std::cout << "Construct ConcreteFactory2" << std::endl;
}

ConcreteFactory2::~ConcreteFactory2()
{
    std::cout << "Destory ConcreteFactory2" << std::endl;
}

AbstractProductA* ConcreteFactory2::createProductA()
{
    return new ConcreteProductA();
}

AbstractProductB* ConcreteFactory2::createProductB()
{
    return new ConcreteProductB();
}
