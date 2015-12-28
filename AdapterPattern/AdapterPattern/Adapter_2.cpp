#include "stdafx.h"
#include "Adapter_2.h"

#include <iostream>

Target::Target()
{
    std::cout << "Construct Target" << std::endl;
}

Target::~Target()
{
    std::cout << "Destory Target" << std::endl;
}

void Target::requset()
{
    std::cout << "Target::requset" << std::endl;
}

Adaptee::Adaptee()
{
    std::cout << "Construct Adaptee" << std::endl;
}

Adaptee::~Adaptee()
{
    std::cout << "Destory Adaptee" << std::endl;
}

void Adaptee::specialRequest()
{
    std::cout << "Adaptee::specialRequest" << std::endl;
}

Adapter::Adapter(Adaptee* pAdaptee)
    : m_pAdaptee(pAdaptee)
{
    std::cout << "Construct Adapter" << std::endl;
}

Adapter::~Adapter()
{
    std::cout << "Destory Adapter" << std::endl;
}

void Adapter::requset()
{
    m_pAdaptee->specialRequest();
}
