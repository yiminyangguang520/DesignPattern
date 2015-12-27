#include "stdafx.h"
#include "abstraction.h"
#include "AbstractionImpl.h"

#include <iostream>

Abstraction::Abstraction()
{
    std::cout << "Construct Abstraction" << std::endl;
}

Abstraction::~Abstraction()
{
    std::cout << "Destory Abstraction" << std::endl;
}

void Abstraction::operation()
{
    std::cout << "Abstraction operation" << std::endl;
}

RefinedAbstraction::RefinedAbstraction(AbstractionImpl* pImpl)
    : m_pImpl(pImpl)
{
    std::cout << "Construct RefinedAbstraction" << std::endl;
}

RefinedAbstraction::~RefinedAbstraction()
{
    std::cout << "Destory RefinedAbstraction" << std::endl;
}

void RefinedAbstraction::operation()
{
    m_pImpl->operation();
}
