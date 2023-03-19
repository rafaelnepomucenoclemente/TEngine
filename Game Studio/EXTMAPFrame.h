#pragma once
#include "GSDialogBar.h"
#include "MAPFrame.h"
#include "EXTMAPBar.h"


// CEXTMAPFrame �������Դϴ�.

class CEXTMAPFrame : public CMAPFrame
{
	DECLARE_DYNCREATE(CEXTMAPFrame)
protected:
	CEXTMAPFrame();           // ���� ����⿡ ���Ǵ� protected �������Դϴ�.
	virtual ~CEXTMAPFrame();

public:
	CGSDialogBar m_wndControlBar;
	CEXTMAPBar m_wndEXTMAPBar;

protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnMapBack();
};
