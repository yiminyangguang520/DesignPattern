#include "stdafx.h"
#include "Originator.h"
#include "Memento.h"

#include <iostream>

Originator::Originator()
{
    m_state = "";
    m_memento = 0;
}

Originator::Originator(const State& sdt)
{
    m_state = sdt;
    m_memento = 0;
}

Originator::~Originator()
{

}

Memento* Originator::createMemento()
{
    return new Memento(m_state);
}

State Originator::getState()
{
    return m_state;
}

void Originator::setState(const State& sdt)
{
    m_state = sdt;
}

void Originator::printState()
{
    cout << this->m_state << "....." << endl;
}

void Originator::setMemento(Memento* men)
{

}

void Originator::restoreToMemento(Memento* mt)
{
    m_state = mt->getState();
}