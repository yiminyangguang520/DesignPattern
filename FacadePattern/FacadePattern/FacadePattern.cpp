// FacadePattern.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Facade.h"


int main()
{
    Facade* pFacade = new Facade();
    pFacade->operationWrapper();
    return 0;
}

