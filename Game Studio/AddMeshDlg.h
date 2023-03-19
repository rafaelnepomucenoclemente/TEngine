#pragma once
#include "afxwin.h"


// CAddMeshDlg ��ȭ �����Դϴ�.

class CAddMeshDlg : public CDialog
{
	DECLARE_DYNAMIC(CAddMeshDlg)

public:
	CAddMeshDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CAddMeshDlg();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_DIALOG_ADDMESH };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

public:
	CComboBox m_cLoadType;

	CStatic m_cFolderTitle;
	CStatic m_cFileTitle;

	CEdit m_cFolderEdit;
	CEdit m_cFileEdit;

	CButton m_cFolder;
	CButton m_cFile;

	CString m_strFolderName;
	CString m_strFileName;

	int m_nLoadType;

	DECLARE_MESSAGE_MAP()
	virtual BOOL OnInitDialog();
	afx_msg void OnCbnSelchangeComboLoadtype();
	afx_msg void OnBnClickedButtonFolder();
	afx_msg void OnBnClickedButtonMeshfile();

protected:
	virtual void OnOK();
};
