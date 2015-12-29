#include "stdafx.h"
#include "Decorator.h"

#include <iostream>

Componet::Componet()
{
    std::cout << "Construct Componet" << std::endl;
}

Componet::~Componet()
{
    std::cout << "Destory Componet" << std::endl;
}

void Componet::operation()
{
    std::cout << "Componet::operation" << std::endl;
}

ConcreteComponet::ConcreteComponet()
{
    std::cout << "Construct ConcreteComponet" << std::endl;
}

ConcreteComponet::~ConcreteComponet()
{
    std::cout << "Destory ConcreteComponet" << std::endl;
}

void ConcreteComponet::operation()
{
    std::cout << "ConcreteComponet::operation" << std::endl;
}

Decorator::Decorator(Componet* pComponet)
    : m_pComponet(pComponet)
{
    std::cout << "Construct Decorator" << std::endl;
}

Decorator::~Decorator()
{
    delete m_pComponet;
}

void Decorator::operation()
{
    std::cout << "Decorator::operation" << std::endl;
}

ConcreteDecorator::ConcreteDecorator(Componet* pComponet)
    : Decorator(pComponet)
{
    std::cout << "Construct ConcreteDecorator" << std::endl;
}

ConcreteDecorator::~ConcreteDecorator()
{
    std::cout << "Destory ConcreteDecorator" << std::endl;
}

void ConcreteDecorator::operation()
{
    m_pComponet->operation();
    addedBehavior();
}

void ConcreteDecorator::addedBehavior()
{
    std::cout << "ConcreteDecorator::addedBehavior" << std::endl;
}
