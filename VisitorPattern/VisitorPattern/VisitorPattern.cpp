// VisitorPattern.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Element.h"
#include "Visitor.h"

int main()
{
    Element* pElement = new ConcreteElementA();
    Visitor* pVisitor = new ConcreteVisitorA();
    pElement->accept(pVisitor);

    return 0;
}

