#pragma once


// CAttributeDlg ��ȭ �����Դϴ�.

class CAttributeDlg : public CDialog
{
	DECLARE_DYNAMIC(CAttributeDlg)

public:
	CAttributeDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CAttributeDlg();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_DIALOG_ATTR };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	CString m_strTitle;
	CString m_strValue;
	int m_bDataType;
};
