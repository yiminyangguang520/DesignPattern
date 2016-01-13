#include "stdafx.h"
#include "Invoker.h"
#include "Command.h"

Invoker::Invoker(Command* command)
    : m_com(command)
{

}

Invoker::~Invoker()
{

}

void Invoker::invoke()
{
    m_com->execute();
}
