#pragma once

#include <string>
using namespace std;

typedef string State;

class Memento
{
public:

protected:

private:
    friend class Originator;

    Memento();
    Memento(const State& sdt);
    ~Memento();

    void setState(const State& sdt);
    State getState();

private:
    State m_state;
};