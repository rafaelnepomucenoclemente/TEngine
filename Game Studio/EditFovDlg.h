#pragma once


// CEditFovDlg ��ȭ �����Դϴ�.

class CEditFovDlg : public CDialog
{
	DECLARE_DYNAMIC(CEditFovDlg)

public:
	CEditFovDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CEditFovDlg();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_DIALOG_FOV };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	CString m_strFOV;
};
