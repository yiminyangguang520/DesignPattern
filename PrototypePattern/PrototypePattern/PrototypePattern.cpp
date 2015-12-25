// PrototypePattern.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "prototype.h"

int main()
{
    Prototype* pType = new ConcreteProtoType();
    pType->clone();
    return 0;
}

