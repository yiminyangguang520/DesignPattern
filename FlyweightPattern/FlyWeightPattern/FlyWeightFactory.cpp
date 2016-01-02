#include "stdafx.h"
#include "FlyWeightFactory.h"

FlyWeightFactory::FlyWeightFactory()
{

}

FlyWeightFactory::~FlyWeightFactory()
{

}

FlyWeight* FlyWeightFactory::getFlyWeight(std::string & key)
{
    std::vector<FlyWeight*>::iterator iter = m_flyWeight.begin();
    for (; iter != m_flyWeight.end(); ++iter)
    {
        if ((*iter)->getIntrinsicStage() == key)
        {
            return *iter;
        }
    }

    FlyWeight* fn = new ConcreteFlyWeight(key);
    m_flyWeight.push_back(fn);

    return fn;
}
