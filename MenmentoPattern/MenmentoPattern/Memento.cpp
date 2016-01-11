#include "stdafx.h"
#include "Memento.h"

#include <iostream>

using namespace std;

Memento::Memento()
{

}

Memento::Memento(const State& state)
{
    m_state = state;
}

Memento::~Memento()
{

}

State Memento::getState()
{
    return m_state;
}

void Memento::setState(const State& state)
{
    m_state = state;
}