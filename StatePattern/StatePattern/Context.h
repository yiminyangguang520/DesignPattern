#pragma once

class State;

class Context
{
public:
    Context();
    Context(State* state);
    ~Context();

    void oprationInterface();
    void operationChangState();

protected:

private:
    friend class State;
    bool changeState(State* state);

private:
    State* _state;
};