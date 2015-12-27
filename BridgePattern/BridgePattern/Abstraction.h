#pragma once

class AbstractionImpl;

class Abstraction
{
public:
    Abstraction();
    virtual ~Abstraction();

    virtual void operation() = 0;

private:

};

class RefinedAbstraction : public Abstraction
{
public:
    RefinedAbstraction(AbstractionImpl* pImpl);
    ~RefinedAbstraction();

    void operation();

private:
    AbstractionImpl* m_pImpl;
};
