#pragma once

class Context;

class State
{
public:
    State();
    virtual ~State();

    virtual void operationInterface(Context* con) = 0;
    virtual void operationChangeState(Context* con) = 0;

protected:
    bool changeState(Context* con, State* st);

private:

};
