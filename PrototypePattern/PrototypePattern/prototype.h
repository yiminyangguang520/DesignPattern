#pragma once

class Prototype
{
public:
    Prototype();
    virtual ~Prototype();

    virtual Prototype* clone() = 0;

private:

};

class ConcreteProtoType : public Prototype
{
public:
    ConcreteProtoType();
    ~ConcreteProtoType();
    
    ConcreteProtoType(const ConcreteProtoType & p);

    Prototype* clone();

private:

};
