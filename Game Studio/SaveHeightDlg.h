#pragma once
#include "afxcmn.h"


// CSaveHeightDlg ��ȭ �����Դϴ�.

class CSaveHeightDlg : public CDialog
{
	DECLARE_DYNAMIC(CSaveHeightDlg)

public:
	CSaveHeightDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CSaveHeightDlg();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_DIALOG_SAVE_HEIGHTMAP };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	CString m_strMinH;
	CString m_strMaxH;
	CSpinButtonCtrl m_spinMinH;
	CSpinButtonCtrl m_spinMaxH;

	
public:
	afx_msg void OnVScroll( UINT nSBCode, UINT nPos, CScrollBar* pScrollBar );
	virtual BOOL OnInitDialog();
	virtual void OnOK();
	int m_nType;
};
