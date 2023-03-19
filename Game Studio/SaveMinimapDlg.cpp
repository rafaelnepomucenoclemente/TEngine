// SaveMinimapDlg.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "Game Studio.h"
#include "SaveMinimapDlg.h"


// CSaveMinimapDlg ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(CSaveMinimapDlg, CDialog)
CSaveMinimapDlg::CSaveMinimapDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CSaveMinimapDlg::IDD, pParent)
	, m_nImageSize(512)
	, m_bOBJCollision(FALSE)
{
}

CSaveMinimapDlg::~CSaveMinimapDlg()
{
}

void CSaveMinimapDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_IMAGESIZE, m_nImageSize);
	DDX_Check(pDX, IDC_CHECK_MINIMAP_OBJ_COLLISION_AREA, m_bOBJCollision);
}


BEGIN_MESSAGE_MAP(CSaveMinimapDlg, CDialog)
END_MESSAGE_MAP()


// CSaveMinimapDlg �޽��� ó�����Դϴ�.
