#pragma once

class Handle
{
public:
    Handle();
    Handle(Handle* handle);
    virtual ~Handle();

    void setSuccessor(Handle* handle);
    Handle* getSuccessor();

    virtual void handleRequest() = 0;
private:
    Handle* m_succ;
};

class ConcreteHandleA : public Handle
{
public:
    ConcreteHandleA();
    ConcreteHandleA(Handle* handle);

    ~ConcreteHandleA();

    void handleRequest();

};

class ConcreteHandleB :public Handle
{
public:
    ConcreteHandleB();
    ConcreteHandleB(Handle* handle);

    ~ConcreteHandleB();

    void handleRequest();
protected:
private:
};