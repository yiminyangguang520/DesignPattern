#include "stdafx.h"
#include "Handle.h"

#include <iostream>

Handle::Handle(Handle* handle)
    : m_succ(handle)
{

}

Handle::Handle()
{

}

Handle::~Handle()
{
    delete m_succ;
}

void Handle::setSuccessor(Handle* handle)
{
    m_succ = handle;
}

Handle* Handle::getSuccessor()
{
    return m_succ;
}

ConcreteHandleA::ConcreteHandleA()
{

}

ConcreteHandleA::ConcreteHandleA(Handle* handle)
    : Handle(handle)
{

}

ConcreteHandleA::~ConcreteHandleA()
{

}

void ConcreteHandleA::handleRequest()
{
    if (getSuccessor())
    {
        std::cout << "ConcreteHandleA give the successor to do" << std::endl;
        getSuccessor()->handleRequest();
    }
    else
    {
        std::cout << "there is no successor, ConcreteHandleA need to do it by myself" << std::endl;
    }
}

ConcreteHandleB::ConcreteHandleB()
{

}

ConcreteHandleB::ConcreteHandleB(Handle* handle)
    : Handle(handle)
{

}

ConcreteHandleB::~ConcreteHandleB()
{

}

void ConcreteHandleB::handleRequest()
{
    if (getSuccessor())
    {
        std::cout << "ConcreteHandleB give the successor to do" << std::endl;
        getSuccessor()->handleRequest();
    }
    else
    {
        std::cout << "there is no successor, ConcreteHandleB need to do it by myself" << std::endl;
    }
}
