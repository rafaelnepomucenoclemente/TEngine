#pragma once


// CBuildEMDlg ��ȭ �����Դϴ�.

class CBuildEMDlg : public CDialog
{
	DECLARE_DYNAMIC(CBuildEMDlg)

public:
	CBuildEMDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CBuildEMDlg();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_DIALOG_BUILDEM };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

public:
	CString m_strTitle;
	int m_nType;

	DECLARE_MESSAGE_MAP()
	virtual BOOL OnInitDialog();
};
