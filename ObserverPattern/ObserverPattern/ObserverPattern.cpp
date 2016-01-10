// ObserverPattern.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include "Subject.h"
#include "Observer.h"

#include <iostream>

int main()
{
    ConcreteSubject* sub = new ConcreteSubject();

    Observer* o1 = new ConcreteObserverA(sub);
    Observer* o2 = new ConcreteObserverB(sub);

    sub->setState("old");
    sub->notify();

    sub->setState("new");
    sub->notify();

    return 0;
}

