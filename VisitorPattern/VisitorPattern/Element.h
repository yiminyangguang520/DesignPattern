#pragma once

class Visitor;

class Element
{
public:
    Element();
    virtual ~Element();

    virtual void accept(Visitor* visit) = 0;
private:

};

class ConcreteElementA : public Element
{
public:
    ConcreteElementA();
    ~ConcreteElementA();

    void accept(Visitor* visit);
};

class ConcreteElementB : public Element
{
public:
    ConcreteElementB();
    ~ConcreteElementB();

    void accept(Visitor* visit);
};