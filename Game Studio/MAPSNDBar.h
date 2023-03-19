#pragma once
#include "BarContent.h"
#include "ItemBase.h"
#include "afxwin.h"
#include "afxcmn.h"


class CMAPSNDBar;
typedef vector<CMAPSNDBar *>		VECTORMAPSNDBAR;


// CMAPSNDBar ��ȭ �����Դϴ�.

class CMAPSNDBar : public CBarContent
{
	DECLARE_DYNAMIC(CMAPSNDBar)

public:
	CMAPSNDBar(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CMAPSNDBar();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_MAPSND };

public:
	static VECTORMAPSNDBAR m_vMAPSNDBAR;
	static CMediaItem *m_pSND;

	static LPDIRECT3DTEXTURE9 m_pTEX;
	static CTachyonMesh m_MESH;

protected:
	void EnableAllCtrl( BOOL bEnable);

public:
	static void RenderSNDBOX( D3DXVECTOR3& vPOS);

	static void SetSND( CItemBase *pItem);
	static void ReleaseSNDBAR();
	static void InitSNDBAR();

public:
	void SetItem( CMAPItem *pItem);
	void UpdateItem();
	void OnBack();					// 06.02.18 �ڻ�

protected:
	CMAPItem *m_pItem;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

public:
	CSpinButtonCtrl m_spinPosX;
	CSpinButtonCtrl m_spinPosY;
	CSpinButtonCtrl m_spinPosZ;

	CButton m_cInsertMode;
	CButton m_cEditMode;
	CButton m_cDelete;
	CStatic m_cName;

	CEdit m_cPosX;
	CEdit m_cPosY;
	CEdit m_cPosZ;

	CString m_strName;
	CString m_strPosX;
	CString m_strPosY;
	CString m_strPosZ;

	int m_nMode;

	DECLARE_MESSAGE_MAP()
public:
	afx_msg LRESULT OnMessageBox( WPARAM wParam, LPARAM lParam);
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButtonBack();
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnDestroy();
	afx_msg void OnBnClickedRadioEdit();
	afx_msg void OnBnClickedRadioInsert();
	afx_msg void OnEnChangeEditData();
	afx_msg void OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg void OnBnClickedButtonDelete();
};
