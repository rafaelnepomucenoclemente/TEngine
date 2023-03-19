#pragma once
#include "GSDialogBar.h"
#include "GuideFrame.h"
#include "FRAMEBar.h"


// CFRAMEFrame �������Դϴ�.

class CFRAMEFrame : public CGuideFrame
{
	DECLARE_DYNCREATE(CFRAMEFrame)
protected:
	CFRAMEFrame();
	virtual ~CFRAMEFrame();

public:
	CGSDialogBar m_wndControlBar;
	CFRAMEBar m_wndFRAMEBar;

protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
};
