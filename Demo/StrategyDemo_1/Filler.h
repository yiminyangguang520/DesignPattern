#ifndef _FILLER
#define _FILLER

#include "stdafx.h"

// List of predefined constants
#ifndef SUCCESS 
#define SUCCESS 0
#endif

#ifndef FAILURE
#define FAILURE -1
#endif

// Class CFiller for filling a rectangle
class CFiller
{
	// Constructor and Destructor
	public :
		CFiller();
		virtual ~CFiller();

	// Services
	public :
		INT			SetFillerText( LPCSTR );
		INT			SetFillerRange( INT, INT );
		INT			SetFillerPos( INT );
		INT			GetFillerPos();
		COLORREF	SetFillerColor( COLORREF & );
		COLORREF	SetFillerBkColor( COLORREF & );
		COLORREF	SetFillerTextColor( COLORREF & );
		virtual INT		DoFill( CWnd *, const CRect & ) = 0;

	// Attributes
	protected :
		CString		m_csText;
		INT			m_nMinVal;
		INT			m_nMaxVal;
		INT			m_nPos;
		COLORREF	m_FillerColor;
		COLORREF	m_FillerBkColor;
		COLORREF	m_FillerTextColor;
};


// Class CLToRFiller for Left to Right Filler
class CLToRFiller : public CFiller
{
	// Constructor and Destructor
	public :
		CLToRFiller();
		virtual ~CLToRFiller();

	// Services
	public :
		virtual INT DoFill( CWnd *, const CRect & );
};

// Class CRToLFiller for Right to Left Filler
class CRToLFiller : public CFiller
{
	// Constructor and Destructor
	public :
		CRToLFiller();
		virtual ~CRToLFiller();

	// Services
	public :
		virtual INT DoFill( CWnd *, const CRect & );
};
#endif