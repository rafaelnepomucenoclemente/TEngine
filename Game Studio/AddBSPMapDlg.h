#pragma once
#include "afxwin.h"


// CAddBSPMapDlg ��ȭ �����Դϴ�.

class CAddBSPMapDlg : public CDialog
{
	DECLARE_DYNAMIC(CAddBSPMapDlg)

public:
	CAddBSPMapDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CAddBSPMapDlg();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_DIALOG_BSPMAP };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

public:
	CString m_strFile;
	CButton m_cFile;
	BOOL m_bPVS;

	DECLARE_MESSAGE_MAP()
	virtual BOOL OnInitDialog();
	virtual void OnOK();
	afx_msg void OnBnClickedButtonMeshfile();
};
