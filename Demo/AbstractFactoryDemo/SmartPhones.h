#pragma once
#include "ISmart.h"

class GalaxyS2 : public ISmart
{
public:
    std::string Name()
    {
        return "GalaxyS2";
    }
};

class Titan : public ISmart
{
public:
    std::string Name()
    {
        return "Titan";
    }
};

class Lumia : public ISmart
{
public:
    std::string Name()
    {
        return "Lumia";
    }
};