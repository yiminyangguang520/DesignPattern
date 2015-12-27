// BridgePattern.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "abstraction.h"
#include "AbstractionImpl.h"

int main()
{
    AbstractionImpl* pImpl = new ConcreteAbstractionImplA();
    Abstraction* pAbstraction = new RefinedAbstraction(pImpl);
    pAbstraction->operation();

    return 0;
}

