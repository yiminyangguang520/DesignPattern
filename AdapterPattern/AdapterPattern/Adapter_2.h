#pragma once

class Target
{
public:
    Target();
    virtual ~Target();

    virtual void requset();

private:

};

class Adaptee
{
public:
    Adaptee();
    virtual ~Adaptee();

    void specialRequest();

private:

};

class Adapter : public Target
{
public:
    Adapter(Adaptee* pAdaptee);
    ~Adapter();

    void requset();

private:
    Adaptee* m_pAdaptee;
};
