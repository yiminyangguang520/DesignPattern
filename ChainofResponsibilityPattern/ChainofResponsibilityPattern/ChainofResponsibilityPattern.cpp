// ChainofResponsibilityPattern.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Handle.h"

int main()
{
    Handle* h1 = new ConcreteHandleA();
    Handle* h2 = new ConcreteHandleB();
    h1->setSuccessor(h2);
    h1->handleRequest();

    return 0;
}

