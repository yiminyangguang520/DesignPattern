// HighScoreState.cpp: implementation of the CHighScoreState class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "StatePattern_Game.h"
#include "HighScoreState.h"
#include "IntroductionState.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#define new DEBUG_NEW
#endif

CHighScoreState CHighScoreState::m_HighScoreState;

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CHighScoreState::CHighScoreState()
{

}

CHighScoreState::~CHighScoreState()
{

}

CHighScoreState* CHighScoreState::Instance()
{
    return (&m_HighScoreState);
}

void CHighScoreState::KeyboardEvent(CGameManager * pManager, char nKey)
{
    switch (nKey)
    {
    case VK_F1:
        TRACE("* HighScore State changed the current state to Introduction State\n");
        ChangeState(pManager, CIntroductionState::Instance());
        break;
    }
}

void CHighScoreState::Update(CGameManager * pManager)
{

}

void CHighScoreState::Draw(CGameManager * pManager, CDC * pDC)
{
    CRect tmpRect = m_Rect;
    CFont* pOldFont = pDC->SelectObject(&m_TextFont);
    pDC->FillSolidRect(m_Rect, RGB(0, 0, 0));

    pDC->SetBkMode(TRANSPARENT);
    pDC->SetTextColor(RGB(255, 255, 0));
    pDC->DrawText("Highscores!!!", m_Rect, DT_VCENTER | DT_CENTER | DT_SINGLELINE);

    tmpRect.top += (tmpRect.Height() / 2) - 80;
    pDC->DrawText("Press F1 for the Main Menu", tmpRect, DT_CENTER | DT_SINGLELINE);


    // clean up...
    pDC->SelectObject(pOldFont);
}

void CHighScoreState::Resize()
{

}

void CHighScoreState::Init()
{
    if ((HFONT)m_TextFont)
    {
        m_TextFont.DeleteObject();
    }

    m_TextFont.CreatePointFont(160, "Arial");

    TRACE("* Initializing HighScore State\n");
}
