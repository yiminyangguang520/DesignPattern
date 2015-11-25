#ifndef ISTRATEGY_H
#define ISTRATEGY_H

class IStrategy
{
public:
    explicit IStrategy()
    {

    }

    virtual ~IStrategy()
    {

    }

    virtual void operate() = 0;
};

#endif // ISTRATEGY_H
