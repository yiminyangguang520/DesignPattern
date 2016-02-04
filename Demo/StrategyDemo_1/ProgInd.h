// ProgInd.h : header file
//

#ifndef _PROGRESS_INDICATOR
#define _PROGRESS_INDICATOR

// Forward declaration for the class CFiller
class CFiller;

/////////////////////////////////////////////////////////////////////////////
// CProgressIndicator window

class CProgressIndicator : public CWnd
{
// Construction
public:
	CProgressIndicator( CFiller * = NULL );

// Attributes
protected:
	CFiller * m_pFiller;
	BOOL	  m_bCreated;

// Attributes
public:

// Operations
public:
	CFiller * GetFiller();
	INT SetFiller( CFiller * );
	INT SetText( LPCSTR );
	INT SetRange( INT, INT );
	INT GetPos();
	INT SetPos( INT );
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CProgressIndicator)
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CProgressIndicator();

	// Generated message map functions
protected:
	//{{AFX_MSG(CProgressIndicator)
	afx_msg void OnPaint();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////
#endif
