#pragma once
#include "GSDialogBar.h"
#include "MAPFrame.h"
#include "BSPMAPBar.h"


// CBSPMAPFrame �������Դϴ�.

class CBSPMAPFrame : public CMAPFrame
{
	DECLARE_DYNCREATE(CBSPMAPFrame)
protected:
	CBSPMAPFrame();           // ���� ����⿡ ���Ǵ� protected �������Դϴ�.
	virtual ~CBSPMAPFrame();

public:
	CGSDialogBar m_wndControlBar;
	CBSPMAPBar m_wndBSPMAPBar;

protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnMapBack();
};


