#pragma once
#include "GridFrame.h"
#include "PlayCtrlBar.h"
#include "ParticleBar.h"
#include "SFXBar.h"


// CSFXFrame �������Դϴ�.

class CSFXFrame : public CGridFrame
{
	DECLARE_DYNCREATE(CSFXFrame)
protected:
	CSFXFrame();           // ���� ����⿡ ���Ǵ� protected �������Դϴ�.
	virtual ~CSFXFrame();

public:
	CPlayCtrlBar m_wndPlayCtrlBar;
	CGSDialogBar m_wndParticleBar;
	CGSDialogBar m_wndControlBar;

	CParticleBar m_wndPSFXBar;
	CSFXBar m_wndSFXBar;

	DECLARE_MESSAGE_MAP()
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
};
