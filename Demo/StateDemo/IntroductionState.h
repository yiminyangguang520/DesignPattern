// IntroductionState.h: interface for the CIntroductionState class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_INTRODUCTIONSTATE_H__AB04DC09_BB05_11D4_87CB_00C04F73BBBB__INCLUDED_)
#define AFX_INTRODUCTIONSTATE_H__AB04DC09_BB05_11D4_87CB_00C04F73BBBB__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#include "StarfieldSimulator.h"
#include "GameState.h"

class CIntroductionState : public CGameState
{
public:
    virtual void Init();
    virtual void Resize();
    virtual void Draw(CGameManager * pManager, CDC * pDC);
    virtual void Update(CGameManager * pManager);
    virtual void KeyboardEvent(CGameManager* pManager, char nKey);

    static CIntroductionState* Instance();

    virtual ~CIntroductionState();

protected:
    CFont m_TextFont;
    CIntroductionState();

private:
    static CIntroductionState m_IntroductionState; // singleton...
};

#endif // !defined(AFX_INTRODUCTIONSTATE_H__AB04DC09_BB05_11D4_87CB_00C04F73BBBB__INCLUDED_)
