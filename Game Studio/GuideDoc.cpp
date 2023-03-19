// GuideDoc.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "Game Studio.h"
#include "GuideView.h"


// CGuideDoc

IMPLEMENT_DYNCREATE(CGuideDoc, CTachyonDoc)

CGuideDoc::CGuideDoc()
: m_vSEL(0)
, m_bMouseCheck(0)
, m_ptPreItemPos(0)
{
	m_bHotPoint = GHP_TL;
	m_pGuide = NULL;
}

BOOL CGuideDoc::OnNewDocument()
{
	if (!CTachyonDoc::OnNewDocument())
		return FALSE;
	return TRUE;
}

CGuideDoc::~CGuideDoc()
{
	m_vSEL.clear();
}


BEGIN_MESSAGE_MAP(CGuideDoc, CTachyonDoc)
END_MESSAGE_MAP()


// CGuideDoc �����Դϴ�.

#ifdef _DEBUG
void CGuideDoc::AssertValid() const
{
	CTachyonDoc::AssertValid();
}

void CGuideDoc::Dump(CDumpContext& dc) const
{
	CTachyonDoc::Dump(dc);
}
#endif //_DEBUG


// CGuideDoc serialization�Դϴ�.

void CGuideDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
	}
	else
	{
	}
}


// CGuideDoc ����Դϴ�.

CSize CGuideDoc::GetSize()
{
	return CSize( 0, 0);
}

void CGuideDoc::SetCurSel( int nIndex)
{
}

void CGuideDoc::DeleteForRestore()
{
	POSITION pos = GetFirstViewPosition();

	while(pos)
	{
		CView *pView = GetNextView(pos);

		if( pView && pView->IsKindOf(RUNTIME_CLASS(CGuideView)) )
			((CGuideView *) pView)->DeleteForRestore();
	}
}

void CGuideDoc::Restore()
{
	POSITION pos = GetFirstViewPosition();

	while(pos)
	{
		CView *pView = GetNextView(pos);

		if( pView && pView->IsKindOf(RUNTIME_CLASS(CGuideView)) )
		{
			((CGuideView *) pView)->Restore();
			((CGuideView *) pView)->Render();
		}
	}
}
