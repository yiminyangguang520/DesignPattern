#include "stdafx.h"

#include "ConcreteStateB.h"
#include "ConcreteStateA.h"
#include <iostream>

ConcreteStateB::ConcreteStateB()
{

}

ConcreteStateB::~ConcreteStateB()
{

}

void ConcreteStateB::operationInterface(Context* con)
{
    std::cout << "ConcreteStateB::operationInterface" << std::endl;
}

void ConcreteStateB::operationChangeState(Context* con)
{
    operationInterface(con);
    this->changeState(con, new ConcreteStateA());
}

