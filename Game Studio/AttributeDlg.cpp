// AttributeDlg.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "Game Studio.h"
#include "AttributeDlg.h"


// CAttributeDlg ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(CAttributeDlg, CDialog)
CAttributeDlg::CAttributeDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CAttributeDlg::IDD, pParent)
	, m_strTitle(_T(""))
	, m_strValue(_T(""))
	, m_bDataType(0)
{
}

CAttributeDlg::~CAttributeDlg()
{
}

void CAttributeDlg::DoDataExchange( CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_VALUE, m_strValue);
}


BEGIN_MESSAGE_MAP(CAttributeDlg, CDialog)
END_MESSAGE_MAP()


// CAttributeDlg �޽��� ó�����Դϴ�.
