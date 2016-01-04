#pragma once

class AbstractClass
{
public:
    AbstractClass();
    virtual ~AbstractClass();

    void templateMethod();

protected:
    virtual void primitiveOPeration1() = 0;
    virtual void primitiveOPeration2() = 0;

private:

};

class ConcreteClass1 : public AbstractClass
{
public:
    ConcreteClass1();
    ~ConcreteClass1();

protected:
    virtual void primitiveOPeration1();
    virtual void primitiveOPeration2();
};

class ConcreteClass2 : public AbstractClass
{
public:
    ConcreteClass2();
    ~ConcreteClass2();

protected:
    virtual void primitiveOPeration1();
    virtual void primitiveOPeration2();
};