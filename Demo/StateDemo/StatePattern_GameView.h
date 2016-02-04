// StatePattern_GameView.h : interface of the CStatePattern_GameView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_STATEPATTERN_GAMEVIEW_H__AB04DBFD_BB05_11D4_87CB_00C04F73BBBB__INCLUDED_)
#define AFX_STATEPATTERN_GAMEVIEW_H__AB04DBFD_BB05_11D4_87CB_00C04F73BBBB__INCLUDED_

#include "GameManager.h"	// Added by ClassView
#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

class CStatePattern_GameView : public CView
{
protected: // create from serialization only
    CStatePattern_GameView();
    DECLARE_DYNCREATE(CStatePattern_GameView)

    // Attributes
public:
    CStatePattern_GameDoc* GetDocument();

    // Operations
public:

    // Overrides
        // ClassWizard generated virtual function overrides
        //{{AFX_VIRTUAL(CStatePattern_GameView)
public:
    virtual void OnDraw(CDC* pDC);  // overridden to draw this view
    virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

protected:
    virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
    virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
    virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
    //}}AFX_VIRTUAL

// Implementation
public:
    void DoFrame();
    virtual ~CStatePattern_GameView();

#ifdef _DEBUG
    virtual void AssertValid() const;
    virtual void Dump(CDumpContext& dc) const;
#endif

protected:

    // Generated message map functions
protected:
    //{{AFX_MSG(CStatePattern_GameView)
    afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
    afx_msg void OnSize(UINT nType, int cx, int cy);
    afx_msg BOOL OnEraseBkgnd(CDC* pDC);
    afx_msg void OnPaint();
    //}}AFX_MSG
    DECLARE_MESSAGE_MAP()

protected:
    CGameManager m_GameManager;
    BOOL CheckNextFrame();

    DWORD               m_dwTicksPerFrame;  // Frame Rate Control
    double              m_dFPS;             // Frames per second  (calculated)
    int                 m_iFrame;           // Current Frame
    double              m_dFrameRate;       // Target Frame Rate
};

#ifndef _DEBUG  // debug version in StatePattern_GameView.cpp
inline CStatePattern_GameDoc* CStatePattern_GameView::GetDocument()
{
    return (CStatePattern_GameDoc*)m_pDocument;
}
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STATEPATTERN_GAMEVIEW_H__AB04DBFD_BB05_11D4_87CB_00C04F73BBBB__INCLUDED_)
