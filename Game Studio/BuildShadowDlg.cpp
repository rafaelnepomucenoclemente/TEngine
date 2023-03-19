// BuildShadowDlg.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "Game Studio.h"
#include "BuildShadowDlg.h"


// CBuildShadowDlg ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(CBuildShadowDlg, CDialog)
CBuildShadowDlg::CBuildShadowDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CBuildShadowDlg::IDD, pParent)
	, m_bShadowPixel(0)
{
}

CBuildShadowDlg::~CBuildShadowDlg()
{
}

void CBuildShadowDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_PPT, m_bShadowPixel);
	DDX_Control(pDX, IDC_SPIN_PPT, m_spinPPT);
	DDV_MinMaxByte(pDX, m_bShadowPixel, 1, 4);
}


BEGIN_MESSAGE_MAP(CBuildShadowDlg, CDialog)
END_MESSAGE_MAP()


// CBuildShadowDlg �޽��� ó�����Դϴ�.

BOOL CBuildShadowDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	HICON hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	SetIcon( hIcon, FALSE);
	SetIcon( hIcon, TRUE);

	m_spinPPT.SetRange( 1, 4);
	UpdateData(FALSE);

	return TRUE;
}
