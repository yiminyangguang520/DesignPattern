// FactoryPattern.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "factory.h"

int main()
{
    Factory* pFactory = new ConcreteFactory();
    Product* pProduct = pFactory->createProduct();
    return 0;
}

