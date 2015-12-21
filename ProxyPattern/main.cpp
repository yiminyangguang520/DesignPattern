#include <iostream>
#include "proxypattern.h"
#include "vld.h"

using namespace std;

int main()
{
    Subject* pSubject = new ConcreteSubject();
    Proxy* pProxy = new Proxy(pSubject);
    pProxy->requset();

    delete pProxy;

    return 0;
}

