#pragma once

class IObserver
{
public:
    virtual void update(float price) = 0;
};
