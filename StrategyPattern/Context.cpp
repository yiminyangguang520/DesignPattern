#include "Context.h"

Context::Context(IStrategy* pStrategy)
    : m_pStrategy(pStrategy)
{

}

Context::~Context()
{
    delete m_pStrategy;
    m_pStrategy = nullptr;
}

void Context::doTask()
{
    m_pStrategy->operate();
}
