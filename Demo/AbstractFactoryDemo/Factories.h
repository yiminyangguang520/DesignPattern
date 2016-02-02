#pragma once
#include "APhoneFactory.h"
#include "SmartPhones.h"
#include "DumbPhones.h"


class SamsungFactory : public APhoneFactory
{
public:
    ISmart* GetSmart()
    {
        return new GalaxyS2();
    }

    IDumb* GetDumb()
    {
        return new Primo();
    }
};

class HTCFactory : public APhoneFactory
{
public:
    ISmart* GetSmart()
    {
        return new Titan();
    }

    IDumb* GetDumb()
    {
        return new Genie();
    }
};

class NokiaFactory : public APhoneFactory
{
public:
    ISmart* GetSmart()
    {
        return new Lumia();
    }

    IDumb* GetDumb()
    {
        return new Asha();
    }
};