#pragma once
#include "afxwin.h"

#define DEF_LOADTYPE_FILE			0
#define DEF_LOADTYPE_FOLDER			1
#define DEF_LOADTYPE_SPRITE			2


// CAddTextureDlg ��ȭ �����Դϴ�.

class CAddTextureDlg : public CDialog
{
	DECLARE_DYNAMIC(CAddTextureDlg)

public:
	CAddTextureDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CAddTextureDlg();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_DIALOG_ADDTEXTURE };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	CString m_strFolderName;
	CString m_strFileName;
	CString m_strTitle;

	CStatic m_cFolderTitle;
	CStatic m_cFileTitle;

	CComboBox m_cLoadType;
	int m_nLoadType;

	CButton m_cFolder;
	CButton m_cFile;

	CEdit m_cFolderEdit;
	CEdit m_cFileEdit;

	afx_msg void OnCbnSelchangeComboLoadtype();
	afx_msg void OnBnClickedButtonFolder();
	afx_msg void OnBnClickedButtonImagefile();
	virtual BOOL OnInitDialog();

protected:
	virtual void OnOK();
};
