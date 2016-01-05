#include "stdafx.h"

#include "ConcreteStateA.h"
#include "ConcreteStateB.h"
#include <iostream>

ConcreteStateA::ConcreteStateA()
{

}

ConcreteStateA::~ConcreteStateA()
{

}

void ConcreteStateA::operationInterface(Context* con)
{
    std::cout << "ConcreteStateA::operationInterface......" << std::endl;
}

void ConcreteStateA::operationChangeState(Context* con)
{
    operationInterface(con);
    this->changeState(con, new ConcreteStateB());
}

