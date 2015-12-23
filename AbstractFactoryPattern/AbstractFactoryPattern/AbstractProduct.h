#pragma once

class AbstractProductA
{
public:
    explicit AbstractProductA();
    virtual ~AbstractProductA();

private:

};

class AbstractProductB
{
public:
    explicit AbstractProductB();
    virtual ~AbstractProductB();

private:

};

class ConcreteProductA : public AbstractProductA
{
public:
    explicit ConcreteProductA();
    ~ConcreteProductA();

private:

};

class ConcreteProductB : public AbstractProductB
{
public:
    explicit ConcreteProductB();
    ~ConcreteProductB();

private:

};

