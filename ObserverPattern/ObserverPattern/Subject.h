#pragma once

#include <list>
#include <string>

using namespace std;

typedef string State;

class Observer;

class Subject
{
public:
    Subject();
    virtual ~Subject();

    virtual void attach(Observer* obv);
    virtual void detach(Observer* obv);
    virtual void notify();

    virtual void setState(State state) = 0;
    virtual State getState() = 0;

private:
    list<Observer*>* m_obvList;
};

class ConcreteSubject : public Subject
{
public:
    ConcreteSubject();
    ~ConcreteSubject();

    void setState(State state);
    State getState();

private:
    State m_state;
};
