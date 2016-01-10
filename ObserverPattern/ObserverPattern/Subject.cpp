#include "stdafx.h"
#include "Subject.h"
#include "Observer.h"

Subject::Subject()
    : m_obvList(new list<Observer*>())
{

}

Subject::~Subject()
{

}

void Subject::attach(Observer* obv)
{
    m_obvList->push_front(obv);
}

void Subject::detach(Observer* obv)
{
    if (obv)
    {
        m_obvList->remove(obv);
    }
}

void Subject::notify()
{
    list<Observer*>::iterator iter = m_obvList->begin();

    for (; iter != m_obvList->end(); ++iter)
    {
        (*iter)->update(this);
    }
}

ConcreteSubject::ConcreteSubject()
    : m_state("\0")
{

}

ConcreteSubject::~ConcreteSubject()
{

}

void ConcreteSubject::setState(State state)
{
    m_state = state;
}

State ConcreteSubject::getState()
{
    return m_state;
}
