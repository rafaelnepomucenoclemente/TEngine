#pragma once
#include "ItemBase.h"
#include "ATTRPage.h"
#include "OBJPage.h"


// CEditObjectDlg ��ȭ �����Դϴ�.

class CEditObjectDlg : public CDialog
{
	DECLARE_DYNAMIC(CEditObjectDlg)

public:
	CEditObjectDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CEditObjectDlg();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_DIALOG_EDITOBJ };

protected:
	CImageList m_listTabImages;

	CPropertySheet m_wndSHEET;
	CATTRPage m_wndATTR;
	COBJPage m_wndOBJ;

public:
	COBJItem *m_pItem;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

public:
	DECLARE_MESSAGE_MAP()
	virtual BOOL OnInitDialog();
	afx_msg void OnDestroy();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
};
