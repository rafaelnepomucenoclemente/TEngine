// AddMapDlg.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "Game Studio.h"
#include "AddMapDlg.h"


// CAddMapDlg ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(CAddMapDlg, CDialog)
CAddMapDlg::CAddMapDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CAddMapDlg::IDD, pParent)
	, m_nType(0)
{
}

CAddMapDlg::~CAddMapDlg()
{
}

void CAddMapDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Radio(pDX, IDC_RADIO_EXTMAP, m_nType);
}


BEGIN_MESSAGE_MAP(CAddMapDlg, CDialog)
END_MESSAGE_MAP()


// CAddMapDlg �޽��� ó�����Դϴ�.

BOOL CAddMapDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	HICON hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	SetIcon( hIcon, FALSE);
	SetIcon( hIcon, TRUE);

	return TRUE;
}
