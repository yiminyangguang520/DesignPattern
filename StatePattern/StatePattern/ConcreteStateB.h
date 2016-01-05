#pragma once

#include "State.h"

class ConcreteStateB : public State
{
public:
    ConcreteStateB();
    ~ConcreteStateB();

    void operationInterface(Context* con);
    void operationChangeState(Context* con);

protected:

private:

};