// UpdateDlg.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "Game Studio.h"
#include "UpdateDlg.h"
#include ".\updatedlg.h"


// CUpdateDlg ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(CUpdateDlg, CDialog)
CUpdateDlg::CUpdateDlg(CWnd* pParent /*=NULL*/)
: CDialog(CUpdateDlg::IDD, pParent)
, m_strFileName(_T(""))
{
	m_strFilter = _T("");
	m_strTitle = _T("");
	m_strEXT = _T("");
}

CUpdateDlg::~CUpdateDlg()
{
}

void CUpdateDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_FILE, m_strFileName);
	DDX_Control(pDX, IDC_BUTTON_FILE, m_cFile);
}


BEGIN_MESSAGE_MAP(CUpdateDlg, CDialog)
	ON_BN_CLICKED(IDC_BUTTON_FILE, OnBnClickedButtonFile)
END_MESSAGE_MAP()


// CUpdateDlg �޽��� ó�����Դϴ�.

BOOL CUpdateDlg::OnInitDialog()
{
	CDialog::OnInitDialog();
	SetWindowText(m_strTitle);

	HICON hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	SetIcon( hIcon, FALSE);
	SetIcon( hIcon, TRUE);

	hIcon = AfxGetApp()->LoadIcon(IDI_ICON_FOLDER);
	m_cFile.SetIcon(hIcon);

	return TRUE;
}

void CUpdateDlg::OnOK()
{
	UpdateData();

	m_strFileName.TrimRight();
	m_strFileName.TrimLeft();

	if(m_strFileName.IsEmpty())
	{
		CString strMessage;

		strMessage.LoadString(IDS_ERR_NOFILENAME);
		MessageBox(strMessage);

		return;
	}

	CDialog::OnOK();
}

void CUpdateDlg::OnBnClickedButtonFile()
{
	CFileDialog dlg(
		TRUE,
		m_strEXT,
		NULL,
		OFN_HIDEREADONLY|OFN_OVERWRITEPROMPT,
		m_strFilter);

	if( dlg.DoModal() == IDOK )
	{
		UpdateData();
		m_strFileName = dlg.GetPathName();
		UpdateData(FALSE);
	}
}
