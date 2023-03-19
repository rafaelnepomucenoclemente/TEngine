#pragma once


#include "GSListCtrl.h"
#include "MAPDoc.h"

#define _HIDE_			0
#define _NONHIDE_		1

// CEditHideMode ��ȭ �����Դϴ�.


class CEditHideModeDlg : public CDialog
{
	DECLARE_DYNAMIC(CEditHideModeDlg)

public:
	CEditHideModeDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CEditHideModeDlg();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_DIALOG_HIDE };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	CButton m_cHide;			// ���õ� ������Ʈ�� Freeze Mode�� ����
	CButton m_cUnHide;			// ���õ� ������Ʈ�� Non-Hide Mode�� ����
	
	CGSListCtrl m_cHideObject;		// Hide ������Ʈ ����Ʈ ��Ʈ���� ���� ����
	CGSListCtrl m_cNonHideObject;	// Non-Hide ������Ʈ ����Ʈ ��Ʈ���� ���� ����

	CMAPDoc	*m_pDoc;
	int m_nUnitLength;
	int m_nTileLength;

public:
	virtual BOOL OnInitDialog(void);
	
	void InitDocument(CMAPDoc* pDoc, int nUNITLength, int nTileLength );
	afx_msg void OnBnClickedButtonNonhide();
	afx_msg void OnBnClickedButtonHide();
	afx_msg void OnNMClickListNonhide(NMHDR *pNMHDR, LRESULT *pResult);
};

