// FlyweightPattern.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Flyweight.h"
#include "FlyWeightFactory.h"
#include <iostream>

int main()
{
    std::string str1 = "hello";
    std::string str2 = "hello";
    std::string str3 = "hello";

    FlyWeightFactory* pFactory = new FlyWeightFactory();
    FlyWeight* fw1 = pFactory->getFlyWeight(str1);
    FlyWeight* fw2 = pFactory->getFlyWeight(str2);
    FlyWeight* fw3 = pFactory->getFlyWeight(str3);
    return 0;
}

