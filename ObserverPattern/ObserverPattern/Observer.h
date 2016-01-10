#pragma once

#include <string>

using namespace std;

typedef string State;

class Subject;

class Observer
{
public:
    Observer();
    virtual ~Observer();

    virtual void update(Subject* sub) = 0;
    virtual void printInfo() = 0;

protected:
    State m_state;
};

class ConcreteObserverA : public Observer
{
public:
    ConcreteObserverA(Subject* sub);
    ~ConcreteObserverA();

    Subject* getSubject();

    void update(Subject* sub);
    void printInfo();

private:
    Subject* m_subject;
};


class ConcreteObserverB : public Observer
{
public:
    ConcreteObserverB(Subject* sub);
    ~ConcreteObserverB();

    Subject* getSubject();

    void update(Subject* sub);
    void printInfo();

private:
    Subject* m_subject;
};
