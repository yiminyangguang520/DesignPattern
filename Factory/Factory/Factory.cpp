// Factory.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include "Product.h"

class CFactory
{
public:
	virtual ~CFactory() = 0 {}
	virtual CProduct* createProduct() = 0;

protected:
	CFactory(){}
};

class CConcreteFactory : public CFactory
{
public:
	CConcreteFactory(){}
	~CConcreteFactory(){}
	CProduct* createProduct() { return new CConcreteProduct(); }
};


int _tmain(int argc, _TCHAR* argv[])
{
	CFactory *pFactory = new CConcreteFactory();
	CProduct *pProduct = pFactory->createProduct();
	delete pProduct;
	pProduct = nullptr;
	delete pFactory;
	pFactory = nullptr;
	return 0;
}

