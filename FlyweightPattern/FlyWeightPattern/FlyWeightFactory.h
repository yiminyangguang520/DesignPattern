#pragma once

#include <vector>
#include "Flyweight.h"

class FlyWeightFactory
{
public:
    FlyWeightFactory();
    ~FlyWeightFactory();

    FlyWeight* getFlyWeight(std::string & key);

private:
    std::vector<FlyWeight*> m_flyWeight;
};
