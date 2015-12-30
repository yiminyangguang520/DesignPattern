#include "stdafx.h"
#include "Facade.h"

#include <iostream>

SubSystem1::SubSystem1()
{
    std::cout << "Construct SubSystem1" << std::endl;
}

SubSystem1::~SubSystem1()
{
    std::cout << "Destory SubSystem1" << std::endl;
}

void SubSystem1::operation()
{
    std::cout << "SubSystem1::operation" << std::endl;
}

SubSystem2::SubSystem2()
{
    std::cout << "Construct SubSystem2" << std::endl;
}

SubSystem2::~SubSystem2()
{
    std::cout << "Destory SubSystem2" << std::endl;
}

void SubSystem2::operation()
{
    std::cout << "SubSystem2::operation" << std::endl;
}

Facade::Facade()
{
    m_pSystem1 = new SubSystem1;
    m_pSystem2 = new SubSystem2;
}

Facade::~Facade()
{
    delete m_pSystem1;
    delete m_pSystem2;
}

void Facade::operationWrapper()
{
    m_pSystem1->operation();
    m_pSystem2->operation();
}
