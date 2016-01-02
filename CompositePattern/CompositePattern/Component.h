#pragma once

class Component
{
public:
    Component();
    virtual ~Component();

    virtual void operation() = 0;
    virtual void add(const Component& componet);
    virtual void remove(const Component& componet);
    virtual Component* get(const int index);
private:

};
