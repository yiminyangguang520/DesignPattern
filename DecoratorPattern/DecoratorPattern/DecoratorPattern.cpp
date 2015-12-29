// DecoratorPattern.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Decorator.h"

int main()
{
    ConcreteComponet* pComponet = new ConcreteComponet();
    ConcreteDecorator* pDecorator = new ConcreteDecorator(pComponet);

    pDecorator->operation();

    return 0;
}

