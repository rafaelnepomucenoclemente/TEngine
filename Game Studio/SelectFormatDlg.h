#pragma once
#include "afxwin.h"

// CSelectFormatDlg ��ȭ �����Դϴ�.

class CSelectFormatDlg : public CDialog
{
	DECLARE_DYNAMIC(CSelectFormatDlg)

public:
	CSelectFormatDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CSelectFormatDlg();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_DIALOG_SELECT_FORMAT };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.
	virtual BOOL OnInitDialog();

	DECLARE_MESSAGE_MAP()
public:
	CComboBox m_cFormat;
	int m_nSelectedFormat;
	int m_nType;
};
