#ifndef BACKDOORSTRATEGY_H
#define BACKDOORSTRATEGY_H

#include "IStrategy.h"
#include <iostream>

using namespace std;

class BackDoorStrategy : public IStrategy
{
public:
    explicit BackDoorStrategy()
    {

    }

    virtual ~BackDoorStrategy()
    {

    }

    void operate()
    {
        cout << "Back door Strategy" << endl;
    }
};

#endif // BACKDOORSTRATEGY_H
