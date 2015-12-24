#include "stdafx.h"
#include "builder.h"
#include "product.h"

#include <iostream>

Builder::Builder()
{
    std::cout << "Construct Builder" << std::endl;
}

Builder::~Builder()
{
    std::cout << "Destory Builder" << std::endl;
}

ConcreteBuilder::ConcreteBuilder()
{
    std::cout << "Construct ConcreteBuilder" << std::endl;
}

ConcreteBuilder::~ConcreteBuilder()
{
    std::cout << "Destory ConcreteBuilder" << std::endl;
}

void ConcreteBuilder::builderPartA(const std::string & builderParam)
{
    std::cout << "builderPartA " << builderParam << std::endl;
}

void ConcreteBuilder::builderPartB(const std::string & builderParam)
{
    std::cout << "builderPartB " << builderParam << std::endl;
}

void ConcreteBuilder::builderPartC(const std::string & builderParam)
{
    std::cout << "builderPartC " << builderParam << std::endl;
}

Product* ConcreteBuilder::getProduct()
{
    builderPartA("A");
    builderPartB("B");
    builderPartC("C");

    return new Product();
}
