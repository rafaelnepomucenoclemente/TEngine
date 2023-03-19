#pragma once
#include "afxcmn.h"
#include "afxwin.h"


// CReplaceDetailTexDlg ��ȭ �����Դϴ�.

class CReplaceDetailTexDlg : public CDialog
{
	DECLARE_DYNAMIC(CReplaceDetailTexDlg)

public:
	CReplaceDetailTexDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CReplaceDetailTexDlg();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_DIALOG_REPLACEDETTEX };

public:
	void EnableAllCtrl( BYTE bEnable);
	void InitLIST( CListCtrl *pLIST);

	int GetCurSel( CListCtrl *pList);
	void SetCurSel( int nIndex);

	BYTE IsValidSEL( CListCtrl *pLIST);

public:
	CListCtrl *m_pLIST;
	CListCtrl m_cLIST;
	CButton m_cOK;

	CString m_strNAME;
	DWORD m_dwTexID;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	virtual void OnOK();
};
