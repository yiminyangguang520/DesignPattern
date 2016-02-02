#pragma once
#include "idumb.h"

class Asha : public IDumb
{
public:
    std::string Name()
    {
        return "Asha";
    }
};

class Primo : public IDumb
{
public:
    std::string Name()
    {
        return "Guru";
    }
};

class Genie : public IDumb
{
public:
    std::string Name()
    {
        return "Genie";
    }
};