#pragma once
#include "afxwin.h"


// CAddAnimationDlg ��ȭ �����Դϴ�.

class CAddAnimationDlg : public CDialog
{
	DECLARE_DYNAMIC(CAddAnimationDlg)

public:
	CAddAnimationDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CAddAnimationDlg();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_DIALOG_ADDANIMATION };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

public:
	CComboBox m_cLoadType;

	CButton m_cFolder;
	CButton m_cFile;

	CStatic m_cFolderTitle;
	CStatic m_cFileTitle;

	CEdit m_cFolderEdit;
	CEdit m_cFileEdit;

	CString m_strFolderName;
	CString m_strFileName;

	DECLARE_MESSAGE_MAP()
protected:
	virtual void OnOK();

public:
	virtual BOOL OnInitDialog();
	afx_msg void OnCbnSelchangeComboLoadtype();
	afx_msg void OnBnClickedButtonFolder();
	afx_msg void OnBnClickedButtonAnimationfile();
	int m_nLoadType;
};
