#pragma once
#include "GSListCtrl.h"
#include "MAPDoc.h"

// CEditFreezeMode ��ȭ �����Դϴ�.

class CEditFreezeModeDlg : public CDialog
{
	DECLARE_DYNAMIC(CEditFreezeModeDlg)

public:
	CEditFreezeModeDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CEditFreezeModeDlg();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_DIALOG_FREEZE };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.
	
	DECLARE_MESSAGE_MAP()
public:
	CMAPDoc	*m_pDoc; 

	CButton m_cUnFreeze;			// ���õ� ������Ʈ�� Non-Hide Mode�� ���� ��ư
	CButton m_cFreeze;				// ���õ� ������Ʈ�� Hide Mode�� ���� ��ư

	CGSListCtrl m_cFreezeObject;	// Freeze ������Ʈ ����Ʈ ��Ʈ���� ���� ����
	CGSListCtrl m_cNonFreezeObject;	// Non-Freeze ������Ʈ ����Ʈ ��Ʈ���� ���� ����

	MAPDWORD		m_mapFreezeObject;			// Freeze ������Ʈ MAP
	MAPDWORD		m_mapNonFreezeObject;		// NON-Freeze ������Ʈ MAP

	MAPDWORD::iterator		m_itFreezeObj;		// Freeze MAP iterator
	MAPDWORD::iterator		m_itNonFreezeObj;	// NonFreeze MAP iterator

	int m_nUnitLength;
	int m_nTileLength;

public:
	void InitDocument(CMAPDoc* pDoc, int nUNITLength, int nTileLength );

public:
	virtual BOOL OnInitDialog(void);	
	afx_msg void OnBnClickedButtonNonfreeze();
	afx_msg void OnBnClickedButtonFreeze();
	afx_msg void OnNMClickListNonfreeze(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnNMClickListFreeze(NMHDR *pNMHDR, LRESULT *pResult);
};
