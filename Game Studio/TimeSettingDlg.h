#pragma once


// CTimeSettingDlg ��ȭ �����Դϴ�.

class CTimeSettingDlg : public CDialog
{
	DECLARE_DYNAMIC(CTimeSettingDlg)

public:
	CTimeSettingDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CTimeSettingDlg();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_DIALOG_TIMESET };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	DWORD m_dwTotalTick;
	DWORD m_dwTotalFrame;
	virtual BOOL OnInitDialog();
protected:
	virtual void OnOK();
};
