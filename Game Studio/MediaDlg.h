#pragma once
#include "ItemBase.h"
#include "afxcmn.h"
#include "afxwin.h"


// CMediaDlg ��ȭ �����Դϴ�.

class CMediaDlg : public CDialog
{
	DECLARE_DYNAMIC(CMediaDlg)

public:
	CMediaDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CMediaDlg();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_MEDIA_BAR };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

public:
	CMediaItem* m_pItem;

public:
	void SetItem( CMediaItem *pItem);
	void SetVolume( int nVolume);
	void SetPos();

public:
	CSliderCtrl m_cVolume;
	CStatic m_cValue;

	DWORD m_dwVolume;

	DECLARE_MESSAGE_MAP()
	virtual BOOL OnInitDialog();
	afx_msg LRESULT OnPlayCtrlProc( WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnPlayCtrlPlay( WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnPlayCtrlStop( WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnPlayCtrlPos( WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnMediaMsg( WPARAM wParam, LPARAM lParam);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
};
