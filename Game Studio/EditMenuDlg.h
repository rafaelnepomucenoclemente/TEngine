#pragma once
#include "GSListCtrl.h"
#include "afxcmn.h"


// CEditMenuDlg ��ȭ �����Դϴ�.

class CEditMenuDlg : public CDialog
{
	DECLARE_DYNAMIC(CEditMenuDlg)

public:
	CEditMenuDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CEditMenuDlg();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_DIALOG_MENU };

protected:
	void DeleteMENU( int nIndex);

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

public:
	CGSListCtrl m_cMENU;
	CString m_strSEL;

	DECLARE_MESSAGE_MAP()
	virtual BOOL OnInitDialog();
	afx_msg void OnLvnItemActivateListMenu(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnLvnEndlabeleditListMenu(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnLvnBeginlabeleditListMenu(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnBnClickedButtonAdd();
	afx_msg void OnBnClickedButtonDel();
protected:
	virtual void OnOK();
};
