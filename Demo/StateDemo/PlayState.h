// PlayState.h: interface for the CPlayState class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_PLAYSTATE_H__AB04DC0C_BB05_11D4_87CB_00C04F73BBBB__INCLUDED_)
#define AFX_PLAYSTATE_H__AB04DC0C_BB05_11D4_87CB_00C04F73BBBB__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#include "GameState.h"

class CStarfieldSimulator;

class CPlayState : public CGameState
{
public:
    virtual void Init();
    virtual void Resize();
    virtual void Draw(CGameManager * pManager, CDC * pDC);
    virtual void Update(CGameManager * pManager);
    virtual void KeyboardEvent(CGameManager* pManager, char nKey);

    static CPlayState* Instance();
    virtual ~CPlayState();

protected:
    CFont m_OptionFont;
    void InitStarfield();
    CBitmap m_bmpShip;
    CPlayState();
    void DrawStarfield(CDC * pDC);

    // the starfield simulator
    CStarfieldSimulator m_Starfield;

private:
    static CPlayState m_PlayState; // singleton
};

#endif // !defined(AFX_PLAYSTATE_H__AB04DC0C_BB05_11D4_87CB_00C04F73BBBB__INCLUDED_)
