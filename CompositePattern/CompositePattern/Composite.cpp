#include "stdafx.h"
#include "Composite.h"

Composite::Composite()
{

}

Composite::~Composite()
{

}

void Composite::operation()
{
    std::vector<Component*>::iterator iter = m_componetList.begin();
    for (; iter != m_componetList.end(); ++iter)
    {
        (*iter)->operation();
    }
}

void Composite::add(Component* componet)
{
    m_componetList.push_back(componet);
}

void Composite::remove(Component* componet)
{
    auto iter = std::find(m_componetList.begin(), m_componetList.end(), componet);
    m_componetList.erase(iter);
}

Component* Composite::get(const int index)
{
    return m_componetList[index];
}
