#pragma once
#include "afxwin.h"


// CObjectExchangeDlg ��ȭ �����Դϴ�.

class CObjectExchangeDlg : public CDialog
{
	DECLARE_DYNAMIC(CObjectExchangeDlg)

public:
	CObjectExchangeDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CObjectExchangeDlg();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_DIALOG_OBJECT_EXCHANGE };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	BOOL m_bOBJExchange;
	BOOL m_bAllOBJ;
	afx_msg void OnBnClickedCheck();
};
