#pragma once
#include "afxwin.h"


// CRebuildBSPDlg ��ȭ �����Դϴ�.

class CRebuildBSPDlg : public CDialog
{
	DECLARE_DYNAMIC(CRebuildBSPDlg)

public:
	CRebuildBSPDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CRebuildBSPDlg();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_DIALOG_BSPREBUILD };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

public:
	CString m_strFile;
	CButton m_cFile;

	BOOL m_bLIGHT;
	BOOL m_bPVS;
	BOOL m_bTEX;
	BOOL m_bOBJ;
	BOOL m_bSFX;
	BOOL m_bSND;

	DECLARE_MESSAGE_MAP()
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButtonMeshfile();
	virtual void OnOK();
};
