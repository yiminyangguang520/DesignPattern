#include "stdafx.h"
#include "State.h"
#include "Context.h"

#include <iostream>

State::State()
{

}

State::~State()
{

}

void State::operationInterface(Context* con)
{
    std::cout << "State::operationInterface" << std::endl;
}

void State::operationChangeState(Context* con)
{

}

bool State::changeState(Context* con, State* st)
{
    con->changeState(st);
    return true;
}
