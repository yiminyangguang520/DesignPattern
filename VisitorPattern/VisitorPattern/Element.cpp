#include "stdafx.h"
#include "Element.h"
#include "Visitor.h"

#include <iostream>

Element::Element()
{
    std::cout << "Construct Element" << std::endl;
}

Element::~Element()
{
    std::cout << "Destory Element" << std::endl;
}

ConcreteElementA::ConcreteElementA()
{
    std::cout << "Construct ConcreteElementA" << std::endl;
}

ConcreteElementA::~ConcreteElementA()
{
    std::cout << "Destory ConcreteElementA" << std::endl;
}

void ConcreteElementA::accept(Visitor* visit)
{
    std::cout << "visit ConcreteElementA" << std::endl;
    visit->visitConcreteElementA(this);
}

ConcreteElementB::ConcreteElementB()
{
    std::cout << "Construct ConcreteElementB" << std::endl;
}

ConcreteElementB::~ConcreteElementB()
{
    std::cout << "Destory ConcreteElementB" << std::endl;
}

void ConcreteElementB::accept(Visitor* visit)
{
    std::cout << "visit ConcreteElementB" << std::endl;
    visit->visitConcreteElementB(this);
}
