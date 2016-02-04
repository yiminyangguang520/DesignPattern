// 3dVector.cpp: implementation of the C3dVector class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "3dVector.h"

#include <math.h>

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#define new DEBUG_NEW
#endif

C3dVector::C3dVector()
{

}

C3dVector::C3dVector(double x, double y, double z)
{
    m_X = x;
    m_Y = y;
    m_Z = z;
}

C3dVector::~C3dVector()
{

}

POINT C3dVector::Get2dPos(int zoom, int dist, int width, int height)
{
    POINT pt;
    pt.x = (int)(zoom * m_X / (m_Z + dist) + width / 2);
    pt.y = (int)(zoom * m_Y / (m_Z + dist) + height / 2);

    return pt;
}

void C3dVector::Rotate(double alpha)
{
    //  RotateX(alpha);
    //  RotateY(alpha);
    RotateZ(alpha);
}

void C3dVector::RotateZ(double alpha)
{
    double x2, y2;
    x2 = m_X * cos(alpha) - m_Y * sin(alpha);
    y2 = m_X * sin(alpha) + m_Y * cos(alpha);
    m_X = x2;
    m_Y = y2;
    /* The two doubles are temporary to store the X- and Y-Values */
}

void C3dVector::RotateY(double alpha)
{
    double x2, z2;
    x2 = m_X * cos(alpha) + m_Z * sin(alpha);
    z2 = -m_X * sin(alpha) + m_Z * cos(alpha);
    m_X = x2;
    m_Y = z2;
}

void C3dVector::RotateX(double alpha)
{
    double y2, z2;
    y2 = m_Y * cos(alpha) - m_Z * sin(alpha);
    z2 = m_Y * sin(alpha) + m_Z * cos(alpha);
    m_Y = y2;
    m_Z = z2;
}
