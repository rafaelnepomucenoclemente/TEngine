// MeshFrame.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "Game Studio.h"
#include "MeshFrame.h"


// CMeshFrame

IMPLEMENT_DYNCREATE(CMeshFrame, CGridFrame)

CMeshFrame::CMeshFrame()
{
}

CMeshFrame::~CMeshFrame()
{
}


BEGIN_MESSAGE_MAP(CMeshFrame, CGridFrame)
	ON_WM_CREATE()
END_MESSAGE_MAP()


// CMeshFrame �޽��� ó�����Դϴ�.

int CMeshFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CGridFrame::OnCreate(lpCreateStruct) == -1)
		return -1;
	EnableDocking(CBRS_ALIGN_ANY);

	if(!m_wndControlBar.Create( this, &m_wndMeshBar, CBRS_RIGHT, IDD_MESH))
		return -1;

	m_wndControlBar.EnableDocking(CBRS_ALIGN_ANY);
	DockControlBar(&m_wndControlBar);

	return 0;
}
