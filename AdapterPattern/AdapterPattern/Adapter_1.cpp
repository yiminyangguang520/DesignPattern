#include "stdafx.h"
#include "Adapter_1.h"

#include <iostream>

namespace Adapter1
{
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

    Adapter::Adapter()
    {
        std::cout << "Construct Adapter" << std::endl;
    }

    Adapter::~Adapter()
    {
        std::cout << "Destory Adapter" << std::endl;
    }

    void Adapter::requset()
    {
        this->specialRequest();
    }

}
