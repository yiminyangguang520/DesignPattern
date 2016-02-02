// ObserverTestCPP.cpp : Defines the entry point for the console application.
//
#include "DummyProduct.h"

int main(int argc, char* argv[])
{
    DummyProduct product;

    // We have four shops wanting to keep updated price set by product owner
    Shop shop1("Shop 1");
    Shop shop2("Shop 2");

    product.attach(&shop1);
    product.attach(&shop2);

    //Now lets try chaging the products price, this should update the shops automatically
    product.changePrice(23.0f);

    //Now shop2 is not interested in new prices so they unsubscribe
    product.detach(&shop2);

    //Now lets try changing the products price again
    product.changePrice(26.0f);

    getchar();
    return 0;
}

