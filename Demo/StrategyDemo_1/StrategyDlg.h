// StrategyDlg.h : header file
//

#if !defined(AFX_STRATEGYDLG_H__9E6E74A6_83F9_11D2_B751_50A250C10000__INCLUDED_)
#define AFX_STRATEGYDLG_H__9E6E74A6_83F9_11D2_B751_50A250C10000__INCLUDED_

#include "ProgInd.h"

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000


class CStrategyDlg : public CDialog
{
public:
    CStrategyDlg(CWnd* pParent = NULL);
    virtual ~CStrategyDlg();

    // Dialog Data
        //{{AFX_DATA(CStrategyDlg)
    enum { IDD = IDD_STRATEGY_DIALOG };
    // NOTE: the ClassWizard will add data members here
//}}AFX_DATA

// ClassWizard generated virtual function overrides
//{{AFX_VIRTUAL(CStrategyDlg)
protected:
    virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
    //}}AFX_VIRTUAL

// Implementation
protected:
    HICON m_hIcon;

    // Generated message map functions
    //{{AFX_MSG(CStrategyDlg)
    virtual BOOL OnInitDialog();
    afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
    afx_msg void OnPaint();
    afx_msg HCURSOR OnQueryDragIcon();
    afx_msg void OnTimer(UINT nIDEvent);
    afx_msg void OnAbout();
    afx_msg void OnStartfill();
    //}}AFX_MSG
    DECLARE_MESSAGE_MAP()
    virtual void OnCancel();

    // Attributes
protected:
    CProgressIndicator * m_pProgInd1;
    CProgressIndicator * m_pProgInd2;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STRATEGYDLG_H__9E6E74A6_83F9_11D2_B751_50A250C10000__INCLUDED_)
