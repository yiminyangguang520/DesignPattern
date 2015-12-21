#include "stdafx.h"
#include "Product.h"
#include <iostream>

using std::cout;
using std::endl;

CProduct::CProduct()
{
	cout << "CProduct is created." << endl;
}

CProduct::~CProduct()
{
	cout << "CProduct is destroyed." << endl;
}

CConcreteProduct::CConcreteProduct()
{
	cout << "CConcreteProduct is created." << endl;
}

CConcreteProduct::~CConcreteProduct()
{
	cout << "CConcreteProduct is destroyed." << endl;
}