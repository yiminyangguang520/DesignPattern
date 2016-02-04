#include "Stdafx.h"
#include "Filler.h"

CFiller::CFiller()
{
    m_csText = _T("");
    m_nMinVal = 0;
    m_nMaxVal = 100;
    m_nPos = 0;
    m_FillerColor = RGB(0, 0, 255);
    m_FillerBkColor = RGB(255, 0, 0);
    m_FillerTextColor = RGB(255, 255, 255);
}

CFiller::~CFiller()
{

}

INT CFiller::SetFillerText(LPCSTR lpszText)
{
    // Step 1 - Set Filler Text
    m_csText = lpszText;
    return SUCCESS;
}

INT CFiller::SetFillerRange(INT nMinVal, INT nMaxVal)
{
    // Step 1 - Set MinVal and MaxVal after validating
    if (nMaxVal <= nMinVal)
    {
        return FAILURE;
    }

    m_nMinVal = nMinVal;
    m_nMaxVal = nMaxVal;
    return SUCCESS;
}

INT CFiller::GetFillerPos()
{
    // Step 1 - Return m_nPos
    return m_nPos;
}

INT CFiller::SetFillerPos(INT nPos)
{
    // Step 1 - Validate pos before setting
    if (nPos < m_nMinVal || nPos > m_nMaxVal)
    {
        return FAILURE;
    }
    // Step 2 - Store old filler pos
    INT nOldPos = m_nPos;

    // Step 3 - Set m_nPos
    m_nPos = nPos;

    // Step 4 - Return old filler pos
    return nOldPos;
}

COLORREF CFiller::SetFillerColor(COLORREF & rFillerColor)
{
    // Step 1 - Store old color
    COLORREF OldFillerColor = m_FillerColor;

    // Step 2 - Set m_FillerColor
    m_FillerColor = rFillerColor;

    // Step 3 - Return old filler color
    return OldFillerColor;
}

COLORREF CFiller::SetFillerBkColor(COLORREF & rFillerBkColor)
{
    // Step 1 - Store old bk color
    COLORREF OldFillerBkColor = m_FillerBkColor;

    // Step 2 - Set m_FillerBkColor
    m_FillerBkColor = rFillerBkColor;

    // Step 3 - Return old filler bk color
    return OldFillerBkColor;
}

COLORREF CFiller::SetFillerTextColor(COLORREF & rFillerTextColor)
{
    // Step 1 - Store old text color
    COLORREF OldFillerTextColor = m_FillerTextColor;

    // Step 2 - Set m_FillerTextColor
    m_FillerTextColor = rFillerTextColor;

    // Step 3 - Return old filler text color
    return OldFillerTextColor;
}

// CLtoRFiller - Implementation
CLToRFiller::CLToRFiller()
    : CFiller()
{

}

CLToRFiller::~CLToRFiller()
{

}

INT CLToRFiller::DoFill(CWnd * pWnd, const CRect & rRect)
{
    CRect Rect = rRect;
    // Step 1 - Validate window pointer
    ASSERT(IsWindow(pWnd->m_hWnd));

    // Step 2 - Calculate Fill Area
    INT nRight = 0;
    nRight = (rRect.Width() * m_nPos) / (m_nMaxVal - m_nMinVal);
    CRect FillArea(rRect.left, rRect.top, nRight, rRect.bottom);
    CRect RemainingArea(nRight, rRect.top, rRect.right, rRect.bottom);
    CDC * pDC = pWnd->GetDC();
    pDC->FillSolidRect(FillArea, m_FillerColor);
    pDC->FillSolidRect(RemainingArea, m_FillerBkColor);

    // Step 3 - Display text provided or the default %
    if (m_csText.IsEmpty() == FALSE)
    {
        pDC->SetBkMode(TRANSPARENT);
        pDC->SetTextColor(m_FillerTextColor);
        pDC->DrawText(m_csText, m_csText.GetLength(),
            Rect, DT_CENTER | DT_WORDBREAK | DT_VCENTER | DT_SINGLELINE);
    }
    else if (m_nPos > 0)
    {
        CHAR szText[512];

        memset(szText, 0, sizeof(szText));
        INT nPercent = (INT)(((double)m_nPos / (double)m_nMaxVal) * 100);
        sprintf_s(szText, "%d%%", nPercent);
        pDC->SetBkMode(TRANSPARENT);
        pDC->SetTextColor(m_FillerTextColor);
        pDC->DrawText(szText, strlen(szText),
            Rect, DT_CENTER | DT_WORDBREAK | DT_VCENTER | DT_SINGLELINE);
    }

    pWnd->ReleaseDC(pDC);
    return SUCCESS;
}


// CRToLFiller - Implementation
CRToLFiller::CRToLFiller()
    : CFiller()
{

}

CRToLFiller::~CRToLFiller()
{

}

INT CRToLFiller::DoFill(CWnd * pWnd, const CRect & rRect)
{
    CRect Rect = rRect;
    // Step 1 - Validate window pointer
    ASSERT(IsWindow(pWnd->m_hWnd));

    // Step 2 - Calculate Fill Area
    INT nLeft = 0;
    nLeft = (rRect.Width() * m_nPos) / (m_nMaxVal - m_nMinVal);
    nLeft = rRect.Width() - nLeft;
    CRect FillArea(nLeft, rRect.top, rRect.right, rRect.bottom);
    CRect RemainingArea(rRect.left, rRect.top, nLeft, rRect.bottom);
    CDC * pDC = pWnd->GetDC();
    pDC->FillSolidRect(FillArea, m_FillerColor);
    pDC->FillSolidRect(RemainingArea, m_FillerBkColor);

    // Step 3 - Display text provided or the default %
    if (m_csText.IsEmpty() == FALSE)
    {
        pDC->SetBkMode(TRANSPARENT);
        pDC->SetTextColor(m_FillerTextColor);
        pDC->DrawText(m_csText, m_csText.GetLength(),
            Rect, DT_CENTER | DT_WORDBREAK | DT_VCENTER | DT_SINGLELINE);
    }
    else if (m_nPos > 0)
    {
        CHAR szText[512];

        memset(szText, 0, sizeof(szText));
        INT nPercent = (INT)(((double)m_nPos / (double)m_nMaxVal) * 100);
        sprintf_s(szText, "%d%%", nPercent);
        pDC->SetBkMode(TRANSPARENT);
        pDC->SetTextColor(m_FillerTextColor);
        pDC->DrawText(szText, strlen(szText),
            Rect, DT_CENTER | DT_WORDBREAK | DT_VCENTER | DT_SINGLELINE);
    }

    pWnd->ReleaseDC(pDC);
    return SUCCESS;
}
