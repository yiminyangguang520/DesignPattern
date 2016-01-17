#include "stdafx.h"
#include "Visitor.h"

#include <iostream>

Visitor::Visitor()
{
    std::cout << "Construct Visitor" << std::endl;
}

Visitor::~Visitor()
{
    std::cout << "Destory Visitor" << std::endl;
}

ConcreteVisitorA::ConcreteVisitorA()
{
    std::cout << "Construct ConcreteVisitorA" << std::endl;
}

ConcreteVisitorA::~ConcreteVisitorA()
{
    std::cout << "Destory ConcreteVisitorA" << std::endl;
}

void ConcreteVisitorA::visitConcreteElementA(Element* ele)
{
    std::cout << "I will visit element A" << std::endl;
}

void ConcreteVisitorA::visitConcreteElementB(Element* ele)
{
    std::cout << "I will visit element B" << std::endl;
}

ConcreteVisitorB::ConcreteVisitorB()
{
    std::cout << "Construct ConcreteVisitorB" << std::endl;
}

ConcreteVisitorB::~ConcreteVisitorB()
{
    std::cout << "Destory ConcreteVisitorB" << std::endl;
}

void ConcreteVisitorB::visitConcreteElementA(Element* ele)
{
    std::cout << "I will visit element A" << std::endl;
}

void ConcreteVisitorB::visitConcreteElementB(Element* ele)
{
    std::cout << "I will visit element B" << std::endl;
}
