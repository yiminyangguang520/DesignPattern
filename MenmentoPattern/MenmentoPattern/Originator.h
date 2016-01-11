#pragma once

#include <string>
using namespace std;

class Memento;

typedef string State;

class Originator
{
public:

    Originator();
    Originator(const State& sdt);
    ~Originator();

    Memento* createMemento();
    void setMemento(Memento* men);
    void restoreToMemento(Memento* mt);
    State getState();
    void setState(const State& sdt);
    void printState();

protected:

private:
    State m_state;
    Memento* m_memento;
};