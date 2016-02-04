// GameManager.cpp: implementation of the CGameManager class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "GameState.h"
#include "StatePattern_Game.h"
#include "GameManager.h"
#include "IntroductionState.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CGameManager::CGameManager()
{
    m_pGameState = NULL;

    // by default, we start with the introduction mode...
    ChangeState(CIntroductionState::Instance());
}

CGameManager::~CGameManager()
{
}

void CGameManager::ChangeState(CGameState * pState)
{
    ASSERT(pState);
    if (pState != m_pGameState)
    {
        m_pGameState = pState;
        m_pGameState->Init();
    }
}

void CGameManager::ProcessKeyboardEvent(char nKey)
{
    ASSERT(m_pGameState);
    m_pGameState->KeyboardEvent(this, nKey);
}

void CGameManager::Update()
{
    ASSERT(m_pGameState);
    m_pGameState->Update(this);
}

void CGameManager::Draw(CDC * pDC)
{
    ASSERT(m_pGameState);
    m_pGameState->Draw(this, pDC);
}

void CGameManager::SetRect(CRect & rect)
{
    ASSERT(m_pGameState);
    CGameState::m_Rect = rect;
    m_pGameState->Resize();
}
