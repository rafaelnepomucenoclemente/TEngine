#pragma once


// CFramesetDlg ��ȭ �����Դϴ�.

class CFramesetDlg : public CDialog
{
	DECLARE_DYNAMIC(CFramesetDlg)

public:
	CFramesetDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CFramesetDlg();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_DIALOG_FRAMESET };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	DWORD m_dwTotalFrame;
	virtual BOOL OnInitDialog();
protected:
	virtual void OnOK();
};
