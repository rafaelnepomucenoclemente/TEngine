#pragma once
#include "GSListCtrl.h"
#include "MAPDoc.h"

// SelectObjByName ��ȭ �����Դϴ�.

class CSelectObjByName : public CDialog
{
	DECLARE_DYNAMIC(CSelectObjByName)

public:
	CSelectObjByName(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CSelectObjByName();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_DIALOG_SELBYNAME };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	CGSListCtrl m_cSelectObjectByName;		// ������Ʈ ����Ʈ ��Ʈ���� ���� ����
	CMAPDoc	*m_pDoc;
	int m_nShowALL;
	
	void InitDocument( CMAPDoc* pDoc , int nUNITLength, int nTileLength );
	void InitOBJList(CListCtrl *pSBNListCtrl);

public:
	virtual BOOL OnInitDialog(void);
	afx_msg void OnNMClickListObject(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnNMDblclkListObject(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnBnClickedButtonSelobjDelete();
	afx_msg void OnBnClickedRadioEnableobj();
	afx_msg void OnBnClickedRadioAllobj();
	int m_nUnitLength;
	int m_nTileLength;
};
