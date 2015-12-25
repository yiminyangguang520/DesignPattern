#include "stdafx.h"
#include "prototype.h"

#include <iostream>

Prototype::Prototype()
{
    std::cout << "Construct Prototype" << std::endl;
}

Prototype::~Prototype()
{
    std::cout << "Destory Prototype" << std::endl;
}

Prototype* Prototype::clone()
{
    return nullptr;
}

ConcreteProtoType::ConcreteProtoType()
{
    std::cout << "Construct ConcreteProtoType" << std::endl;
}

ConcreteProtoType::ConcreteProtoType(const ConcreteProtoType & p)
{
    std::cout << "Copy ConcreteProtoType" << std::endl;
}

Prototype* ConcreteProtoType::clone()
{
    return new ConcreteProtoType(*this);
}

ConcreteProtoType::~ConcreteProtoType()
{
    std::cout << "Destory ConcreteProtoType" << std::endl;
}
