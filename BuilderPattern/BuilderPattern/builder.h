#pragma once

#include <string>

class Product;

class Builder
{
public:
    Builder();
    virtual ~Builder();

    virtual void builderPartA(const std::string & builderParam) = 0;
    virtual void builderPartB(const std::string & builderParam) = 0;
    virtual void builderPartC(const std::string & builderParam) = 0;

    virtual Product* getProduct() = 0;
private:

};


class ConcreteBuilder : public Builder
{
public:
    ConcreteBuilder();
    ~ConcreteBuilder();

    virtual void builderPartA(const std::string & builderParam);
    virtual void builderPartB(const std::string & builderParam);
    virtual void builderPartC(const std::string & builderParam);

    virtual Product* getProduct();
private:

};
