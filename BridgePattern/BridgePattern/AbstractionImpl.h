#pragma once

class AbstractionImpl
{
public:
    AbstractionImpl();
    virtual ~AbstractionImpl();

    virtual void operation() = 0;
private:

};

class ConcreteAbstractionImplA : public AbstractionImpl
{
public:
    ConcreteAbstractionImplA();
    ~ConcreteAbstractionImplA();

    void operation();

private:

};

class ConcreteAbstractionImplB : public AbstractionImpl
{
public:
    ConcreteAbstractionImplB();
    ~ConcreteAbstractionImplB();

    void operation();

private:

};
