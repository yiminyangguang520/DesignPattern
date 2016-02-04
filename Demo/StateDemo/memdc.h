#ifndef _MEMDC_H_
#define _MEMDC_H_

//////////////////////////////////////////////////// CMemDC - memory DC//
// Author: Keith Rule
// Email:  keithr@europa.com
// Copyright 1996-1997, Keith Rule
//
// You may freely use or modify this code provided this
// Copyright is included in all derived versions.
//
// History - 10/3/97 Fixed scrolling bug.
//                   Added print support.//
// This class implements a memory Device Context

// History - 3/1/99 Modified from Keith Rule's CMemDC.
//
// This class implements a memory Device Context

class cMemDC : public CDC
{
public:
    cMemDC(CDC* pDC, const CRect& rcBounds, long BackColor = RGB(255, 255, 255))
        : CDC()
        , m_oldBitmap(NULL)
        , m_pDC(pDC)
        , m_rcBounds(rcBounds)
    {
        CreateCompatibleDC(pDC);
        m_bitmap = new CBitmap;
        m_bitmap->CreateCompatibleBitmap(pDC, rcBounds.Width(), rcBounds.Height());
        CBrush *pBack = new CBrush(BackColor);
        //FillRect(m_rcBounds, pBack);
        delete pBack;
        m_oldBitmap = SelectObject(m_bitmap);
        m_pDC = pDC;
        m_rcBounds = rcBounds;
    }

    ~cMemDC()
    {
        m_pDC->BitBlt(m_rcBounds.left, m_rcBounds.top, m_rcBounds.Width(), m_rcBounds.Height(),
            this, m_rcBounds.left, m_rcBounds.top, SRCCOPY);
        SelectObject(m_oldBitmap);

        if (m_bitmap != NULL)
        {
            delete m_bitmap;
        }
    }

    cMemDC* operator->()
    {
        return this;
    }

private:
    CBitmap*    m_bitmap;
    CBitmap*    m_oldBitmap;
    CDC*        m_pDC;
    CRect       m_rcBounds;
};

#endif