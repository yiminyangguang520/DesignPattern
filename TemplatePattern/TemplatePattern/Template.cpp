#include "stdafx.h"
#include "Template.h"

#include <iostream>

AbstractClass::AbstractClass()
{
    std::cout << "Construct AbstractClass" << std::endl;
}

AbstractClass::~AbstractClass()
{
    std::cout << "Destory AbstractClass" << std::endl;
}

void AbstractClass::templateMethod()
{
    this->primitiveOPeration1();
    this->primitiveOPeration2();
}

ConcreteClass1::ConcreteClass1()
{
    std::cout << "Construct ConcreteClass1" << std::endl;
}

ConcreteClass1::~ConcreteClass1()
{
    std::cout << "Destory ConcreteClass1" << std::endl;
}

void ConcreteClass1::primitiveOPeration1()
{
    std::cout << "ConcreteClass1::primitiveOPeration1" << std::endl;
}

void ConcreteClass1::primitiveOPeration2()
{
    std::cout << "ConcreteClass1::primitiveOPeration2" << std::endl;
}

ConcreteClass2::ConcreteClass2()
{
    std::cout << "Construct ConcreteClass2" << std::endl;
}

ConcreteClass2::~ConcreteClass2()
{
    std::cout << "Destory ConcreteClass2" << std::endl;
}

void ConcreteClass2::primitiveOPeration1()
{
    std::cout << "ConcreteClass2::primitiveOPeration1" << std::endl;
}

void ConcreteClass2::primitiveOPeration2()
{
    std::cout << "ConcreteClass2::primitiveOPeration2" << std::endl;
}
