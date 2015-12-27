#include "stdafx.h"
#include "AbstractionImpl.h"

#include <iostream>

AbstractionImpl::AbstractionImpl()
{
    std::cout << "Construct AbstractionImpl" << std::endl;
}

AbstractionImpl::~AbstractionImpl()
{
    std::cout << "Destory AbstractionImpl" << std::endl;
}

void AbstractionImpl::operation()
{
    std::cout << "AbstractionImpl operation" << std::endl;
}

ConcreteAbstractionImplA::ConcreteAbstractionImplA()
{
    std::cout << "Construct ConcreteAbstractionImplA" << std::endl;
}

ConcreteAbstractionImplA::~ConcreteAbstractionImplA()
{
    std::cout << "Destory ConcreteAbstractionImplA" << std::endl;
}

void ConcreteAbstractionImplA::operation()
{
    std::cout << "ConcreteAbstractionImplA operation" << std::endl;
}

ConcreteAbstractionImplB::ConcreteAbstractionImplB()
{
    std::cout << "Construct ConcreteAbstractionImplB" << std::endl;
}

ConcreteAbstractionImplB::~ConcreteAbstractionImplB()
{
    std::cout << "Destory ConcreteAbstractionImplB" << std::endl;
}

void ConcreteAbstractionImplB::operation()
{
    std::cout << "ConcreteAbstractionImplB operation" << std::endl;
}
