#pragma once
#include "afxwin.h"
#include "EXTMAPDoc.h"

// CAdjustOBJPosDlg ��ȭ �����Դϴ�.

class CAdjustOBJPosDlg : public CDialog
{
	DECLARE_DYNAMIC(CAdjustOBJPosDlg)

public:
	CAdjustOBJPosDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	CAdjustOBJPosDlg(CMAPDoc* pDoc, CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CAdjustOBJPosDlg();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_DIALOG_ADJUST_OBJ_POS };
	
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	CComboBox m_cUnitX;
	CComboBox m_cUnitZ;
	CString m_strUnitX;
	CString m_strUnitZ;

	CPoint m_ptUnitXZ;
	D3DXVECTOR3 m_vMoveOffset;

	BOOL m_bSpecifyUnit;
private:
	CEXTMAPDoc* m_pDoc;

private:
	void EnableAllCtrl(bool bEnable);

public:
	afx_msg void OnCheckEnable();
	afx_msg void OnCbnDropdownComboUnitX();
	afx_msg void OnCbnDropdownComboUnitZ();
protected:
	virtual void OnOK();
public:
	CPoint GetUnitXZ(void);
	int m_bOBJMoveOFFSET;
	CEdit m_cOBJOffsetX;
	CEdit m_cOBJOffsetZ;
	CString m_strOBJOffsetX;
	CString m_strOBJOffsetZ;
	D3DXVECTOR3 GetOBJMoveOffset(void);
	BOOL m_bAttachType;
	BOOL GetAttachType(void);
};
