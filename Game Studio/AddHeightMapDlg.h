#pragma once
#include "afxcmn.h"
#include "afxwin.h"


// CAddHeightMapDlg ��ȭ �����Դϴ�.

class CAddHeightMapDlg : public CDialog
{
	DECLARE_DYNAMIC(CAddHeightMapDlg)

public:
	CAddHeightMapDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CAddHeightMapDlg();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_DIALOG_EXTMAP };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

public:
	CSpinButtonCtrl m_spinCountX;
	CSpinButtonCtrl m_spinCountY;
	CSpinButtonCtrl m_spinMinH;
	CSpinButtonCtrl m_spinMaxH;
	CSpinButtonCtrl m_spinUnit;
	CSpinButtonCtrl m_spinCell;
	CSpinButtonCtrl m_spinLX;
	CSpinButtonCtrl m_spinLY;
	CSpinButtonCtrl m_spinLZ;
	CButton m_cFile;

	CString m_strLightX;
	CString m_strLightY;
	CString m_strLightZ;
	CString m_strMinH;
	CString m_strMaxH;
	CString m_strFile;

	DWORD m_dwCountX;
	DWORD m_dwCountY;
	DWORD m_dwUnit;

	BYTE m_bUNIT;
	BYTE m_bCell;

	DECLARE_MESSAGE_MAP()
	virtual BOOL OnInitDialog();
	afx_msg void OnVScroll( UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg void OnBnClickedButtonImagefile();
protected:
	virtual void OnOK();
};
