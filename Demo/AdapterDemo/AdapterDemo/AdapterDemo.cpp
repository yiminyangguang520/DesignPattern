// AdapterTestCPP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#include "IAdapter.h"
#include "AdapterOne.h"
#include "AdapterTwo.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
    IAdapter *adapter = 0;

    //Let emulate the decision where the choice of using the underlying system is made
    cout << "Enter which library you wanna use to do operation {1,2}";
    int x;
    cin >> x;

    if (x == 1)
    {
        //Let us choose to use Library one to do something
        adapter = new AdapterOne();
    }
    else if (x == 2)
    {
        //Let us choose to use Library two to do something
        adapter = new AdapterTwo();
    }

    //Just do the operation now
    adapter->Do();

    delete adapter;
    return 0;
}

