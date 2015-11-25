#ifndef GREENLIGHTSTRATEGY_H
#define GREENLIGHTSTRATEGY_H

#include "IStrategy.h"
#include <iostream>

using namespace std;

class GreenLightStrategy : public IStrategy
{
public:
    explicit GreenLightStrategy()
    {

    }

    virtual ~GreenLightStrategy()
    {

    }

    void operate()
    {
        cout << "Green Light Strategy" << endl;
    }
};

#endif // GREENLIGHTSTRATEGY_H
