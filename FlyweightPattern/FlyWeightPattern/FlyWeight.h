#pragma once

#include <string>

class FlyWeight
{
public:
    FlyWeight(std::string & intrinsicState);
    virtual ~FlyWeight();

    virtual void operation(const std::string& extrinsicState);
    std::string getIntrinsicStage();

private:
    std::string m_intrinsicState;
};

class ConcreteFlyWeight : public FlyWeight
{
public:
    ConcreteFlyWeight(std::string & intrinsicState);
    ~ConcreteFlyWeight();

    void operation(const std::string& extrinsicState);

private:

};
