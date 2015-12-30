#pragma once

class SubSystem1
{
public:
    SubSystem1();
    ~SubSystem1();

    void operation();
private:

};

class SubSystem2
{
public:
    SubSystem2();
    ~SubSystem2();

    void operation();

private:

};

class Facade
{
public:
    Facade();
    ~Facade();

    void operationWrapper();

private:
    SubSystem1* m_pSystem1;
    SubSystem2* m_pSystem2;
};
