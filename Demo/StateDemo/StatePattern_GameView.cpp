// StatePattern_GameView.cpp : implementation of the CStatePattern_GameView class
//

#include "stdafx.h"
#include "StatePattern_Game.h"

#include "StatePattern_GameDoc.h"
#include "StatePattern_GameView.h"
#include "MainFrm.h"

#include "GameManager.h"
#include "memdc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CStatePattern_GameView

IMPLEMENT_DYNCREATE(CStatePattern_GameView, CView)

BEGIN_MESSAGE_MAP(CStatePattern_GameView, CView)
	//{{AFX_MSG_MAP(CStatePattern_GameView)
	ON_WM_KEYDOWN()
	ON_WM_SIZE()
	ON_WM_ERASEBKGND()
	ON_WM_PAINT()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CStatePattern_GameView construction/destruction

CStatePattern_GameView::CStatePattern_GameView()
{
	// Set up the frame rate counters. The ticks
	// per frame is designed to to make the frame rate
	// a little faster than what we want so the
	// animation is smoother.
	m_dFrameRate = 30;
	m_dwTicksPerFrame = (int)(1000.0/(m_dFrameRate*1.1));	
	if(m_dwTicksPerFrame > 1000) m_dwTicksPerFrame = 1000;
	if(m_dwTicksPerFrame < 1) m_dwTicksPerFrame = 1;
}

CStatePattern_GameView::~CStatePattern_GameView()
{
}

BOOL CStatePattern_GameView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CStatePattern_GameView drawing

void CStatePattern_GameView::OnDraw(CDC* pDC)
{
	CStatePattern_GameDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
}

/////////////////////////////////////////////////////////////////////////////
// CStatePattern_GameView printing

BOOL CStatePattern_GameView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CStatePattern_GameView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CStatePattern_GameView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CStatePattern_GameView diagnostics

#ifdef _DEBUG
void CStatePattern_GameView::AssertValid() const
{
	CView::AssertValid();
}

void CStatePattern_GameView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CStatePattern_GameDoc* CStatePattern_GameView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CStatePattern_GameDoc)));
	return (CStatePattern_GameDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CStatePattern_GameView message handlers

void CStatePattern_GameView::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags) 
{
	if ( nChar == VK_ESCAPE )
	{
		// we quit the game...
		((CMainFrame*)AfxGetMainWnd())->SendMessage(WM_CLOSE);
		return;
	}

	m_GameManager.ProcessKeyboardEvent(nChar);
	
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}

BOOL CStatePattern_GameView::CheckNextFrame()
{
	static DWORD nexttick;								// Clock value place holder
	DWORD tick;			
	
	tick = GetTickCount();
	
	// Look at the current tick state and compare 
	// it to the last time we checked.
	if(nexttick > tick + m_dwTicksPerFrame*2) 			// Delay too big??
		nexttick = tick + m_dwTicksPerFrame;
	if(tick < nexttick) return false;					// Not time yet??
	
	// reset the tick marker
	nexttick = GetTickCount() + m_dwTicksPerFrame;
	return true;
}

void CStatePattern_GameView::DoFrame()
{
	// Don't draw unless it is time...
	if(!CheckNextFrame()) 
		return;

	CClientDC dc(this);
	CRect rect;
	GetClientRect(&rect);
	cMemDC memDC(&dc, rect);
	memDC.FillSolidRect(rect, ::GetSysColor(COLOR_WINDOW));
	m_GameManager.Update();
	m_GameManager.Draw(&memDC);
}

void CStatePattern_GameView::OnSize(UINT nType, int cx, int cy) 
{
	CView::OnSize(nType, cx, cy);
	
	m_GameManager.SetRect(CRect(0,0,cx,cy));
}

BOOL CStatePattern_GameView::OnEraseBkgnd(CDC* pDC) 
{
	return FALSE;
}

void CStatePattern_GameView::OnPaint() 
{
	CPaintDC dc(this); // device context for painting
	
	// we render the frame...
	DoFrame();
}
