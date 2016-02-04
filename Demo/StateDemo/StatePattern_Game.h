// StatePattern_Game.h : main header file for the STATEPATTERN_GAME application
//

#if !defined(AFX_STATEPATTERN_GAME_H__AB04DBF5_BB05_11D4_87CB_00C04F73BBBB__INCLUDED_)
#define AFX_STATEPATTERN_GAME_H__AB04DBF5_BB05_11D4_87CB_00C04F73BBBB__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#ifndef __AFXWIN_H__
#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CStatePattern_GameApp:
// See StatePattern_Game.cpp for the implementation of this class
//

class CStatePattern_GameApp : public CWinApp
{
public:
    CStatePattern_GameApp();

    // Overrides
        // ClassWizard generated virtual function overrides
        //{{AFX_VIRTUAL(CStatePattern_GameApp)
public:
    virtual BOOL InitInstance();
    //}}AFX_VIRTUAL
    virtual int Run();

    // Implementation

        //{{AFX_MSG(CStatePattern_GameApp)
    afx_msg void OnAppAbout();
    // NOTE - the ClassWizard will add and remove member functions here.
    //    DO NOT EDIT what you see in these blocks of generated code !
//}}AFX_MSG
    DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STATEPATTERN_GAME_H__AB04DBF5_BB05_11D4_87CB_00C04F73BBBB__INCLUDED_)
