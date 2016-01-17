// IteratorPattern.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Aggregate.h"
#include "Iterator.h"
#include <iostream>

int main()
{
    Aggregate* pAgg = new ConctrteAggregate();
    Iterator* pIter = new ConcreteIterator(pAgg);

    for (; !pIter->isDone(); pIter->next())
    {
        std::cout << pIter->currentItem() << std::endl;
    }

    return 0;
}

