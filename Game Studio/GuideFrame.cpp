// GuideFrame.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "Game Studio.h"
#include "GuideFrame.h"


// CGuideFrame

IMPLEMENT_DYNCREATE(CGuideFrame, CMDIChildWnd)

CGuideFrame::CGuideFrame()
{
}

CGuideFrame::~CGuideFrame()
{
}


BEGIN_MESSAGE_MAP(CGuideFrame, CMDIChildWnd)
	ON_WM_CREATE()
END_MESSAGE_MAP()

// CGuideFrame �޽��� ó�����Դϴ�.

BOOL CGuideFrame::Create( LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CMDIFrameWnd* pParentWnd, CCreateContext* pContext)
{
	BOOL bResult = CMDIChildWnd::Create(
		lpszClassName,
		lpszWindowName,
		dwStyle,
		rect,
		pParentWnd,
		pContext);
	ShowWindow(SW_SHOWMAXIMIZED);

	return bResult;
}

int CGuideFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CMDIChildWnd::OnCreate(lpCreateStruct) == -1)
		return -1;
	EnableDocking(CBRS_ALIGN_ANY);

	return 0;
}
