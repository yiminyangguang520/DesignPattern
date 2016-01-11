// MenmentoPattern.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include "Memento.h"
#include "Originator.h"

#include <iostream>

using namespace std;

int main()
{
    Originator* o = new Originator();

    //备忘前状态
    o->setState("old");
    o->printState();

    //将状态备忘
    Memento* m = o->createMemento();

    //修改状态
    o->setState("new");
    o->printState();
    o->restoreToMemento(m);

    //恢复修改前状态
    o->printState();

    return 0;
}

