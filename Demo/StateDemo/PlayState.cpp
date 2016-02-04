// PlayState.cpp: implementation of the CPlayState class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "StarfieldSimulator.h"
#include "StatePattern_Game.h"
#include "PlayState.h"
#include "IntroductionState.h"
#include "GameOverState.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#define new DEBUG_NEW
#endif

CPlayState CPlayState::m_PlayState;

CPlayState::CPlayState()
{

}

CPlayState::~CPlayState()
{

}

CPlayState* CPlayState::Instance()
{
    return (&m_PlayState);
}

void CPlayState::KeyboardEvent(CGameManager * pManager, char nKey)
{
    switch (nKey)
    {
    case '1':
        // go to game over mode
        TRACE("* Play State changed the current state to Game Over State\n");
        ChangeState(pManager, CGameOverState::Instance());
        break;
    case '2':
        // go back to introduction mode
        TRACE("* Play State changed the current state to Introduction State\n");
        ChangeState(pManager, CIntroductionState::Instance());
        break;
    }
}

void CPlayState::Update(CGameManager * pManager)
{
    // we update the starfield
    m_Starfield.Update();
}

void CPlayState::Draw(CGameManager * pManager, CDC * pDC)
{
    CRect tmpRect = m_Rect;
    BITMAP bmp;
    CDC compDC;
    compDC.CreateCompatibleDC(pDC);
    CBitmap* pOldBmp = compDC.SelectObject(&m_bmpShip);

    m_bmpShip.GetObject(sizeof(BITMAP), &bmp);

    pDC->FillSolidRect(m_Rect, RGB(0, 0, 0));

    //we draw the starfield
    DrawStarfield(pDC);

    // we draw the ship
    pDC->BitBlt(m_Rect.Width() / 2 - bmp.bmWidth / 2, m_Rect.Height() / 2 - bmp.bmHeight / 2,
        bmp.bmWidth, bmp.bmHeight,
        &compDC, 0, 0, SRCCOPY);

    // we draw the text
    pDC->SetTextColor(RGB(255, 255, 0));
    pDC->SetBkMode(TRANSPARENT);
    tmpRect.DeflateRect(tmpRect.Width() / 4, 0);
    tmpRect.top += tmpRect.Height() / 2 + 40;
    pDC->DrawText(MAKEINTRESOURCE(IDS_STRING_GAMEDESCRIPTION), tmpRect, DT_CENTER | DT_WORDBREAK);

    // we draw the options
    pDC->SetTextColor(RGB(255, 255, 255));
    CFont* pOldFont = pDC->SelectObject(&m_OptionFont);
    tmpRect.top -= m_Rect.Width() / 4;
    tmpRect.bottom -= m_Rect.Width() / 4;
    pDC->DrawText("Press 1 to be Game Over", tmpRect, DT_CENTER);

    tmpRect.top += 60;
    tmpRect.bottom += 60;
    pDC->DrawText("Press 2 for the Main Menu", tmpRect, DT_CENTER);

    // clean up
    compDC.SelectObject(pOldBmp);
    pDC->SelectObject(pOldFont);
}

void CPlayState::DrawStarfield(CDC * pDC)
{
    CPtrArray* pStars = m_Starfield.GetStars();
    CStar* pStar;
    POINT pt;

    for (int i = 0; i < pStars->GetSize(); ++i)
    {
        pStar = (CStar*)pStars->GetAt(i);
        pt = pStar->Get2dPos(256, m_Rect.Width() / 2, m_Rect.Width(), m_Rect.Height());

        pDC->SetPixel(pt, pStar->GetColor());
    }
}

void CPlayState::Resize()
{
    // we re-initialize the starfield
    InitStarfield();
}

void CPlayState::Init()
{
    // we load the ship bitmap
    if ((HBITMAP)m_bmpShip)
    {
        m_bmpShip.DeleteObject();
    }

    m_bmpShip.LoadBitmap(IDB_BITMAP_SHIP);

    if ((HFONT)m_OptionFont)
    {
        m_OptionFont.DeleteObject();
    }

    m_OptionFont.CreatePointFont(160, "Arial");

    // we initialize the starfield
    InitStarfield();

    TRACE("* Initializing Play State\n");
}

void CPlayState::InitStarfield()
{
    if (!m_Rect.IsRectNull())
    {
        // we initialize the starfield simulator
        m_Starfield.SetNbStars(100, m_Rect);
    }
}
