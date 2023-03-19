#pragma once
#include "afxwin.h"
#include "itembase.h"


// CCleanUNITOBJ ��ȭ �����Դϴ�.

class CCleanUNITOBJ : public CDialog
{
	DECLARE_DYNAMIC(CCleanUNITOBJ)

public:
	CCleanUNITOBJ(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CCleanUNITOBJ();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_DIALOG_EDIT_CLEAN_UNIT_OBJECT };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	CComboBox m_cUNITX;
	CComboBox m_cUNITZ;
	CString m_strUNITX;
	CString m_strUNITZ;

private:
	CEXTMAPItem* m_pItem;

public:
	void InitData(CEXTMAPItem* pItem);
	virtual BOOL OnInitDialog();
	afx_msg void OnCleanUNITOBJ();
	afx_msg void OnBnClickedButtonCleanAll();
};
