#include "ASubject.h"
#include <algorithm>

using namespace std;

void ASubject::attach(Shop *shop)
{
    list.push_back(shop);
}

void ASubject::detach(Shop *shop)
{
    list.erase(std::remove(list.begin(), list.end(), shop), list.end());
}

void ASubject::notify(float price)
{
    vector<Shop*>::const_iterator iter = list.begin();
    for (; iter != list.end(); ++iter)
    {
        if (*iter != 0)
        {
            (*iter)->update(price);
        }
    }
}
