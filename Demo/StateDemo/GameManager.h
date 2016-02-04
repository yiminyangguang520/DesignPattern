// GameManager.h: interface for the CGameManager class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GAMEMANAGER_H__AB04DC05_BB05_11D4_87CB_00C04F73BBBB__INCLUDED_)
#define AFX_GAMEMANAGER_H__AB04DC05_BB05_11D4_87CB_00C04F73BBBB__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

class CGameState;

class CGameManager
{
public:
    CGameManager();
    virtual ~CGameManager();

public:
    void SetRect(CRect& rect);
    void Draw(CDC* pDC);
    void Update();
    void ProcessKeyboardEvent(char nKey);

private:
    void ChangeState(CGameState* pState);
    friend class CGameState;
    CGameState* m_pGameState;
};

#endif // !defined(AFX_GAMEMANAGER_H__AB04DC05_BB05_11D4_87CB_00C04F73BBBB__INCLUDED_)
