#pragma once


// CAddFarImageDlg ��ȭ �����Դϴ�.

class CAddFarImageDlg : public CDialog
{
	DECLARE_DYNAMIC(CAddFarImageDlg)

public:
	CAddFarImageDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CAddFarImageDlg();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_DIALOG_ADD_FARIMAGE };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
};
