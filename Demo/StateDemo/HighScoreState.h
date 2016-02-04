// HighScoreState.h: interface for the CHighScoreState class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_HIGHSCORESTATE_H__AB04DC0D_BB05_11D4_87CB_00C04F73BBBB__INCLUDED_)
#define AFX_HIGHSCORESTATE_H__AB04DC0D_BB05_11D4_87CB_00C04F73BBBB__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#include "GameState.h"

class CHighScoreState : public CGameState
{
public:
    virtual void Init();
    virtual void Resize();
    virtual void Draw(CGameManager * pManager, CDC * pDC);
    virtual void Update(CGameManager * pManager);
    virtual void KeyboardEvent(CGameManager* pManager, char nKey);

    static CHighScoreState* Instance();

    virtual ~CHighScoreState();

protected:
    CFont m_TextFont;
    CHighScoreState();

private:
    static CHighScoreState m_HighScoreState;
};

#endif // !defined(AFX_HIGHSCORESTATE_H__AB04DC0D_BB05_11D4_87CB_00C04F73BBBB__INCLUDED_)
