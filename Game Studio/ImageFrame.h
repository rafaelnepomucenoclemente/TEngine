#pragma once
#include "PlayCtrlBar.h"
#include "ImageBar.h"


// CImageFrame �������Դϴ�.

class CImageFrame : public CMDIChildWnd
{
	DECLARE_DYNCREATE(CImageFrame)
protected:
	CImageFrame();           // ���� ����⿡ ���Ǵ� protected �������Դϴ�.
	virtual ~CImageFrame();

public:
	CPlayCtrlBar m_wndPlayCtrlBar;
	CGSDialogBar m_wndControlBar;

	CImageBar m_wndImageBar;

protected:
	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle = WS_CHILD | WS_VISIBLE | WS_OVERLAPPEDWINDOW, const RECT& rect = rectDefault, CMDIFrameWnd* pParentWnd = NULL, CCreateContext* pContext = NULL);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSetFocus(CWnd* pOldWnd);
};
