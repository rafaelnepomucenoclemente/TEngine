#pragma once
#include "afxwin.h"
#include "GSListCtrl.h"

// EditTargetUNITDlg ��ȭ �����Դϴ�.

class CEditEnableUNITDlg : public CDialog
{
	DECLARE_DYNAMIC(CEditEnableUNITDlg)

public:
	CEditEnableUNITDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CEditEnableUNITDlg();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_DIALOG_EDIT_ENABLE_UNIT };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	CButton m_cDisable;
	CButton m_cEnable;

	CGSListCtrl m_cListDisableUnit;
	CGSListCtrl m_cListEnableUnit;

private:
	CTachyonHUGEMAP *m_pHugeMAP;

public:
	void InitData( CTachyonHUGEMAP *pHugeMap);

public:
	virtual BOOL OnInitDialog();
	virtual void OnOK();

	afx_msg void OnBnClickedButtonDisable();
	afx_msg void OnBnClickedButtonEnable();
	afx_msg void OnBnClickedButtonEanbleUnitList();
};
