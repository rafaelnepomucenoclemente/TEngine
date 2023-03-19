// EditUNITDlg.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "Game Studio.h"
#include "EXTMAPDoc.h"
#include "EditEnableUNITDlg.h"
#include "CleanUNITOBJ.h"
#include "EditUNITDlg.h"


// CEditUNITDlg ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(CEditUNITDlg, CDialog)
CEditUNITDlg::CEditUNITDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CEditUNITDlg::IDD, pParent),
	m_pItem(NULL)
{
}

CEditUNITDlg::~CEditUNITDlg()
{
}

void CEditUNITDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CEditUNITDlg, CDialog)
	ON_BN_CLICKED(IDC_BUTTON_EDIT_UNIT_ENABLE, OnEditUNITEnable)
	ON_BN_CLICKED(IDC_BUTTON_CLEAN_UNIT_OBJ, OnCleanUNIT)
END_MESSAGE_MAP()


// CEditUNITDlg �޽��� ó�����Դϴ�.

void CEditUNITDlg::OnEditUNITEnable()
{
	CEditEnableUNITDlg dlg;

	dlg.InitData(&m_pItem->m_HugeMAP);
	dlg.DoModal();
}

void CEditUNITDlg::OnCleanUNIT()
{
    CCleanUNITOBJ dlg;

	dlg.InitData(m_pItem);
	dlg.DoModal();
}

void CEditUNITDlg::InitData( CEXTMAPItem* pItem)
{
	m_pItem = pItem;
}
