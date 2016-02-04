// GameState.cpp: implementation of the CGameState class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "GameManager.h"
#include "StatePattern_Game.h"
#include "GameState.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

CRect CGameState::m_Rect;
//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CGameState::CGameState()
{

}

CGameState::~CGameState()
{

}

void CGameState::ChangeState(CGameManager * pManager, CGameState * pState)
{
	pManager->ChangeState(pState);
}

void CGameState::KeyboardEvent(CGameManager* pManager, char nKey)
{

}

void CGameState::Update(CGameManager * pManager)
{

}

void CGameState::Draw(CGameManager * pManager, CDC * pDC)
{

}

void CGameState::Resize()
{

}

void CGameState::Init()
{

}
