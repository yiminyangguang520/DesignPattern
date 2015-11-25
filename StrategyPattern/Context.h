#ifndef CONTEXT_H
#define CONTEXT_H

#include "IStrategy.h"
#include <iostream>

class Context
{
public:
    explicit Context(IStrategy* pStrategy);

    virtual ~Context();

    void doTask();

private:
    IStrategy* m_pStrategy;
};

#endif // CONTEXT_H
