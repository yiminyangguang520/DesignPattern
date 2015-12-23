#pragma once

class AbstractProductA;
class AbstractProductB;


class AbstractFactory
{
public:
    explicit AbstractFactory();
    virtual ~AbstractFactory();

    virtual AbstractProductA* createProductA() = 0;
    virtual AbstractProductB* createProductB() = 0;

private:

};

class ConcreteFactory1 : public AbstractFactory
{
public:
    explicit ConcreteFactory1();
    ~ConcreteFactory1();

    AbstractProductA* createProductA();
    AbstractProductB* createProductB();

private:

};

class ConcreteFactory2 : public AbstractFactory
{
public:
    explicit ConcreteFactory2();
    ~ConcreteFactory2();

    AbstractProductA* createProductA();
    AbstractProductB* createProductB();

private:

};
