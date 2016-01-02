#include "stdafx.h"
#include "Flyweight.h"
#include <iostream>

FlyWeight::FlyWeight(std::string & intrinsicState)
    : m_intrinsicState(intrinsicState)
{

}

FlyWeight::~FlyWeight()
{

}

void FlyWeight::operation(const std::string& extrinsicState)
{

}

std::string FlyWeight::getIntrinsicStage()
{
    return m_intrinsicState;
}

ConcreteFlyWeight::ConcreteFlyWeight(std::string & intrinsicState)
    : FlyWeight(intrinsicState)
{
    std::cout << "ConcreteFlyweight Build....." << intrinsicState << std::endl;
}

ConcreteFlyWeight::~ConcreteFlyWeight()
{

}

void ConcreteFlyWeight::operation(const std::string& extrinsicState)
{
    std::cout << "intrinsic state is " << this->getIntrinsicStage() << "extrinsic state is " << extrinsicState << std::endl;
}
