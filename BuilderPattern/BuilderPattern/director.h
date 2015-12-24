#pragma once

class Builder;

class Director
{
public:
    Director(Builder* pBuilder);
    ~Director();

    void construct();

private:
    Builder* m_pBuilder;
};
