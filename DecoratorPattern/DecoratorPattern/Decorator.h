#pragma once

class Componet
{
public:
    Componet();
    virtual ~Componet();

    virtual void operation();

private:

};

class ConcreteComponet : public Componet
{
public:
    ConcreteComponet();
    ~ConcreteComponet();

    void operation();
private:

};

class Decorator : public Componet
{
public:
    Decorator(Componet* pComponet);
    virtual ~Decorator();

    void operation();

protected:
    Componet* m_pComponet;

private:
};

class ConcreteDecorator : public Decorator
{
public:
    explicit ConcreteDecorator(Componet* pComponet);
    ~ConcreteDecorator();

    void operation();

    void addedBehavior();
};