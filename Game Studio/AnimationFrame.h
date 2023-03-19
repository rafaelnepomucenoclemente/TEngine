#pragma once
#include "GridFrame.h"
#include "AnimationBar.h"
#include "PlayCtrlBar.h"


// CAnimationFrame �������Դϴ�.

class CAnimationFrame : public CGridFrame
{
	DECLARE_DYNCREATE(CAnimationFrame)
protected:
	CAnimationFrame();           // ���� ����⿡ ���Ǵ� protected �������Դϴ�.
	virtual ~CAnimationFrame();

public:
	CPlayCtrlBar m_wndPlayCtrlBar;
	CGSDialogBar m_wndControlBar;

	CAnimationBar m_wndAnimationBar;

public:
	DECLARE_MESSAGE_MAP()
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
};
