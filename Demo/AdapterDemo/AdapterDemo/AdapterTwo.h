#pragma once
#include <iostream>
#include "IAdapter.h"
#include "LibraryTwo.h"

class AdapterTwo : public IAdapter
{
public:
    void Do()
    {
        LibraryTwo two;
        std::cout << two.ThisIsHowTwoDoesIt();
    }
};
