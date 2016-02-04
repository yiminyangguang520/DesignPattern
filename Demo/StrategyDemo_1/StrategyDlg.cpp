// StrategyDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Strategy.h"
#include "StrategyDlg.h"
#include "Filler.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About
class CAboutDlg : public CDialog
{
public:
    CAboutDlg();

    // Dialog Data
        //{{AFX_DATA(CAboutDlg)
    enum { IDD = IDD_ABOUTBOX };
    //}}AFX_DATA

    // ClassWizard generated virtual function overrides
    //{{AFX_VIRTUAL(CAboutDlg)
protected:
    virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
    //}}AFX_VIRTUAL

// Implementation
protected:
    //{{AFX_MSG(CAboutDlg)
    //}}AFX_MSG
    DECLARE_MESSAGE_MAP()
};


CAboutDlg::CAboutDlg()
    : CDialog(CAboutDlg::IDD)
{
    //{{AFX_DATA_INIT(CAboutDlg)
    //}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);
    //{{AFX_DATA_MAP(CAboutDlg)
    //}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
    //{{AFX_MSG_MAP(CAboutDlg)
        // No message handlers
    //}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CStrategyDlg dialog

CStrategyDlg::CStrategyDlg(CWnd* pParent /*=NULL*/)
    : CDialog(CStrategyDlg::IDD, pParent)
{
    //{{AFX_DATA_INIT(CStrategyDlg)
        // NOTE: the ClassWizard will add member initialization here
    //}}AFX_DATA_INIT
    // Note that LoadIcon does not require a subsequent DestroyIcon in Win32
    m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);

    // Step 1 - Create two progress indicators
    m_pProgInd1 = new CProgressIndicator; // Use default filler object
    ASSERT(m_pProgInd1 != NULL);
    m_pProgInd2 = new CProgressIndicator(new CRToLFiller);
    ASSERT(m_pProgInd2 != NULL);
}

CStrategyDlg::~CStrategyDlg()
{
    // Step 1 - Get Filler object and delete
    CFiller * pRToLFiller = m_pProgInd2->GetFiller();
    delete pRToLFiller;
    // Step 2 - Do cleanup
    delete m_pProgInd1;
    delete m_pProgInd2;
}

void CStrategyDlg::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);
    //{{AFX_DATA_MAP(CStrategyDlg)
        // NOTE: the ClassWizard will add DDX and DDV calls here
    //}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CStrategyDlg, CDialog)
    //{{AFX_MSG_MAP(CStrategyDlg)
    ON_WM_SYSCOMMAND()
    ON_WM_PAINT()
    ON_WM_QUERYDRAGICON()
    ON_WM_TIMER()
    ON_BN_CLICKED(IDABOUT, OnAbout)
    ON_BN_CLICKED(IDSTARTFILL, OnStartfill)
    //}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CStrategyDlg message handlers

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CStrategyDlg::OnPaint()
{
    if (IsIconic())
    {
        CPaintDC dc(this); // device context for painting

        SendMessage(WM_ICONERASEBKGND, (WPARAM)dc.GetSafeHdc(), 0);

        // Center icon in client rectangle
        int cxIcon = GetSystemMetrics(SM_CXICON);
        int cyIcon = GetSystemMetrics(SM_CYICON);
        CRect rect;
        GetClientRect(&rect);
        int x = (rect.Width() - cxIcon + 1) / 2;
        int y = (rect.Height() - cyIcon + 1) / 2;

        // Draw the icon
        dc.DrawIcon(x, y, m_hIcon);
    }
    else
    {
        CDialog::OnPaint();
    }
}

void CStrategyDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
    if ((nID & 0xFFF0) == IDM_ABOUTBOX)
    {
        CAboutDlg dlgAbout;
        dlgAbout.DoModal();
    }
    else
    {
        CDialog::OnSysCommand(nID, lParam);
    }
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CStrategyDlg::OnQueryDragIcon()
{
    return (HCURSOR)m_hIcon;
}

BOOL CStrategyDlg::OnInitDialog()
{
    CDialog::OnInitDialog();

    // Step 1 - Add "About..." menu item to system menu.

    // IDM_ABOUTBOX must be in the system command range.
    ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
    ASSERT(IDM_ABOUTBOX < 0xF000);

    CMenu* pSysMenu = GetSystemMenu(FALSE);
    if (pSysMenu != NULL)
    {
        CString strAboutMenu;
        strAboutMenu.LoadString(IDS_ABOUTBOX);
        if (!strAboutMenu.IsEmpty())
        {
            pSysMenu->AppendMenu(MF_SEPARATOR);
            pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
        }
    }

    // Step 2 - Set the icon for this dialog.  The framework does this automatically
    //  when the application's main window is not a dialog
    SetIcon(m_hIcon, TRUE);			// Set big icon
    SetIcon(m_hIcon, FALSE);		// Set small icon

    // Step 3 - Call base class method to do the initialization
    CDialog::OnInitDialog();
    // Step 4 - Create Progress controls
    CWnd * pWnd = GetDlgItem(IDC_PI_CTRL1);
    ASSERT(pWnd);
    CRect r;
    pWnd->GetWindowRect(r);
    ScreenToClient(r);
    VERIFY(m_pProgInd1->Create(NULL, "PI1", WS_CHILD | WS_VISIBLE | WS_BORDER,
        r, this, IDC_PI_CTRL1));
    pWnd = GetDlgItem(IDC_PI_CTRL2);
    ASSERT(pWnd);
    pWnd->GetWindowRect(r);
    ScreenToClient(r);
    VERIFY(m_pProgInd2->Create(NULL, "PI2", WS_CHILD | WS_VISIBLE | WS_BORDER,
        r, this, IDC_PI_CTRL2));
    m_pProgInd2->SetText("Please wait...");
    return TRUE;
}

void CStrategyDlg::OnTimer(UINT nIDEvent)
{
    // Step 1 - Set position for status controls
    m_pProgInd1->SetPos(m_pProgInd1->GetPos() + 5);
    m_pProgInd2->SetPos(m_pProgInd2->GetPos() + 5);
    // Step 2 - Kill the timer, if needed
    if (m_pProgInd1->GetPos() >= 100)
    {
        KillTimer(1);
    }
    CDialog::OnTimer(nIDEvent);
}

void CStrategyDlg::OnAbout()
{
    CAboutDlg dlgAbout;
    dlgAbout.DoModal();
}

void CStrategyDlg::OnCancel()
{
    CDialog::OnCancel();
}

void CStrategyDlg::OnStartfill()
{
    // Step 1 - Reset positions when timer is newly started
    m_pProgInd1->SetPos(0);
    m_pProgInd2->SetPos(0);
    // Step 2 - Start the timer
    SetTimer(1, 100, NULL);
}
