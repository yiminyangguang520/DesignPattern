#ifndef _PRODUCT_H
#define _PRODUCT_H

class CProduct
{
public:
	virtual ~CProduct() = 0;

protected:
	CProduct();
};

class CConcreteProduct : public CProduct
{
public:
	CConcreteProduct();
	~CConcreteProduct();
};

#endif // !PRODUCT_H
