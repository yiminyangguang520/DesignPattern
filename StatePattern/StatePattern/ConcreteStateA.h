#pragma once

#include "State.h"

class ConcreteStateA : public State
{
public:
    ConcreteStateA();
    ~ConcreteStateA();

    void operationInterface(Context* con);
    void operationChangeState(Context* con);

protected:

private:

};
