#pragma once


// CGuideFrame �������Դϴ�.

class CGuideFrame : public CMDIChildWnd
{
	DECLARE_DYNCREATE(CGuideFrame)
protected:
	CGuideFrame();           // ���� ����⿡ ���Ǵ� protected �������Դϴ�.
	virtual ~CGuideFrame();

protected:
	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle = WS_CHILD | WS_VISIBLE | WS_OVERLAPPEDWINDOW, const RECT& rect = rectDefault, CMDIFrameWnd* pParentWnd = NULL, CCreateContext* pContext = NULL);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
};
