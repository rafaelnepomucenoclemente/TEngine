// FramesetDlg.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "Game Studio.h"
#include "FramesetDlg.h"


// CFramesetDlg ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(CFramesetDlg, CDialog)
CFramesetDlg::CFramesetDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CFramesetDlg::IDD, pParent)
	, m_dwTotalFrame(0)
{
}

CFramesetDlg::~CFramesetDlg()
{
}

void CFramesetDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_TOTAL_FRAME, m_dwTotalFrame);
}


BEGIN_MESSAGE_MAP(CFramesetDlg, CDialog)
END_MESSAGE_MAP()


// CFramesetDlg �޽��� ó�����Դϴ�.

BOOL CFramesetDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	HICON hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	SetIcon( hIcon, FALSE);
	SetIcon( hIcon, TRUE);
	UpdateData(FALSE);

	return TRUE;
}

void CFramesetDlg::OnOK()
{
	UpdateData();

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
