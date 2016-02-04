// GameState.h: interface for the CGameState class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GAMESTATE_H__AB04DC06_BB05_11D4_87CB_00C04F73BBBB__INCLUDED_)
#define AFX_GAMESTATE_H__AB04DC06_BB05_11D4_87CB_00C04F73BBBB__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

class CGameManager;

class CGameState
{
public:
    virtual void Init() = 0;
    virtual void Resize() = 0;
    virtual void KeyboardEvent(CGameManager* pManager, char nKey) = 0;
    virtual void Draw(CGameManager * pManager, CDC* pDC) = 0;
    virtual void Update(CGameManager* pManager) = 0;

    virtual ~CGameState();

public:
    static CRect m_Rect;

protected:
    CGameState();

    void ChangeState(CGameManager* pManager, CGameState* pState);
};

#endif // !defined(AFX_GAMESTATE_H__AB04DC06_BB05_11D4_87CB_00C04F73BBBB__INCLUDED_)
