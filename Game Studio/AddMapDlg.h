#pragma once


// CAddMapDlg ��ȭ �����Դϴ�.

class CAddMapDlg : public CDialog
{
	DECLARE_DYNAMIC(CAddMapDlg)

public:
	CAddMapDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CAddMapDlg();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_DIALOG_ADDMAP };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

public:
	int m_nType;

	DECLARE_MESSAGE_MAP()
	virtual BOOL OnInitDialog();
};
