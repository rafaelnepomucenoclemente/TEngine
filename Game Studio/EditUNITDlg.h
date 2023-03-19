#pragma once
#include "EXTMAPDoc.h"
#include "itembase.h"

// CEditUNITDlg ��ȭ �����Դϴ�.

class CEditUNITDlg : public CDialog
{
	DECLARE_DYNAMIC(CEditUNITDlg)

public:
	CEditUNITDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CEditUNITDlg();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_DIALOG_EDIT_UNIT };

public:
	CEXTMAPItem *m_pItem;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEditUNITEnable();
	afx_msg void OnCleanUNIT();
	void InitData( CEXTMAPItem *pItem);
};
