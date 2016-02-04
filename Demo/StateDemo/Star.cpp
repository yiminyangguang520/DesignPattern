// Star.cpp: implementation of the CStar class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Star.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CStar::CStar()
{
	m_lColor = RGB(255,255,255); // white, by default...
}

CStar::~CStar()
{

}

void CStar::SetColor(long lColor)
{
	m_lColor = lColor;
}

long CStar::GetColor() const
{
	return m_lColor;
}
