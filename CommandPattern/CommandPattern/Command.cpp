#include "stdafx.h"
#include "Command.h"
#include "Receiver.h"

Command::Command()
{

}

Command::~Command()
{

}

ConcreteCommand::ConcreteCommand(Receiver* rev)
    : m_rev(rev)
{

}

ConcreteCommand::~ConcreteCommand()
{

}

void ConcreteCommand::execute()
{
    m_rev->action();
}
