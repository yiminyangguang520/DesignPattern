// StatePattern.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include "Context.h"
#include "ConcreteStateA.h"
#include <iostream>

int main()
{
    State* st = new ConcreteStateA();
    Context* con = new Context(st);

    con->oprationInterface();
    con->operationChangState();
    con->oprationInterface();
    con->oprationInterface();

    if (nullptr != con)
    {
        delete con;
    }

    if (nullptr != st)
    {
        st = NULL;
    }

    return 0;
}

