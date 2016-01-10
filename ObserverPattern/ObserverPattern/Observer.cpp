#include "stdafx.h"

#include "Subject.h"
#include "Observer.h"

#include <iostream>

Observer::Observer()
    : m_state("\0")
{

}

Observer::~Observer()
{

}

ConcreteObserverA::ConcreteObserverA(Subject* sub)
    : m_subject(sub)
{
    m_subject->attach(this);
}

ConcreteObserverA::~ConcreteObserverA()
{
    m_subject->detach(this);

    if (m_subject != 0)
    {
        delete m_subject;
    }
}

Subject* ConcreteObserverA::getSubject()
{
    return m_subject;
}

void ConcreteObserverA::update(Subject* sub)
{
    m_state = sub->getState();
    printInfo();
}

void ConcreteObserverA::printInfo()
{
    std::cout << "ConcreteObserverA observer " << m_subject->getState() << std::endl;
}

ConcreteObserverB::ConcreteObserverB(Subject* sub)
    : m_subject(sub)
{
    m_subject->attach(this);
}

ConcreteObserverB::~ConcreteObserverB()
{
    m_subject->detach(this);

    if (m_subject != 0)
    {
        delete m_subject;
    }
}

Subject* ConcreteObserverB::getSubject()
{
    return m_subject;
}

void ConcreteObserverB::update(Subject* sub)
{
    m_state = sub->getState();
    printInfo();
}

void ConcreteObserverB::printInfo()
{
    std::cout << "ConcreteObserverB observer " << m_subject->getState() << std::endl;
}
