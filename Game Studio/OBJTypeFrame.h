#pragma once


// COBJTypeFrame �������Դϴ�.

class COBJTypeFrame : public CMDIChildWnd
{
	DECLARE_DYNCREATE(COBJTypeFrame)
protected:
	COBJTypeFrame();           // ���� ����⿡ ���Ǵ� protected �������Դϴ�.
	virtual ~COBJTypeFrame();

public:
	DECLARE_MESSAGE_MAP()
	virtual BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle = WS_CHILD | WS_VISIBLE | WS_OVERLAPPEDWINDOW, const RECT& rect = rectDefault, CMDIFrameWnd* pParentWnd = NULL, CCreateContext* pContext = NULL);
	afx_msg void OnSetFocus(CWnd* pOldWnd);
};
