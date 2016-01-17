#include "stdafx.h"
#include "Aggregate.h"
#include "Iterator.h"

Aggregate::~Aggregate()
{

}

Aggregate::Aggregate()
{

}

ConctrteAggregate::ConctrteAggregate()
{
    for (int i = 0; i < SIZE; ++i)
    {
        m_obj[i] = i;
    }
}

ConctrteAggregate::~ConctrteAggregate()
{

}

Iterator* ConctrteAggregate::createIterator()
{
    return new ConcreteIterator(this);
}

Object ConctrteAggregate::getItem(int index)
{
    if (index < SIZE)
    {
        return m_obj[index];
    }

    return -1;
}

int ConctrteAggregate::getSize()
{
    return SIZE;
}
