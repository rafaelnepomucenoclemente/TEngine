#pragma once
#include "afxwin.h"


// CAddMediaDlg ��ȭ �����Դϴ�.

class CAddMediaDlg : public CDialog
{
	DECLARE_DYNAMIC(CAddMediaDlg)

public:
	CAddMediaDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CAddMediaDlg();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_DIALOG_ADDMEDIA };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
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
	int m_nLoadType;

	virtual BOOL OnInitDialog();
	afx_msg void OnCbnSelchangeComboLoadtype();
	afx_msg void OnBnClickedButtonFolder();
	afx_msg void OnBnClickedButtonMediafile();
protected:
	virtual void OnOK();
};
