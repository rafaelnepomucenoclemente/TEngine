#pragma once


// CSaveMinimapDlg ��ȭ �����Դϴ�.

class CSaveMinimapDlg : public CDialog
{
	DECLARE_DYNAMIC(CSaveMinimapDlg)

public:
	CSaveMinimapDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CSaveMinimapDlg();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_DIALOG_SAVE_MINIMAP };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	int m_nImageSize;
	BOOL m_bOBJCollision;
};
