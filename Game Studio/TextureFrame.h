#pragma once
#include "PlayCtrlBar.h"
#include "TextureBar.h"


// CTextureFrame �������Դϴ�.

class CTextureFrame : public CMDIChildWnd
{
	DECLARE_DYNCREATE(CTextureFrame)
protected:
	CTextureFrame();           // ���� ����⿡ ���Ǵ� protected �������Դϴ�.
	virtual ~CTextureFrame();

public:
	CPlayCtrlBar m_wndPlayCtrlBar;
	CGSDialogBar m_wndControlBar;
	CTextureBar m_wndTextureBar;

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL Create( LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle = WS_CHILD|WS_VISIBLE|WS_OVERLAPPEDWINDOW, const RECT& rect = rectDefault, CMDIFrameWnd* pParentWnd = NULL, CCreateContext* pContext = NULL);
	afx_msg int OnCreate( LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSetFocus( CWnd* pOldWnd);
};
