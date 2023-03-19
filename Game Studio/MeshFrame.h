#pragma once
#include "GSDialogBar.h"
#include "GridFrame.h"
#include "MeshBar.h"


// CMeshFrame �������Դϴ�.

class CMeshFrame : public CGridFrame
{
	DECLARE_DYNCREATE(CMeshFrame)
protected:
	CMeshFrame();           // ���� ����⿡ ���Ǵ� protected �������Դϴ�.
	virtual ~CMeshFrame();

public:
	CGSDialogBar m_wndControlBar;
	CMeshBar m_wndMeshBar;

public:
	DECLARE_MESSAGE_MAP()
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
};
