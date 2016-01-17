#include "stdafx.h"
#include "Iterator.h"
#include "Aggregate.h"
#include <iostream>

Iterator::~Iterator()
{
    std::cout << "Destory Iterator" << std::endl;
}

Iterator::Iterator()
{
    std::cout << "Construct Iterator" << std::endl;
}

ConcreteIterator::ConcreteIterator(Aggregate* agg, int index)
    : m_pAggregate(agg)
    , m_index(index)
{
    std::cout << "Construct ConcreteIterator" << std::endl;
}

ConcreteIterator::~ConcreteIterator()
{
    std::cout << "Destory ConcreteIterator" << std::endl;
}

void ConcreteIterator::first()
{
    m_index = 0;
}

void ConcreteIterator::next()
{
    if (m_index < m_pAggregate->getSize())
    {
        ++m_index;
    }
}

bool ConcreteIterator::isDone()
{
    return m_index == m_pAggregate->getSize();
}

Object ConcreteIterator::currentItem()
{
    return m_pAggregate->getItem(m_index);
}
