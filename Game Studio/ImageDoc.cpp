// ImageDoc.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "Game Studio.h"
#include "ImageFrame.h"
#include "ImageView.h"


// CImageDoc

IMPLEMENT_DYNCREATE(CImageDoc, CTachyonDoc)

CImageDoc::CImageDoc()
{
	m_bDocType = ITEM_IMAGE;
	m_pItem = NULL;
	m_dwTick = 0;
}

BOOL CImageDoc::OnNewDocument()
{
	if (!CTachyonDoc::OnNewDocument())
		return FALSE;
	return TRUE;
}

CImageDoc::~CImageDoc()
{
	if(m_pItem)
	{
		m_pItem->SetMainDocument(NULL);
		m_pItem = NULL;
	}
}


BEGIN_MESSAGE_MAP(CImageDoc, CTachyonDoc)
END_MESSAGE_MAP()


// CImageDoc �����Դϴ�.

#ifdef _DEBUG
void CImageDoc::AssertValid() const
{
	CTachyonDoc::AssertValid();
}

void CImageDoc::Dump(CDumpContext& dc) const
{
	CTachyonDoc::Dump(dc);
}
#endif //_DEBUG


// CImageDoc serialization�Դϴ�.

void CImageDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
	}
	else
	{
	}
}


// CImageDoc ����Դϴ�.

CPlayCtrl *CImageDoc::GetPlayCtrl()
{
	CImageFrame *pFrame = (CImageFrame *) GetFrameWnd();
	return pFrame ? pFrame->m_wndPlayCtrlBar.GetPlayCtrl() : NULL;
}

CImageBar *CImageDoc::GetImageBar()
{
	CImageFrame *pFrame = (CImageFrame *) GetFrameWnd();
	return pFrame ? &pFrame->m_wndImageBar : NULL;
}

void CImageDoc::InitData( LPVOID pData)
{
	CTachyonDoc::InitData(pData);
	if(!pData)
		return;

	m_pItem = (CImageItem *) pData;
	m_pItem->SetMainDocument(this);

	Update();
}

void CImageDoc::Update()
{
	if(m_pItem)
	{
		CImageBar *pControl = GetImageBar();

		SetTitle(m_pItem->m_strName);
		m_pItem->Regulate();

		if(pControl)
			pControl->SetItem(m_pItem);
	}
}

void CImageDoc::RedrawAllView()
{
	POSITION pos = GetFirstViewPosition();

	if(!m_bAutoDelete)
		return;

	while(pos)
	{
		CView *pView = GetNextView(pos);

		if( pView && pView->IsKindOf(RUNTIME_CLASS(CImageView)) )
			((CImageView *) pView)->Render();
	}
}

void CImageDoc::DeleteForRestore()
{
	POSITION pos = GetFirstViewPosition();

	while(pos)
	{
		CView *pView = GetNextView(pos);

		if( pView && pView->IsKindOf(RUNTIME_CLASS(CImageView)) )
			((CImageView *) pView)->DeleteForRestore();
	}
}

void CImageDoc::Restore()
{
	POSITION pos = GetFirstViewPosition();

	while(pos)
	{
		CView *pView = GetNextView(pos);

		if( pView && pView->IsKindOf(RUNTIME_CLASS(CImageView)) )
		{
			((CImageView *) pView)->Restore();
			((CImageView *) pView)->Render();
		}
	}
}
