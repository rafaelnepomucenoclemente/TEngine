#pragma once


// CAddMapDlg 대화 상자입니다.

class CAddMapDlg : public CDialog
{
	DECLARE_DYNAMIC(CAddMapDlg)

public:
	CAddMapDlg(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~CAddMapDlg();

// 대화 상자 데이터입니다.
	enum { IDD = IDD_DIALOG_ADDMAP };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

public:
	int m_nType;

	DECLARE_MESSAGE_MAP()
	virtual BOOL OnInitDialog();
};
