// StarfieldSimulator.cpp: implementation of the CStarfieldSimulator class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "StarfieldSimulator.h"
#include "3dVector.h"
#include <math.h>

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#define new DEBUG_NEW
#endif

#define STAR_MOVE_DELAY 10
#define STAR_SPEED 5
//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CStarfieldSimulator::CStarfieldSimulator()
{
    m_nNextFrameTime = GetTickCount() + STAR_MOVE_DELAY;
    m_iStarSpeed = STAR_SPEED;
    m_bCrazy = FALSE;
}

CStarfieldSimulator::~CStarfieldSimulator()
{
    FreeStars();
}

void CStarfieldSimulator::SetNbStars(int iNb, CRect rectArea)
{
    m_Rect = rectArea;
    FreeStars();

    for (int i = 0; i < iNb; ++i)
    {
        m_Stars.Add(GetNewStar());
    }
}

void CStarfieldSimulator::FreeStars()
{
    for (int i = 0; i < m_Stars.GetSize(); ++i)
    {
        delete ((CStar*)m_Stars.GetAt(i));
    }

    m_Stars.RemoveAll();
}

CStar* CStarfieldSimulator::GetNewStar()
{
    CStar* pStar = new CStar();
    pStar->m_X = (rand() % (m_Rect.Width() ? m_Rect.Width() : 1)) - m_Rect.Width() / 2;
    pStar->m_Y = (rand() % (m_Rect.Height() ? m_Rect.Height() : 1)) - m_Rect.Height() / 2;
    pStar->m_Z = (rand() % (m_Rect.Width() ? m_Rect.Width() : 1)) - m_Rect.Width() / 2;

    return pStar;
}

CPtrArray* CStarfieldSimulator::GetStars()
{
    return &m_Stars;
}

void CStarfieldSimulator::Rotate(double alpha)
{
    CStar* pStar = nullptr;

    for (int i = 0; i < m_Stars.GetSize(); ++i)
    {
        pStar = (CStar*)(m_Stars.GetAt(i));
        pStar->Rotate(alpha);
    }
}

void CStarfieldSimulator::IncrementZ(double value)
{
    CStar* pStar;

    for (int i = 0; i < m_Stars.GetSize(); ++i)
    {
        pStar = (CStar*)(m_Stars.GetAt(i));
        pStar->m_Z += value;

        if (pStar->m_Z < -m_Rect.Width() / 2 || pStar->m_Z > m_Rect.Width() / 2)
        {
            pStar->m_Z = 0;
        }
    }
}

void CStarfieldSimulator::Update()
{
    static double pos = 0.0;

    if (GetTickCount() > (UINT)m_nNextFrameTime)
    {
        IncrementZ(-m_iStarSpeed);

        if (m_bCrazy)
        {
            Rotate(cos(pos)*0.03);
            pos += 0.01;
        }

        m_nNextFrameTime = STAR_MOVE_DELAY + GetTickCount();
    }
}

void CStarfieldSimulator::SetStarSpeed(int iSpeed)
{
    m_iStarSpeed = iSpeed;
}

void CStarfieldSimulator::SetCrazyMode(BOOL bOn)
{
    m_bCrazy = bOn;
}
