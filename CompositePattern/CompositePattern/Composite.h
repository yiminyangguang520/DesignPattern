#pragma once

#include "Component.h"
#include <vector>

class Composite : public Component
{
public:
    Composite();
    ~Composite();

    void operation();
    void add(Component* componet);
    void remove(Component* componet);
    Component* get(const int index);

private:
    std::vector<Component*> m_componetList;
};
