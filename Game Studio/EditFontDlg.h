#pragma once
#include "GSListCtrl.h"
#include "EditFontColorDlg.h"
#include "afxcmn.h"


// CEditFontDlg ��ȭ �����Դϴ�.

class CEditFontDlg : public CDialog
{
	DECLARE_DYNAMIC(CEditFontDlg)

public:
	CEditFontDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CEditFontDlg();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_DIALOG_FONT };

protected:
	void DeleteFONT( int nIndex);

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

public:
	CGSListCtrl m_cFONT;
	CString m_strSEL;

	DECLARE_MESSAGE_MAP()
	virtual BOOL OnInitDialog();
	afx_msg void OnLvnItemActivateListFont(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnLvnEndlabeleditListFont(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnLvnBeginlabeleditListFont(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnBnClickedButtonAdd();
	afx_msg void OnBnClickedButtonDel();
	afx_msg void OnBnClickedButtonEdit();
protected:
	virtual void OnOK();
public:
	afx_msg void OnHdnBegintrackListFont(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnHdnTrackListFont(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnBnClickedButtonEditColor();
};
