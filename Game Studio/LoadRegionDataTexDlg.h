#pragma once
#include "afxwin.h"


// CLoadRegionDataTexDlg ��ȭ �����Դϴ�.

class CLoadRegionDataTexDlg : public CDialog
{
	DECLARE_DYNAMIC(CLoadRegionDataTexDlg)

public:
	CLoadRegionDataTexDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CLoadRegionDataTexDlg();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_DIALOG_LOAD_REGION_TEX };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	CString m_strTitle;
	CString m_strFileName;

	CButton m_cFile;

public:
	virtual BOOL OnInitDialog();

protected:
	virtual void OnOK();

public:
	afx_msg void OnBnClickedButtonImagefile();
};
