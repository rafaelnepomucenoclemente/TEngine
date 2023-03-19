#pragma once
#include "GridFrame.h"
#include "OBJBar.h"
#include "PlayCtrlBar.h"


// COBJFrame �������Դϴ�.

class COBJFrame : public CGridFrame
{
	DECLARE_DYNCREATE(COBJFrame)
protected:
	COBJFrame();           // ���� ����⿡ ���Ǵ� protected �������Դϴ�.
	virtual ~COBJFrame();

public:
	CPlayCtrlBar m_wndPlayCtrlBar;
	CGSDialogBar m_wndControlBar;

	COBJBar m_wndOBJBar;

public:
	DECLARE_MESSAGE_MAP()
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSetFocus(CWnd* pOldWnd);
};
