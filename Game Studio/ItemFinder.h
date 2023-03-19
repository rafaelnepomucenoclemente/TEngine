#pragma once
#include "afxwin.h"


// CItemFinder ��ȭ �����Դϴ�.

class CItemFinder : public CDialog
{
	DECLARE_DYNAMIC(CItemFinder)

private :

	bool					m_bFirstSearch;
	int						m_nStep;
	HTREEITEM				m_hRoot;
	HTREEITEM				m_hCurItem;
	HTREEITEM				m_hFSItem;	//	�����˻��Ҷ�, ���õ� ����.
	std::stack<HTREEITEM>	m_stItem;
	std::stack<HTREEITEM>	m_stSearch;

	HTREEITEM				SearchTree( CTreeCtrl& TCtrl, HTREEITEM hItem );

public:

	CItemFinder(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CItemFinder();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_DIALOG_ITEMFINDER };

	void					ClearFinder();
	void					SetData( CString szItem, int nItemType, int nStringType, int nLocation );
	void					FindItem();

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.
	virtual BOOL OnInitDialog();
	virtual void PostNcDestroy();
	virtual void OnOK();

	DECLARE_MESSAGE_MAP()

public:

	CString		m_szFindItem;
	CComboBox	m_ctrlItemType;
	int			m_nItemType;
	int			m_nStringType;
	int			m_nLocation;
	std::vector<CGameStudioDoc*>	m_vDocs;

public :

	afx_msg void OnBnClickedFindnext();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnCbnSelchangeComboItem();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedRadioFndall();
};
