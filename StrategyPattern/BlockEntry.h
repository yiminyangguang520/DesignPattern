#ifndef BLOCKENTRY_H
#define BLOCKENTRY_H

#include "IStrategy.h"
#include <iostream>

using namespace std;

class BlockEntryStrategy : public IStrategy
{
public:
    explicit BlockEntryStrategy()
    {

    }

    virtual ~BlockEntryStrategy()
    {

    }

    void operate()
    {
        cout << "Block Entry Strategy" << endl;
    }
};

#endif // BLOCKENTRY_H
