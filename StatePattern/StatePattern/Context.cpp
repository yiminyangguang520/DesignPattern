#include "stdafx.h"
#include "State.h"
#include "Context.h"

Context::Context()
{

}

Context::Context(State* state)
{
    this->_state = state;
}

Context::~Context()
{
    delete _state;
}

void Context::oprationInterface()
{
    _state->operationInterface(this);
}

bool Context::changeState(State* state)
{
    this->_state = state;
    return true;
}

void Context::operationChangState()
{
    _state->operationChangeState(this);
}