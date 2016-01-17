#pragma once

class Element;

class Visitor
{
public:
    Visitor();
    virtual ~Visitor();

    virtual void visitConcreteElementA(Element* ele) = 0;
    virtual void visitConcreteElementB(Element* ele) = 0;


private:

};

class ConcreteVisitorA : public Visitor
{
public:
    ConcreteVisitorA ();
    ~ConcreteVisitorA ();

    void visitConcreteElementA(Element* ele);
    void visitConcreteElementB(Element* ele);

private:

};

class ConcreteVisitorB : public Visitor
{
public:
    ConcreteVisitorB();
    ~ConcreteVisitorB();

    void visitConcreteElementA(Element* ele);
    void visitConcreteElementB(Element* ele);

private:

};