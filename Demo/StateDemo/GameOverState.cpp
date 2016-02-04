// GameOverState.cpp: implementation of the CGameOverState class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "StatePattern_Game.h"
#include "GameOverState.h"
#include "IntroductionState.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#define new DEBUG_NEW
#endif

#define TEXT_MOVE_DELAY 10

CGameOverState CGameOverState::m_GameOverStateState;

CGameOverState::CGameOverState()
{

}

CGameOverState::~CGameOverState()
{

}

CGameOverState* CGameOverState::Instance()
{
    return (&m_GameOverStateState);
}

void CGameOverState::KeyboardEvent(CGameManager * pManager, char nKey)
{
    switch (nKey)
    {
    case VK_F1:
        TRACE("* GameOver State changed the current state to Introduction State\n");
        ChangeState(pManager, CIntroductionState::Instance());
        break;
    }
}

void CGameOverState::Update(CGameManager * pManager)
{
}

void CGameOverState::Draw(CGameManager * pManager, CDC * pDC)
{
    CRect tmpRect = m_Rect;
    CFont* pOldFont = pDC->SelectObject(&m_TextFont);
    pDC->FillSolidRect(m_Rect, RGB(0, 0, 0));

    pDC->SetBkMode(TRANSPARENT);
    pDC->SetTextColor(RGB(255, 255, 0));
    pDC->DrawText("Game Over...", m_Rect, DT_CENTER | DT_VCENTER | DT_SINGLELINE);

    tmpRect.top += (tmpRect.Height() / 2) - 80;
    pDC->DrawText("Press F1 for the Main Menu", tmpRect, DT_CENTER | DT_SINGLELINE);

    // clean up
    pDC->SelectObject(pOldFont);
}

void CGameOverState::Resize()
{

}

void CGameOverState::Init()
{
    if ((HFONT)m_TextFont)
    {
        m_TextFont.DeleteObject();
    }

    m_TextFont.CreatePointFont(260, "Arial");

    TRACE("* Initializing GameOver State\n");
}
