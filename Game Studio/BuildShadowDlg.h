#pragma once
#include "afxcmn.h"


// CBuildShadowDlg ��ȭ �����Դϴ�.

class CBuildShadowDlg : public CDialog
{
	DECLARE_DYNAMIC(CBuildShadowDlg)

public:
	CBuildShadowDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CBuildShadowDlg();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_DIALOG_BUILDSHADOW };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	BYTE m_bShadowPixel;
	virtual BOOL OnInitDialog();
	CSpinButtonCtrl m_spinPPT;
};
