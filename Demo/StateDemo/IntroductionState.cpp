// IntroductionState.cpp: implementation of the CIntroductionState class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "StatePattern_Game.h"
#include "IntroductionState.h"
#include "PlayState.h"
#include "HighScoreState.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#define new DEBUG_NEW
#endif

CIntroductionState CIntroductionState::m_IntroductionState;


CIntroductionState::CIntroductionState()
{

}

CIntroductionState::~CIntroductionState()
{

}

void CIntroductionState::KeyboardEvent(CGameManager* pManager, char nKey)
{
    switch (nKey)
    {
    case VK_F1:
        TRACE("* Introduction State changed the current state to Play State\n");
        ChangeState(pManager, CPlayState::Instance());
        break;
    case VK_F2:
        TRACE("* Introduction State changed the current state to HighScore State\n");
        ChangeState(pManager, CHighScoreState::Instance());
        break;
    }
}

CIntroductionState* CIntroductionState::Instance()
{
    return (&m_IntroductionState);
}

void CIntroductionState::Update(CGameManager * pManager)
{
}

void CIntroductionState::Draw(CGameManager * pManager, CDC * pDC)
{
    CFont* pOldFont = pDC->SelectObject(&m_TextFont);
    CRect tmpRect = m_Rect;
    pDC->FillSolidRect(m_Rect, RGB(0, 0, 0));
    pDC->SetTextColor(RGB(255, 255, 0));
    pDC->SetBkMode(TRANSPARENT);

    tmpRect.top += (tmpRect.Height() / 2) - 40;
    pDC->DrawText("Press F1 to start the game", tmpRect, DT_CENTER | DT_SINGLELINE);

    tmpRect.top += 40;
    pDC->DrawText("Press F2 to see the high scores", tmpRect, DT_CENTER | DT_SINGLELINE);

    pDC->SetTextColor(RGB(255, 255, 255));
    tmpRect.top += 140;
    pDC->DrawText("Press ESC to quit", tmpRect, DT_CENTER | DT_SINGLELINE);

    // clean up
    pDC->SelectObject(pOldFont);
}

void CIntroductionState::Resize()
{
}

void CIntroductionState::Init()
{
    if ((HFONT)m_TextFont)
    {
        m_TextFont.DeleteObject();
    }

    m_TextFont.CreatePointFont(160, "Arial");

    TRACE("* Initializing Introduction State\n");
}
