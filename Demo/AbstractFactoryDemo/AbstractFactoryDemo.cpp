// AbstractFactoryCPP.cpp : Defines the entry point for the console application.
//

#include "APhoneFactory.h"
#include <iostream>
using namespace std;


int main(int argc, char* argv[])
{
    APhoneFactory *factory = APhoneFactory::CreateFactory(APhoneFactory::PHONE_FACTORIES::SAMSUNG);

    cout << "Dumb phone from Samsung: " << factory->GetDumb()->Name() << "\n";
    delete factory->GetDumb(); //USe of smart pointer will get rid of these delete
    cout << "Smart phone from Samsung: " << factory->GetSmart()->Name() << "\n";
    delete factory->GetSmart(); //USe of smart pointer will get rid of these delete
    delete factory;
    getchar();

    factory = APhoneFactory::CreateFactory(APhoneFactory::PHONE_FACTORIES::HTC);
    cout << "Dumb phone from HTC: " << factory->GetDumb()->Name() << "\n";
    delete factory->GetDumb(); //USe of smart pointer will get rid of these delete
    cout << "Smart phone from HTC: " << factory->GetSmart()->Name() << "\n";
    delete factory->GetSmart(); //USe of smart pointer will get rid of these delete
    delete factory;
    getchar();

    factory = APhoneFactory::CreateFactory(APhoneFactory::PHONE_FACTORIES::NOKIA);
    cout << "Dumb phone from Nokia: " << factory->GetDumb()->Name() << "\n";
    delete factory->GetDumb(); //USe of smart pointer will get rid of these delete
    cout << "Smart phone from Nokia: " << factory->GetSmart()->Name() << "\n";
    delete factory->GetSmart(); //USe of smart pointer will get rid of these delete
    getchar();

    return 0;
}

