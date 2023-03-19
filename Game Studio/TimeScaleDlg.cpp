// TimeScaleDlg.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "Game Studio.h"
#include "TimeScaleDlg.h"


// CTimeScaleDlg ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(CTimeScaleDlg, CDialog)
CTimeScaleDlg::CTimeScaleDlg(CWnd* pParent /*=NULL*/)
: CDialog(CTimeScaleDlg::IDD, pParent)
, m_strTimeScale(_T(""))
, m_dwTotalFrame(0)
{
}

CTimeScaleDlg::~CTimeScaleDlg()
{
}

void CTimeScaleDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_TIME_SCALE, m_strTimeScale);
	DDX_Text(pDX, IDC_EDIT_TOTAL_FRAME, m_dwTotalFrame);
}


BEGIN_MESSAGE_MAP(CTimeScaleDlg, CDialog)
END_MESSAGE_MAP()


// CTimeScaleDlg �޽��� ó�����Դϴ�.

BOOL CTimeScaleDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	HICON hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	SetIcon( hIcon, FALSE);
	SetIcon( hIcon, TRUE);
	UpdateData(FALSE);

	return TRUE;
}

void CTimeScaleDlg::OnOK()
{
	UpdateData();
	FLOAT fTimeScale = (FLOAT) atof(m_strTimeScale);

	if( fTimeScale <= 0.0f )
	{
		CString strMessage;
		CString strTitle;

		strMessage.LoadString(IDS_ERR_TIME_SCALE);
		strTitle.LoadString(IDR_MAINFRAME);

		MessageBox( strMessage, strTitle, MB_OK|MB_ICONHAND);
		return;
	}

	if( m_dwTotalFrame == 0 )
	{
		CString strMessage;
		CString strTitle;

		strMessage.LoadString(IDS_ERR_TOTALFRAME);
		strTitle.LoadString(IDR_MAINFRAME);

		MessageBox( strMessage, strTitle, MB_OK|MB_ICONHAND);
		return;
	}

	CDialog::OnOK();
}
