#pragma once


// CTimeScaleDlg ��ȭ �����Դϴ�.

class CTimeScaleDlg : public CDialog
{
	DECLARE_DYNAMIC(CTimeScaleDlg)

public:
	CTimeScaleDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CTimeScaleDlg();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_DIALOG_TIMESCALE };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	CString m_strTimeScale;
	DWORD m_dwTotalFrame;

	virtual BOOL OnInitDialog();
protected:
	virtual void OnOK();
};
