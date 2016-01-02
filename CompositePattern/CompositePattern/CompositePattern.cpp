// CompositePattern.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Leaf.h"
#include "Composite.h"

int main()
{
    Leaf* pLeaf = new Leaf();
    pLeaf->operation();

    Composite* pComposite = new Composite();
    pComposite->add(pLeaf);
    pComposite->operation();

    Component* pComponet = pComposite->get(0);
    pComponet->operation();

    return 0;
}

