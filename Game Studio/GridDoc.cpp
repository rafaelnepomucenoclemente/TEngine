// GridDoc.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "Game Studio.h"
#include "GridView.h"


// CGridDoc

IMPLEMENT_DYNCREATE( CGridDoc, CTachyonDoc)

CGridDoc::CGridDoc()
{
}

BOOL CGridDoc::OnNewDocument()
{
	if(!CTachyonDoc::OnNewDocument())
		return FALSE;

	return TRUE;
}

CGridDoc::~CGridDoc()
{
}


BEGIN_MESSAGE_MAP(CGridDoc, CTachyonDoc)
END_MESSAGE_MAP()


// CGridDoc �����Դϴ�.

#ifdef _DEBUG
void CGridDoc::AssertValid() const
{
	CTachyonDoc::AssertValid();
}

void CGridDoc::Dump(CDumpContext& dc) const
{
	CTachyonDoc::Dump(dc);
}
#endif //_DEBUG


// CGridDoc serialization�Դϴ�.

void CGridDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
	}
	else
	{
	}
}


// CGridDoc ����Դϴ�.

void CGridDoc::DeleteForRestore()
{
	POSITION pos = GetFirstViewPosition();

	while(pos)
	{
		CView *pView = GetNextView(pos);

		if( pView && pView->IsKindOf(RUNTIME_CLASS(CGridView)) )
			((CGridView *) pView)->DeleteForRestore();
	}
}

void CGridDoc::Restore()
{
	POSITION pos = GetFirstViewPosition();

	while(pos)
	{
		CView *pView = GetNextView(pos);

		if( pView && pView->IsKindOf(RUNTIME_CLASS(CGridView)) )
		{
			((CGridView *) pView)->Restore();
			((CGridView *) pView)->Render();
		}
	}
}
