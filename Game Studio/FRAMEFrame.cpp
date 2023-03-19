// FRAMEFrame.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "Game Studio.h"
#include "FRAMEFrame.h"


// CFRAMEFrame

IMPLEMENT_DYNCREATE(CFRAMEFrame, CGuideFrame)

CFRAMEFrame::CFRAMEFrame()
{
}

CFRAMEFrame::~CFRAMEFrame()
{
}


BEGIN_MESSAGE_MAP(CFRAMEFrame, CGuideFrame)
	ON_WM_CREATE()
END_MESSAGE_MAP()


// CFRAMEFrame �޽��� ó�����Դϴ�.

int CFRAMEFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CGuideFrame::OnCreate(lpCreateStruct) == -1)
		return -1;

	if(!m_wndControlBar.Create( this, &m_wndFRAMEBar, CBRS_RIGHT, IDD_FRAME))
		return -1;

	m_wndControlBar.EnableDocking(CBRS_ALIGN_ANY);
	DockControlBar(&m_wndControlBar);

	return 0;
}
