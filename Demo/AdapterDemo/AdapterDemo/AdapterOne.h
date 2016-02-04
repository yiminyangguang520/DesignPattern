#pragma once
#include "IAdapter.h"
#include "LibraryOne.h"

class AdapterOne : public IAdapter
{
public:

    void Do()
    {
        LibraryOne one;

        one.ThisIsHowOneDoesIt();
    }
};
