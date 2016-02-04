// StatePattern_GameDoc.cpp : implementation of the CStatePattern_GameDoc class
//

#include "stdafx.h"
#include "StatePattern_Game.h"

#include "StatePattern_GameDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CStatePattern_GameDoc

IMPLEMENT_DYNCREATE(CStatePattern_GameDoc, CDocument)

BEGIN_MESSAGE_MAP(CStatePattern_GameDoc, CDocument)
	//{{AFX_MSG_MAP(CStatePattern_GameDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CStatePattern_GameDoc construction/destruction

CStatePattern_GameDoc::CStatePattern_GameDoc()
{
	// TODO: add one-time construction code here

}

CStatePattern_GameDoc::~CStatePattern_GameDoc()
{
}

BOOL CStatePattern_GameDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CStatePattern_GameDoc serialization

void CStatePattern_GameDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CStatePattern_GameDoc diagnostics

#ifdef _DEBUG
void CStatePattern_GameDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CStatePattern_GameDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CStatePattern_GameDoc commands
