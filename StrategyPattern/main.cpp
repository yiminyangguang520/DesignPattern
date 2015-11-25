#include <iostream>

#include "Context.h"
#include "BlockEntry.h"
#include "BackDoorStrategy.h"
#include "GreenLightStrategy.h"


using namespace std;

int main()
{
    Context* pContext = nullptr;

    pContext = new Context(new BlockEntryStrategy());
    pContext->doTask();
    delete pContext;

    pContext = new Context(new GreenLightStrategy());
    pContext->doTask();
    delete pContext;

    pContext = new Context(new BackDoorStrategy());
    pContext->doTask();
    delete pContext;

    return 0;
}

