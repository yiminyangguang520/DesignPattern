// StatePattern_GameDoc.h : interface of the CStatePattern_GameDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_STATEPATTERN_GAMEDOC_H__AB04DBFB_BB05_11D4_87CB_00C04F73BBBB__INCLUDED_)
#define AFX_STATEPATTERN_GAMEDOC_H__AB04DBFB_BB05_11D4_87CB_00C04F73BBBB__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000


class CStatePattern_GameDoc : public CDocument
{
protected: // create from serialization only
    CStatePattern_GameDoc();
    DECLARE_DYNCREATE(CStatePattern_GameDoc)

    // Attributes
public:

    // Operations
public:

    // Overrides
        // ClassWizard generated virtual function overrides
        //{{AFX_VIRTUAL(CStatePattern_GameDoc)
public:
    virtual BOOL OnNewDocument();
    virtual void Serialize(CArchive& ar);
    //}}AFX_VIRTUAL

// Implementation
public:
    virtual ~CStatePattern_GameDoc();

#ifdef _DEBUG
    virtual void AssertValid() const;
    virtual void Dump(CDumpContext& dc) const;
#endif

protected:

    // Generated message map functions
protected:
    //{{AFX_MSG(CStatePattern_GameDoc)
        // NOTE - the ClassWizard will add and remove member functions here.
        //    DO NOT EDIT what you see in these blocks of generated code !
    //}}AFX_MSG
    DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STATEPATTERN_GAMEDOC_H__AB04DBFB_BB05_11D4_87CB_00C04F73BBBB__INCLUDED_)
