#include "stdafx.h"
#include "builder.h"
#include "director.h"

Director::Director(Builder* pBuilder)
    : m_pBuilder(pBuilder)
{

}

Director::~Director()
{

}

void Director::construct()
{
    m_pBuilder->getProduct();
}
