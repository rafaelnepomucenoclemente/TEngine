#pragma once
#include "afxwin.h"


// CUpdateDlg ��ȭ �����Դϴ�.

class CUpdateDlg : public CDialog
{
	DECLARE_DYNAMIC(CUpdateDlg)

public:
	CUpdateDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CUpdateDlg();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_DIALOG_UPDATE };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	CString m_strFileName;
	CString m_strFilter;
	CString m_strTitle;
	CString m_strEXT;

	CButton m_cFile;

	virtual BOOL OnInitDialog();
protected:
	virtual void OnOK();
public:
	afx_msg void OnBnClickedButtonFile();
};
