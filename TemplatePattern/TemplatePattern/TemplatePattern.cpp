// TemplatePattern.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Template.h"
#include <iostream>

int main()
{
    AbstractClass* p1 = new ConcreteClass1();
    AbstractClass* p2 = new ConcreteClass2();
    p1->templateMethod();
    p2->templateMethod();

    return 0;
}

