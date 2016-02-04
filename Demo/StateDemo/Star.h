// Star.h: interface for the CStar class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_STAR_H__CFA9293A_8E36_11D4_87C2_00C04F73BBBB__INCLUDED_)
#define AFX_STAR_H__CFA9293A_8E36_11D4_87C2_00C04F73BBBB__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#include "3dVector.h"

class CStar : public C3dVector
{
public:
    CStar();
    virtual ~CStar();

public:
    long GetColor() const;
    void SetColor(long lColor);

protected:
    long m_lColor;
};

#endif // !defined(AFX_STAR_H__CFA9293A_8E36_11D4_87C2_00C04F73BBBB__INCLUDED_)
