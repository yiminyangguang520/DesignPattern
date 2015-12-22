#pragma once
#ifndef _FACTORY_H_
#define _FACTORY_H_

#include "product.h"

class Factory
{
public:
    virtual ~Factory() = 0;
    virtual Product* createProduct() = 0;
protected:
    Factory();
private:
};

class ConcreteFactory : public Factory
{
public:
    ConcreteFactory();
    ~ConcreteFactory();

    Product* createProduct();
protected:
private:
};

#endif //~_FACTORY_H_