#pragma once
#include "afxcmn.h"


// CBuildShadeDlg ��ȭ �����Դϴ�.

class CBuildShadeDlg : public CDialog
{
	DECLARE_DYNAMIC(CBuildShadeDlg)

public:
	CBuildShadeDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CBuildShadeDlg();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_DIALOG_BUILDSHADE };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

public:
	CSpinButtonCtrl m_spinLX;
	CSpinButtonCtrl m_spinLY;
	CSpinButtonCtrl m_spinLZ;

	CString m_strLightX;
	CString m_strLightY;
	CString m_strLightZ;

	int m_nType;

	DECLARE_MESSAGE_MAP()
	virtual BOOL OnInitDialog();
	afx_msg void OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
};
